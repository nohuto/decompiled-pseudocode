/*
 * XREFs of ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C0072118
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0049550 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00428EC (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C004438C (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C004450C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0072210 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0094BC8 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C009F760 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00A9560 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

CInputDest *__fastcall CMouseProcessor::HandleCapture_BreakHasMouseOwner(
        __int64 a1,
        CInputDest *a2,
        CInputDest *a3,
        __int64 a4)
{
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v9; // rdx
  int v10; // eax
  int v11; // eax
  bool v12; // zf
  char v14; // al
  struct tagTHREADINFO *PtiFromInputDest; // rax
  HWND WindowHandle; // rax

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3688), 1, 1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4009LL);
  if ( *(_DWORD *)(a4 + 32) != 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4010LL);
  CInputDest::CInputDest(a2, (const struct CInputDest *)(a1 + 3568));
  CInputDest::GetThreadInfo((CInputDest *)(a1 + 3568));
  ThreadInfo = CInputDest::GetThreadInfo(a3);
  if ( v9 )
  {
    if ( v9 == ThreadInfo )
      goto LABEL_7;
    goto LABEL_14;
  }
  if ( ThreadInfo )
  {
LABEL_14:
    v14 = 0;
    goto LABEL_17;
  }
  v14 = CInputDest::operator==((int *)(a1 + 3568), (__int64)a3);
LABEL_17:
  if ( !v14 )
  {
    PtiFromInputDest = (struct tagTHREADINFO *)anonymous_namespace_::GetPtiFromInputDest((__int64)a3, 2);
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, PtiFromInputDest, 0);
  }
LABEL_7:
  if ( (*(_DWORD *)(*(_QWORD *)(a4 + 8) + 112LL) & 2) != 0 )
  {
    WindowHandle = CInputDest::GetWindowHandle(a2);
    CBaseProcessor::PostQEventWork(a1, WindowHandle, 0LL);
  }
  v10 = *(_DWORD *)(a4 + 28);
  if ( !v10 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7103LL);
    v10 = *(_DWORD *)(a4 + 28);
  }
  v11 = ~v10;
  v12 = (v11 & *(_DWORD *)(a1 + 3564)) == 0;
  *(_DWORD *)(a1 + 3564) &= v11;
  if ( v12 )
  {
    CInputDest::SetEmpty((CInputDest *)(a1 + 3568));
    _InterlockedExchange((volatile __int32 *)(a1 + 3688), 0);
  }
  return a2;
}
