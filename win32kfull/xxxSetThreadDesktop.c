/*
 * XREFs of xxxSetThreadDesktop @ 0x1C00361B8
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x1C0093CF0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00948B0 (xxxSetCsrssThreadDesktop.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0094CDC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserSetThreadDesktop @ 0x1C00EE1E0 (NtUserSetThreadDesktop.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00FA1BC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxNextWindow @ 0x1C01CB604 (xxxNextWindow.c)
 * Callees:
 *     zzzSetDesktop @ 0x1C0036340 (zzzSetDesktop.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C00390F4 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     MapDesktop @ 0x1C003E450 (MapDesktop.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C00CD940 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     MagContextThreadCallout @ 0x1C01A4070 (MagContextThreadCallout.c)
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
        && (v11 = *(_QWORD *)(v10 + 216)) != 0
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
        v12 = (tagQ *)AllocQueue(0LL);
        if ( !v12 )
        {
          UserSetLastError(8LL);
          return 3221225495LL;
        }
        tagQ::zzzAttachToQueue(v12, gptiCurrent, 0LL, 0);
      }
      else if ( v7 == gpqForeground )
      {
        if ( !gbIgnoreStressedOutStuff && *(_QWORD *)(v7 + 136) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5183LL);
        xxxSetForegroundWindow2(0LL, gptiCurrent, 0LL);
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
