/*
 * XREFs of ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1C01E9040
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0079840 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C007CE44 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C9B24 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C00C9B90 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z @ 0x1C01F5FAC (-GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0201170 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionAllocThreadPointerData @ 0x1C023C43C (ApiSetEditionAllocThreadPointerData.c)
 */

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
