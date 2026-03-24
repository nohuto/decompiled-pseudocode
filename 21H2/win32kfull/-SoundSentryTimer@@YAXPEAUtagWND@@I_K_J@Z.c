/*
 * XREFs of ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0213180
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     xxxFlashWindow @ 0x1C002B078 (xxxFlashWindow.c)
 *     xxxRedrawWindow @ 0x1C0072354 (xxxRedrawWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

void __fastcall SoundSentryTimer(struct tagWND *a1)
{
  __int64 v1; // rax
  struct tagWND *v2; // rbx
  struct tagRECT *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 ThreadWin32Thread; // rax
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  v1 = HMValidateHandleNoSecure((unsigned __int64)ghwndSoundSentry, 1);
  v2 = (struct tagWND *)v1;
  if ( !v1 )
    gdwCurrentEffect = 3;
  switch ( gdwCurrentEffect )
  {
    case 1u:
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v7 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v7;
      *((_QWORD *)&v7 + 1) = v2;
      if ( v2 )
        HMLockObject(v2);
      xxxFlashWindow((__int64)v2, 0, 0);
      goto LABEL_16;
    case 2u:
      if ( (unsigned int)IsWindowDesktopComposed(v1) )
      {
        v3 = &grcScreenFlash;
        goto LABEL_7;
      }
      v4 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v7 = *(_QWORD *)(v4 + 416);
      *(_QWORD *)(v4 + 416) = &v7;
      *((_QWORD *)&v7 + 1) = v2;
      if ( v2 )
        HMLockObject(v2);
      xxxRedrawWindow(v2, 0LL, 0LL, 645);
LABEL_16:
      ThreadUnlock1(v5);
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
