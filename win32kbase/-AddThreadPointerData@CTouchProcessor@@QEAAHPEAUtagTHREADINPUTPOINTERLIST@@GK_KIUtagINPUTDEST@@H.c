/*
 * XREFs of ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C01E8C20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0079840 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C007CE44 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C9B24 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C00C9B90 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C00F5E90 (ApiSetEditionFindThreadPointerData.c)
 *     ?GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z @ 0x1C01F5FAC (-GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01F6280 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z @ 0x1C01F635C (-GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0201170 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C0202150 (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0207518 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C02095DC (IsPointerInputMessageWithState.c)
 *     ApiSetEditionAllocAndLinkThreadPointerData @ 0x1C023C2E0 (ApiSetEditionAllocAndLinkThreadPointerData.c)
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
  unsigned __int16 v9; // r15
  __int64 v10; // r12
  BOOL v12; // ebx
  CTouchProcessor *v13; // rcx
  CTouchProcessor *v14; // rcx
  __int64 v15; // r8
  struct CPointerCaptureData *PointerCaptureData; // rax
  __int64 v17; // rcx
  int v18; // ecx
  struct CPointerCaptureData *v19; // rax
  __int64 ThreadPointerData; // rax
  __int64 v21; // rdi
  void *v22; // rdx
  int v23; // r9d
  int v24; // r9d
  int v25; // edx
  __int16 v26; // r8
  __int16 v27; // r10
  int v28; // edx
  __int16 v29; // r8
  unsigned int v30; // r9d
  int v31; // r9d
  _BYTE v33[56]; // [rsp+48h] [rbp-100h] BYREF
  _BYTE v34[128]; // [rsp+80h] [rbp-C8h] BYREF

  v9 = a3;
  v10 = a2;
  v12 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      113,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v33, (struct CInpLockGuard *)(a1 + 32), a5);
  CInputDest::CInputDest((CInputDest *)v34, a7);
  if ( !v9 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4765);
  if ( v9 != CTouchProcessor::GetMsgPointerId(v13, (unsigned __int64)a5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4766);
  if ( a6 != 528 && !(unsigned int)IsPointerInputMessageWithState(a6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4768);
  if ( (*((_DWORD *)CTouchProcessor::GetNonConstMsgData(v14, (unsigned __int64)a5) + 9) & 2) != 0 )
  {
    PointerCaptureData = CTouchProcessor::GetPointerCaptureData((CTouchProcessor *)a1, (unsigned __int64)a5);
    if ( PointerCaptureData )
      CTouchProcessor::SetDelegateActionInt(v17, PointerCaptureData, 2LL);
  }
  if ( a6 - 578 <= 0xF )
  {
    v18 = 32785;
    if ( _bittest(&v18, a6 - 578) )
    {
      v19 = CTouchProcessor::GetPointerCaptureData((CTouchProcessor *)a1, (unsigned __int64)a5);
      if ( v19 )
        *((_DWORD *)v19 + 76) |= 1u;
    }
  }
  ThreadPointerData = ApiSetEditionFindThreadPointerData(v10, v9, v15);
  v21 = ThreadPointerData;
  if ( ThreadPointerData )
  {
    v22 = *(void **)(ThreadPointerData + 24);
    if ( v22 == a5 )
    {
      if ( *(_DWORD *)(ThreadPointerData + 20) != a4 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4823);
      v23 = *(_DWORD *)(v21 + 48);
      if ( (v23 & 1) == 0 && a8 )
        *(_DWORD *)(v21 + 48) = v23 | 1;
      *(_DWORD *)(v21 + 32) = a6;
      *(_QWORD *)(v21 + 40) = CInputDest::GetWindowHandle((CInputDest *)v34);
      *(_DWORD *)(v21 + 48) = v24 & 0xFFFFFFF5;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v25) = v27;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v26) = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == v27) )
      {
        LOBYTE(v26) = v27;
      }
      if ( (_BYTE)v25 || (_BYTE)v26 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v25,
          v26,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          7,
          114,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      goto LABEL_56;
    }
    CTouchProcessor::UnreferenceMsgData(a1, v22, 4LL);
    *(_QWORD *)(v21 + 24) = 0LL;
  }
  else
  {
    v21 = ApiSetEditionAllocAndLinkThreadPointerData(v10);
    if ( !v21 )
      goto LABEL_45;
  }
  v30 = *(_DWORD *)(v21 + 48) & 0xFFFFFFF7;
  *(_WORD *)(v21 + 16) = v9;
  *(_DWORD *)(v21 + 48) = v30;
  *(_DWORD *)(v21 + 20) = a4;
  *(_QWORD *)(v21 + 24) = a5;
  *(_DWORD *)(v21 + 32) = a6;
  *(_QWORD *)(v21 + 40) = CInputDest::GetWindowHandle((CInputDest *)v34);
  *(_DWORD *)(v21 + 48) = (v31 ^ (a8 ^ v31) & 1) & 0xFFFFFFFD;
  CTouchProcessor::ReferenceMsgData(a1, a5, 4LL);
LABEL_45:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v28) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v28) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    LOBYTE(v12) = 0;
  if ( (_BYTE)v28 || v12 )
  {
    LOBYTE(v29) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v28,
      v29,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      115,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
  v12 = v21 != 0;
LABEL_56:
  CInputDest::SetEmpty((CInputDest *)v34);
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v33);
  return v12;
}
