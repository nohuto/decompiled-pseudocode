/*
 * XREFs of ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C0187980
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0043D04 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0043EC0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C007CAC0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0095988 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCC20 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019AE48 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C019BA18 (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019F9D8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C01A1218 (IsPointerInputMessageWithState.c)
 *     ApiSetEditionAllocAndLinkThreadPointerData @ 0x1C01CA7B0 (ApiSetEditionAllocAndLinkThreadPointerData.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C01CB69C (ApiSetEditionFindThreadPointerData.c)
 */

_BOOL8 __fastcall CTouchProcessor::AddThreadPointerData(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        int a4,
        void *a5,
        unsigned int a6,
        struct tagINPUTDEST *a7,
        int a8)
{
  __int64 v10; // r12
  __int64 v12; // rcx
  __int64 v13; // r8
  __int16 v14; // ax
  __int64 v15; // rdx
  BOOL v16; // edi
  int v17; // ecx
  __int64 v18; // rax
  __int64 ThreadPointerData; // rax
  __int64 v20; // rbx
  void *v21; // rdx
  int v22; // r9d
  int v23; // r9d
  int v24; // edx
  __int16 v25; // r10
  int v26; // edx
  int v27; // r9d
  CInpLockGuard *v29[7]; // [rsp+38h] [rbp-100h] BYREF
  _BYTE v30[128]; // [rsp+70h] [rbp-C8h] BYREF

  v10 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      108,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v29, (struct CInpLockGuard *)(a1 + 40), a5);
  CInputDest::CInputDest((CInputDest *)v30, a7);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4241);
  v14 = 0;
  if ( a5 )
    v14 = *((_WORD *)a5 + 8);
  if ( a3 != v14 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4242);
  if ( a6 != 528 && !(unsigned int)IsPointerInputMessageWithState(a6) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4244);
  if ( (*((_DWORD *)a5 + 9) & 2) != 0 )
  {
    if ( *(struct _KTHREAD **)(a1 + 48) != KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10191);
    v15 = *((_QWORD *)a5 + 5);
    if ( v15 )
      CTouchProcessor::SetDelegateActionInt(v12, v15, 2LL);
  }
  v16 = 1;
  if ( a6 - 578 <= 0xF )
  {
    v17 = 32785;
    if ( _bittest(&v17, a6 - 578) )
    {
      if ( *(struct _KTHREAD **)(a1 + 48) != KeGetCurrentThread() )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 10191);
      v18 = *((_QWORD *)a5 + 5);
      if ( v18 )
        *(_DWORD *)(v18 + 304) |= 1u;
    }
  }
  ThreadPointerData = ApiSetEditionFindThreadPointerData(v10, a3, v13);
  v20 = ThreadPointerData;
  if ( ThreadPointerData )
  {
    v21 = *(void **)(ThreadPointerData + 24);
    if ( v21 == a5 )
    {
      if ( *(_DWORD *)(ThreadPointerData + 20) != a4 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4299);
      v22 = *(_DWORD *)(v20 + 48);
      if ( (v22 & 1) == 0 && a8 )
        *(_DWORD *)(v20 + 48) = v22 | 1;
      *(_DWORD *)(v20 + 32) = a6;
      *(_QWORD *)(v20 + 40) = CInputDest::GetWindowHandle((CInputDest *)v30);
      *(_DWORD *)(v20 + 48) = v23 & 0xFFFFFFF5;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        && LOWORD(WPP_GLOBAL_Control->DeviceType) != v25 )
      {
        LOBYTE(v24) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v24,
          7,
          109,
          (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
      }
      goto LABEL_42;
    }
    CTouchProcessor::UnreferenceMsgData(a1, v21, 4LL);
    *(_QWORD *)(v20 + 24) = 0LL;
  }
  else
  {
    v20 = ApiSetEditionAllocAndLinkThreadPointerData(v10);
  }
  if ( v20 )
  {
    *(_DWORD *)(v20 + 48) &= ~8u;
    *(_WORD *)(v20 + 16) = a3;
    *(_DWORD *)(v20 + 20) = a4;
    *(_QWORD *)(v20 + 24) = a5;
    *(_DWORD *)(v20 + 32) = a6;
    *(_QWORD *)(v20 + 40) = CInputDest::GetWindowHandle((CInputDest *)v30);
    *(_DWORD *)(v20 + 48) = a8 & 1 | v27 & 0xFFFFFFFC;
    CTouchProcessor::ReferenceMsgData(a1, a5, 4LL);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v26) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v26,
      7,
      110,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  v16 = v20 != 0;
LABEL_42:
  CInputDest::SetEmpty((CInputDest *)v30);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v29);
  return v16;
}
