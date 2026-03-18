/*
 * XREFs of ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0211EA0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     xxxRedrawWindow @ 0x1C004A1EC (xxxRedrawWindow.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 *     xxxFlashWindow @ 0x1C010B918 (xxxFlashWindow.c)
 */

void __fastcall SoundSentryTimer(struct tagWND *a1)
{
  __int64 v1; // rax
  unsigned __int64 *v2; // rbx
  struct tagRECT *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  v1 = HMValidateHandleNoSecure((int)ghwndSoundSentry, 1);
  v2 = (unsigned __int64 *)v1;
  if ( !v1 )
    gdwCurrentEffect = 3;
  switch ( gdwCurrentEffect )
  {
    case 1u:
      ThreadLock(v1, (__int64 *)&v7);
      xxxFlashWindow(v2, 0, 0);
      goto LABEL_12;
    case 2u:
      if ( (unsigned int)IsWindowDesktopComposed(v1) )
      {
        v3 = &grcScreenFlash;
        goto LABEL_7;
      }
      ThreadLock((__int64)v2, (__int64 *)&v7);
      xxxRedrawWindow((struct tagWND *)v2, 0LL, 0LL, 645);
LABEL_12:
      ThreadUnlock1(v5, v4, v6);
      break;
    case 3u:
      v3 = 0LL;
LABEL_7:
      xxxRedrawWindow(0LL, &v3->left, 0LL, 66181);
      break;
  }
  gdwCurrentEffect = 0;
  ghwndSoundSentry = 0LL;
  FindTimer(0LL, gtmridSoundSentry, 4u, 1, 0LL);
  gtmridSoundSentry = 0LL;
}
