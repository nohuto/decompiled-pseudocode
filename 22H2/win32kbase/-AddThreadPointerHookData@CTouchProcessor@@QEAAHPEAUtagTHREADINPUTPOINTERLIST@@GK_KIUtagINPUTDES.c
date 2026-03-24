/*
 * XREFs of ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1C0187D30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0043D04 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0043EC0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C007CAC0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0095988 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCC20 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019AE48 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionAllocThreadPointerData @ 0x1C01CA89C (ApiSetEditionAllocThreadPointerData.c)
 */

__int64 __fastcall CTouchProcessor::AddThreadPointerHookData(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        _WORD *a5,
        int a6,
        struct tagINPUTDEST *a7)
{
  unsigned int v11; // ebx
  __int16 v12; // ax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  HWND WindowHandle; // rax
  CInpLockGuard *v18[7]; // [rsp+28h] [rbp-100h] BYREF
  _BYTE v19[128]; // [rsp+60h] [rbp-C8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v18, (struct CInpLockGuard *)(a1 + 40), a5);
  v11 = 0;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4481);
  v12 = 0;
  if ( a5 )
    v12 = a5[8];
  if ( a3 != v12 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4482);
  CInputDest::CInputDest((CInputDest *)v19, a7);
  if ( !*(_QWORD *)(a2 + 24) )
  {
    v14 = ApiSetEditionAllocThreadPointerData(v13);
    v15 = v14;
    if ( v14 )
    {
      *(_WORD *)(v14 + 16) = a3;
      *(_DWORD *)(v14 + 20) = a4;
      *(_QWORD *)(v14 + 24) = a5;
      *(_DWORD *)(v14 + 32) = a6;
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v19);
      *(_DWORD *)(v15 + 48) &= ~1u;
      *(_QWORD *)(v15 + 40) = WindowHandle;
      CTouchProcessor::ReferenceMsgData(a1, a5, 5LL);
      *(_QWORD *)(a2 + 24) = v15;
      v11 = 1;
    }
  }
  CInputDest::SetEmpty((CInputDest *)v19);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v18);
  return v11;
}
