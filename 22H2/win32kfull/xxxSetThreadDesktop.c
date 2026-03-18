/*
 * XREFs of xxxSetThreadDesktop @ 0x1C006A6E4
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C0020C7C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00697C0 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C0069B30 (xxxRestoreCsrssThreadDesktop.c)
 *     NtUserSetThreadDesktop @ 0x1C006C830 (NtUserSetThreadDesktop.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C006DCB0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxNextWindow @ 0x1C01CA504 (xxxNextWindow.c)
 * Callees:
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C005C644 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzSetDesktop @ 0x1C006A860 (zzzSetDesktop.c)
 *     MapDesktop @ 0x1C00E4A20 (MapDesktop.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C01158D4 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     MagContextThreadCallout @ 0x1C01A2E60 (MagContextThreadCallout.c)
 */

__int64 __fastcall xxxSetThreadDesktop(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rsi
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  tagQ *v12; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+38h] [rbp-20h]
  int v15; // [rsp+3Ch] [rbp-1Ch]

  v5 = *(_QWORD **)(gptiCurrent + 424LL);
  if ( !a2 || (v13[1] = *v5, v13[0] = 1LL, v13[2] = a2, v14 = 0, v15 = 1, result = MapDesktop(v13), (int)result >= 0) )
  {
    if ( PsGetCurrentProcess(a1, a2, a3) != gpepCSRSS )
    {
      if ( *(_DWORD *)(gptiCurrent + 904LL)
        || *(_DWORD *)(gptiCurrent + 680LL)
        || (v10 = *(_QWORD *)(gptiCurrent + 456LL)) != 0
        && (v11 = *(_QWORD *)(v10 + 224)) != 0
        && *(_QWORD *)(v11 + 32) == gptiCurrent )
      {
        UserSetLastError(170LL);
        return 2147483665LL;
      }
      if ( !v5[42] && a1 )
      {
        LockObjectAssignment(v5 + 42, a2);
        v5[48] = a1;
      }
    }
    if ( *(_QWORD *)(gptiCurrent + 456LL) != a2 && (*(_DWORD *)(gptiCurrent + 1272LL) & 8) != 0 )
      MagContextThreadCallout(gMagnContext, gptiCurrent, 0LL, 1LL);
    if ( *(_QWORD *)(gptiCurrent + 456LL) != a2 )
    {
      if ( tagQ::AreMultipleThreadsAttached(*(tagQ **)(gptiCurrent + 432LL)) )
      {
        v12 = (tagQ *)AllocQueue(0LL, 0LL);
        if ( !v12 )
        {
          UserSetLastError(8LL);
          return 3221225495LL;
        }
        tagQ::zzzAttachToQueue(v12, gptiCurrent, 0LL);
      }
      else if ( v7 == gpqForeground )
      {
        if ( !gbIgnoreStressedOutStuff && *(_QWORD *)(v7 + 136) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5207LL);
        xxxSetForegroundWindow2(0LL, gptiCurrent, 0);
      }
      else if ( !v8 )
      {
        v9 = (gdwGTERMFlags & 1) - 1;
        *(_DWORD *)(gptiCurrent + 760LL) = v9;
        *(_DWORD *)(v7 + 392) = v9;
      }
    }
    return zzzSetDesktop(gptiCurrent);
  }
  return result;
}
