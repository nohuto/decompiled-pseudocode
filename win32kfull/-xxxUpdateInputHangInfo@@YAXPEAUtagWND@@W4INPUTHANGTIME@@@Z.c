/*
 * XREFs of ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x1C00719A0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     xxxDesktopThreadWaiter @ 0x1C0094300 (xxxDesktopThreadWaiter.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     xxxClearWakeMask @ 0x1C01B4860 (xxxClearWakeMask.c)
 * Callees:
 *     ?IsWindowGhosted@@YA_NPEBUtagWND@@@Z @ 0x1C00254FC (-IsWindowGhosted@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01F5AA4 (-xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01F5B3C (-xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxUpdateInputHangInfo(struct tagWND *a1, int a2)
{
  unsigned __int64 v3; // r8
  int v4; // edi
  __int64 *v6; // rdx
  __int64 v7; // rax
  int v8; // eax

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
    v6 = *(__int64 **)(gptiCurrent + 1200LL);
    if ( v6 )
    {
      while ( (struct tagWND *)v6[1] != a1 )
      {
        v8 = *((_DWORD *)v6 + 4);
        if ( v8 )
        {
          if ( (unsigned int)(v3 - v8) > gdwHungAppTimeout )
            break;
        }
        v6 = (__int64 *)*v6;
        if ( !v6 )
          goto LABEL_14;
      }
      v6[1] = (__int64)a1;
      *((_DWORD *)v6 + 4) = v4;
    }
    else
    {
LABEL_14:
      v7 = Win32AllocPoolZInit(48LL, 1952936789LL);
      if ( v7 )
      {
        *(_QWORD *)v7 = *(_QWORD *)(gptiCurrent + 1200LL);
        *(_QWORD *)(v7 + 8) = a1;
        *(_DWORD *)(v7 + 16) = v4;
        *(_QWORD *)(gptiCurrent + 1200LL) = v7;
      }
    }
    if ( IsWindowGhosted(a1) )
      xxxHandleHealthyWindow(a1);
  }
  else
  {
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1216LL) = v4;
    if ( *(int *)(gptiCurrent + 488LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
  }
  *(_QWORD *)(gptiCurrent + 1272LL) &= ~0x200000000uLL;
  return EtwTraceProcessWindowInfo(gptiCurrent);
}
