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
