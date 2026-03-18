/*
 * XREFs of ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C0044710
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0040FFC (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003B608 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C003C340 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0041A94 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00447F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C00B18B0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00BC62C (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CInputDest *__fastcall CMouseProcessor::HandleCapture_BreakHasMouseOwner(
        __int64 a1,
        CInputDest *a2,
        CInputDest *a3,
        __int64 a4)
{
  __int64 v6; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  bool v15; // zf
  struct tagTHREADINFO *PtiFromInputDest; // rax
  HWND WindowHandle; // rax
  __int64 v19; // rcx

  v6 = 1LL;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3696), 1, 1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, a2, a3);
  if ( *(_DWORD *)(a4 + 32) != 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, a3);
  CInputDest::CInputDest(a2, (const struct CInputDest *)(a1 + 3576));
  CInputDest::GetThreadInfo((CInputDest *)(a1 + 3576));
  ThreadInfo = CInputDest::GetThreadInfo(a3);
  if ( v10 )
  {
    if ( v10 == ThreadInfo )
      goto LABEL_7;
    goto LABEL_16;
  }
  if ( ThreadInfo || !CInputDest::operator==((unsigned int *)(a1 + 3576), (__int64)a3, v11) )
  {
LABEL_16:
    PtiFromInputDest = (struct tagTHREADINFO *)anonymous_namespace_::GetPtiFromInputDest((__int64)a3, 2LL, v11);
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, PtiFromInputDest, 0);
  }
LABEL_7:
  v12 = *(unsigned int *)(*(_QWORD *)(a4 + 8) + 112LL);
  if ( (v12 & 2) != 0 )
  {
    WindowHandle = CInputDest::GetWindowHandle(a2);
    CBaseProcessor::PostQEventWork(v19, WindowHandle, 0LL);
  }
  v13 = *(_DWORD *)(a4 + 28);
  if ( !v13 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v10, v11);
    v13 = *(_DWORD *)(a4 + 28);
  }
  v14 = ~v13;
  v15 = (v14 & *(_DWORD *)(a1 + 3572)) == 0;
  *(_DWORD *)(a1 + 3572) &= v14;
  if ( v15 )
  {
    CInputDest::SetEmpty((CInputDest *)(a1 + 3576));
    _InterlockedExchange((volatile __int32 *)(a1 + 3696), 0);
  }
  return a2;
}
