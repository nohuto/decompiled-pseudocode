/*
 * XREFs of xxxUpdateInputHangInfo @ 0x1C00574C0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     xxxDesktopThreadWaiter @ 0x1C00A4844 (xxxDesktopThreadWaiter.c)
 *     xxxClearWakeMask @ 0x1C01D9F44 (xxxClearWakeMask.c)
 * Callees:
 *     ?IsWindowGhosted@@YAHPEBUtagWND@@@Z @ 0x1C0062EF0 (-IsWindowGhosted@@YAHPEBUtagWND@@@Z.c)
 *     xxxHandleHealthyThread @ 0x1C0144560 (xxxHandleHealthyThread.c)
 *     ?xxxHandleHealthyWindow@@YAHPEAUtagWND@@@Z @ 0x1C0144620 (-xxxHandleHealthyWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxUpdateInputHangInfo(struct tagWND *a1, int a2)
{
  unsigned __int64 v3; // r8
  int v4; // ebp
  unsigned int v5; // edi
  __int64 *i; // rdx
  __int64 v8; // rcx
  int v9; // eax

  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a2 )
  {
    v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !(_DWORD)v3 )
      v4 = -1;
  }
  else
  {
    v4 = 0;
  }
  if ( a1 )
  {
    for ( i = *(__int64 **)(gptiCurrent + 1184LL); i; i = (__int64 *)*i )
    {
      if ( (struct tagWND *)i[1] != a1 )
      {
        v9 = *((_DWORD *)i + 4);
        if ( !v9 || (unsigned int)(v3 - v9) <= gdwHungAppTimeout )
          continue;
      }
      i[1] = (__int64)a1;
      *((_DWORD *)i + 4) = v4;
LABEL_13:
      v5 = 1;
      goto LABEL_14;
    }
    v5 = 0;
    v8 = Win32AllocPoolZInit(48LL, 1952936789LL);
    if ( v8 )
    {
      *(_QWORD *)v8 = *(_QWORD *)(gptiCurrent + 1184LL);
      *(_QWORD *)(v8 + 8) = a1;
      *(_DWORD *)(v8 + 16) = v4;
      *(_QWORD *)(gptiCurrent + 1184LL) = v8;
      goto LABEL_13;
    }
LABEL_14:
    if ( (unsigned int)IsWindowGhosted(a1) )
      xxxHandleHealthyWindow(a1);
  }
  else
  {
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1200LL) = v4;
    v5 = 1;
    if ( *(int *)(gptiCurrent + 488LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
  }
  *(_QWORD *)(gptiCurrent + 1256LL) &= ~0x200000000uLL;
  EtwTraceProcessWindowInfo(gptiCurrent);
  return v5;
}
