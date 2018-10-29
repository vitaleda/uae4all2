/* 
  * UAE - The Un*x Amiga Emulator
  * 
  * Support for Linux/USS sound
  * 
  * Copyright 1997 Bernd Schmidt
  */

extern int sound_fd;
extern uae_u16 *sndbufpt;
extern uae_u16 *callback_sndbuff;
extern uae_u16 *render_sndbuff;
extern int sndbufsize;
extern void finish_sound_buffer (void);

#define DEFAULT_SOUND_BITS 16

#if defined(PANDORA) || defined(ANDROIDSDL)
#define DEFAULT_SOUND_CHANNELS 2
#else
#define DEFAULT_SOUND_CHANNELS 1
#endif

#ifdef __SWITCH__
#define DEFAULT_SOUND_FREQ 48000
#else
#define DEFAULT_SOUND_FREQ 44100
#endif

extern void sound_default_evtime(void);
extern void uae4all_pause_music(void);
extern void pause_sound (void);
extern void resume_sound (void);
extern void uae4all_init_sound(void);
extern void uae4all_resume_music(void);
extern void uae4all_play_click(void);
extern void sound_default_evtime(void);
