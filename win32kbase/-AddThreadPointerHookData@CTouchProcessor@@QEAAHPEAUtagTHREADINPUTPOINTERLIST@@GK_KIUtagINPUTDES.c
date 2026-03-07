__int64 __fastcall CTouchProcessor::AddThreadPointerHookData(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        void *a5,
        int a6,
        struct tagINPUTDEST *a7)
{
  CTouchProcessor *v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  HWND WindowHandle; // rax
  _BYTE v18[56]; // [rsp+28h] [rbp-100h] BYREF
  _BYTE v19[128]; // [rsp+60h] [rbp-C8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v18, (struct CInpLockGuard *)(a1 + 32), a5);
  v12 = 0;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5009);
  if ( a3 != CTouchProcessor::GetMsgPointerId(v11, (unsigned __int64)a5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5010);
  CInputDest::CInputDest((CInputDest *)v19, a7);
  if ( !*(_QWORD *)(a2 + 24) )
  {
    v14 = ApiSetEditionAllocThreadPointerData(v13);
    v15 = v14;
    if ( v14 )
    {
      *(_DWORD *)(v14 + 32) = a6;
      *(_WORD *)(v14 + 16) = a3;
      *(_DWORD *)(v14 + 20) = a4;
      *(_QWORD *)(v14 + 24) = a5;
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v19);
      *(_DWORD *)(v15 + 48) &= ~1u;
      *(_QWORD *)(v15 + 40) = WindowHandle;
      CTouchProcessor::ReferenceMsgData(a1, a5, 5LL);
      *(_QWORD *)(a2 + 24) = v15;
      v12 = 1;
    }
  }
  CInputDest::SetEmpty((CInputDest *)v19);
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v18);
  return v12;
}
