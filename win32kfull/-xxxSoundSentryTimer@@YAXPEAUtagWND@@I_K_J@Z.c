/*
 * XREFs of ?xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01F7190
 * Callers:
 *     <none>
 * Callees:
 *     xxxFlashWindow @ 0x1C0005B74 (xxxFlashWindow.c)
 *     xxxRedrawWindow @ 0x1C0050700 (xxxRedrawWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     FindTimer @ 0x1C00DEEDC (FindTimer.c)
 */

void __fastcall xxxSoundSentryTimer(struct tagWND *a1)
{
  __int64 v1; // rax
  struct tagWND *v2; // rbx
  int *p_Queue; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  v1 = HMValidateHandleNoSecure((int)WPP_MAIN_CB.Queue.Wcb.DeviceContext, 1);
  v2 = (struct tagWND *)v1;
  if ( !v1 )
    LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = 3;
  switch ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) )
  {
    case 1:
      ThreadLock(v1, &v7);
      xxxFlashWindow(v2, 0, 0);
      goto LABEL_12;
    case 2:
      if ( (unsigned int)IsWindowDesktopComposed(v1) )
      {
        p_Queue = (int *)&WPP_MAIN_CB.Queue;
        goto LABEL_7;
      }
      ThreadLock(v2, &v7);
      xxxRedrawWindow(v2, 0LL, 0LL, 645);
LABEL_12:
      ThreadUnlock1(v5, v4, v6);
      break;
    case 3:
      p_Queue = 0LL;
LABEL_7:
      xxxRedrawWindow(0LL, p_Queue, 0LL, 66181);
      break;
  }
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = 0;
  WPP_MAIN_CB.Queue.Wcb.DeviceContext = 0LL;
  FindTimer(0LL, *(void **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 4u, 1, 0LL);
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
}
