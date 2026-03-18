/*
 * XREFs of ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C01BD900
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0088D80 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D3598 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C01D447C (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D8878 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C01DA6D4 (IsPointerInputMessageWithState.c)
 *     ApiSetEditionAllocAndLinkThreadPointerData @ 0x1C02060D0 (ApiSetEditionAllocAndLinkThreadPointerData.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C02078CC (ApiSetEditionFindThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CTouchProcessor::AddThreadPointerData(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        int a4,
        _QWORD *a5,
        unsigned int a6,
        struct tagINPUTDEST *a7,
        int a8)
{
  unsigned __int16 v9; // r15
  __int64 v10; // r12
  BOOL v12; // ebx
  __int64 v13; // rdx
  CTouchProcessor *v14; // rcx
  __int64 v15; // r8
  const struct CPointerMsgData *MsgData; // rax
  __int64 v17; // rdx
  CTouchProcessor *v18; // rcx
  __int64 v19; // r8
  __int16 v20; // ax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // ecx
  __int64 v27; // rax
  __int64 ThreadPointerData; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdi
  _QWORD *v32; // rdx
  int v33; // r9d
  int v34; // r9d
  int v35; // edx
  __int16 v36; // r8
  __int16 v37; // r10
  int v38; // edx
  __int16 v39; // r8
  int v40; // r9d
  __int64 v41; // rdx
  __int64 v42; // r8
  CInpLockGuard *v44[6]; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE v45[128]; // [rsp+70h] [rbp-C8h] BYREF

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
      106,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v44, (struct CInpLockGuard *)(a1 + 32), a5);
  CInputDest::CInputDest((CInputDest *)v45, a7);
  if ( !v9 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  MsgData = CTouchProcessor::GetMsgData(v14, (unsigned __int64)a5);
  if ( MsgData )
    v20 = *((_WORD *)MsgData + 8);
  else
    v20 = 0;
  if ( v9 != v20 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
  if ( a6 != 528 && !(unsigned int)IsPointerInputMessageWithState(a6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v21, v22);
  v24 = *((unsigned int *)CTouchProcessor::GetMsgData(v18, (unsigned __int64)a5) + 9);
  if ( (v24 & 2) != 0 )
  {
    if ( *(struct _KTHREAD **)(a1 + 40) != KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
    v23 = a5[5];
    if ( v23 )
      CTouchProcessor::SetDelegateActionInt(v24, v23, 2LL);
  }
  if ( a6 - 578 <= 0xF )
  {
    v26 = 32785;
    if ( _bittest(&v26, a6 - 578) )
    {
      if ( *(struct _KTHREAD **)(a1 + 40) != KeGetCurrentThread() )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(32785LL, v23, v25);
      v27 = a5[5];
      if ( v27 )
        *(_DWORD *)(v27 + 304) |= 1u;
    }
  }
  ThreadPointerData = ApiSetEditionFindThreadPointerData(v10, v9);
  v31 = ThreadPointerData;
  if ( ThreadPointerData )
  {
    v32 = *(_QWORD **)(ThreadPointerData + 24);
    if ( v32 == a5 )
    {
      if ( *(_DWORD *)(ThreadPointerData + 20) != a4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v32, v30);
      v33 = *(_DWORD *)(v31 + 48);
      if ( (v33 & 1) == 0 && a8 )
        *(_DWORD *)(v31 + 48) = v33 | 1;
      *(_DWORD *)(v31 + 32) = a6;
      *(_QWORD *)(v31 + 40) = CInputDest::GetWindowHandle((CInputDest *)v45);
      *(_DWORD *)(v31 + 48) = v34 & 0xFFFFFFF5;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v35) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v35) = v37;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v36) = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == v37) )
      {
        LOBYTE(v36) = v37;
      }
      if ( (_BYTE)v35 || (_BYTE)v36 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v35,
          v36,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          7,
          107,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      goto LABEL_63;
    }
    CTouchProcessor::UnreferenceMsgData(a1, v32, 4LL);
    *(_QWORD *)(v31 + 24) = 0LL;
  }
  else
  {
    v31 = ApiSetEditionAllocAndLinkThreadPointerData(v10);
    if ( !v31 )
      goto LABEL_52;
  }
  *(_DWORD *)(v31 + 48) &= ~8u;
  *(_WORD *)(v31 + 16) = v9;
  *(_DWORD *)(v31 + 20) = a4;
  *(_QWORD *)(v31 + 24) = a5;
  *(_DWORD *)(v31 + 32) = a6;
  *(_QWORD *)(v31 + 40) = CInputDest::GetWindowHandle((CInputDest *)v45);
  *(_DWORD *)(v31 + 48) = a8 & 1 | v40 & 0xFFFFFFFC;
  CTouchProcessor::ReferenceMsgData(a1, a5, 4LL);
LABEL_52:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v38) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v38) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    LOBYTE(v12) = 0;
  if ( (_BYTE)v38 || v12 )
  {
    LOBYTE(v39) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v38,
      v39,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      108,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  }
  v12 = v31 != 0;
LABEL_63:
  CInputDest::SetEmpty((CInputDest *)v45);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v44, v41, v42);
  return v12;
}
