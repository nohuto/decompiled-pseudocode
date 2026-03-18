/*
 * XREFs of ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1C01BA1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0052DB0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00563C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00B9674 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C00B96E0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z @ 0x1C01C716C (-GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D2390 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
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
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  HWND WindowHandle; // rax
  _BYTE v19[56]; // [rsp+28h] [rbp-100h] BYREF
  _BYTE v20[128]; // [rsp+60h] [rbp-C8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v19, (struct CInpLockGuard *)(a1 + 32), a5);
  v12 = 0;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4926);
  if ( a3 != CTouchProcessor::GetMsgPointerId(v11, (unsigned __int64)a5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4927);
  CInputDest::CInputDest((CInputDest *)v20, a7);
  if ( !*(_QWORD *)(a2 + 24) )
  {
    if ( qword_1C0296A20 )
    {
      if ( (int)qword_1C0296A20(v13) >= 0 )
      {
        if ( qword_1C0296A28 )
        {
          v15 = qword_1C0296A28(v14);
          v16 = v15;
          if ( v15 )
          {
            *(_DWORD *)(v15 + 32) = a6;
            *(_WORD *)(v15 + 16) = a3;
            *(_DWORD *)(v15 + 20) = a4;
            *(_QWORD *)(v15 + 24) = a5;
            WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v20);
            *(_DWORD *)(v16 + 48) &= ~1u;
            *(_QWORD *)(v16 + 40) = WindowHandle;
            CTouchProcessor::ReferenceMsgData(a1, a5, 5LL);
            *(_QWORD *)(a2 + 24) = v16;
            v12 = 1;
          }
        }
      }
    }
  }
  CInputDest::SetEmpty((CInputDest *)v20);
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v19);
  return v12;
}
