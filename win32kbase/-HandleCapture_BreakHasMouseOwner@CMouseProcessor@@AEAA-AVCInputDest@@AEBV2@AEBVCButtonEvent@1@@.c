/*
 * XREFs of ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C022DAB8
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C022F50C (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0007574 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C0009FE0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C007A190 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C007CE44 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C007D3C0 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00CBFF8 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C01E31F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 */

CInputDest *__fastcall CMouseProcessor::HandleCapture_BreakHasMouseOwner(
        __int64 a1,
        CInputDest *a2,
        CInputDest *a3,
        __int64 a4)
{
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v9; // rdx
  struct tagTHREADINFO *PtiFromInputDest; // rax
  HWND WindowHandle; // rax
  __int64 v12; // rcx
  int v13; // eax
  bool v14; // zf
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+38h] [rbp-60h] BYREF

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3696), 1, 1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4167);
  if ( *(_DWORD *)(a4 + 32) != 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4168);
  CInputDest::CInputDest(a2, (__int64 **)(a1 + 3576));
  CInputDest::GetThreadInfo((CInputDest *)(a1 + 3576));
  ThreadInfo = CInputDest::GetThreadInfo(a3);
  if ( v9 )
  {
    if ( v9 == ThreadInfo )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( ThreadInfo || !CInputDest::operator==((int *)(a1 + 3576), (__int64)a3) )
  {
LABEL_10:
    PtiFromInputDest = (struct tagTHREADINFO *)anonymous_namespace_::GetPtiFromInputDest((__int64)a3, 2);
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, PtiFromInputDest, 0);
  }
LABEL_11:
  if ( (*(_DWORD *)(*(_QWORD *)(a4 + 8) + 112LL) & 2) != 0 )
  {
    WindowHandle = CInputDest::GetWindowHandle(a2);
    CBaseProcessor::PostQEventWork(v12, (__int64)WindowHandle, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*(_DWORD *)(a4 + 28) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7390);
  v13 = ~*(_DWORD *)(a4 + 28);
  v14 = (v13 & *(_DWORD *)(a1 + 3572)) == 0;
  *(_DWORD *)(a1 + 3572) &= v13;
  if ( v14 )
  {
    CInputDest::SetEmpty((CInputDest *)(a1 + 3576));
    _InterlockedExchange((volatile __int32 *)(a1 + 3696), 0);
    if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C02CA7E0,
        (unsigned __int8 *)dword_1C029D468,
        0LL,
        0LL,
        2u,
        &v16);
  }
  return a2;
}
