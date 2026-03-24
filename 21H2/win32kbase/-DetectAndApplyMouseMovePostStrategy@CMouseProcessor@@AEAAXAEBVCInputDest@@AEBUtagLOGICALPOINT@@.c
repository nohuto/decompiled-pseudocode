/*
 * XREFs of ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0044A88
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C004503C (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00428EC (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C004438C (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     QHelper::_anonymous_namespace_::GetQ @ 0x1C0044484 (QHelper--_anonymous_namespace_--GetQ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00444AC (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C004450C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C00449A0 (-SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0044D38 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     EtwTraceWakePump @ 0x1C0044E30 (EtwTraceWakePump.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C0044E6C (ApiSetEditionUpdateRawMouseMode.c)
 *     ApiSetEditionMouseMoveShellResilience @ 0x1C0044F1C (ApiSetEditionMouseMoveShellResilience.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C0044FD0 (CoalesceInputSourceMouseMoves.c)
 *     ApiSetEditionWakeThreadForInput @ 0x1C0045584 (ApiSetEditionWakeThreadForInput.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C0047A08 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     INPUTDEST_FROM_PWND @ 0x1C009E550 (INPUTDEST_FROM_PWND.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C00CCAA8 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     Feature_MinQMouseAndMiP__private_ReportDeviceUsage @ 0x1C00CDBCC (Feature_MinQMouseAndMiP__private_ReportDeviceUsage.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00CE630 (GetAppCompatFlags2QuadWord.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C017D0C0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall CMouseProcessor::DetectAndApplyMouseMovePostStrategy(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3,
        const struct CMouseProcessor::CMoveEvent *a4,
        struct _mouseCursorEvent *a5)
{
  __int64 v9; // r14
  int v10; // ecx
  int v11; // esi
  __int64 Queue; // r13
  struct tagWND *UserWindow; // rax
  __int64 v14; // rbx
  const struct tagLOGICALPOINT *v15; // r8
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r8d
  int v19; // r9d
  struct tagWND *v20; // rbx
  __int64 v21; // rcx
  __int64 PtiFromInputDest; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  _OWORD *v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  _OWORD v32[7]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v33[160]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v34; // [rsp+158h] [rbp+58h] BYREF
  const struct CMouseProcessor::CMoveEvent *v35; // [rsp+168h] [rbp+68h] BYREF

  v35 = a4;
  if ( !*(_DWORD *)a2 )
  {
    LODWORD(v34) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5215LL);
  }
  v9 = *((_QWORD *)a4 + 1);
  v10 = 4;
  if ( *(_DWORD *)(v9 + 148) != 1 )
    v10 = 0;
  v11 = v10 | 1;
  if ( (*(_DWORD *)(v9 + 112) & 4) == 0 )
    v11 = v10;
  Feature_MinQMouseAndMiP__private_ReportDeviceUsage();
  Queue = CInputDest::GetQueue(a2, 2);
  if ( !Queue )
  {
    if ( !*(_QWORD *)(v9 + 8) )
    {
      LODWORD(v35) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5245LL);
    }
    goto LABEL_17;
  }
  CoalesceInputSourceMouseMoves((struct tagQ *)Queue);
  UserWindow = CInputDest::GetUserWindow(a2);
  ApiSetEditionMouseMoveShellResilience(UserWindow);
  v14 = QHelper::_anonymous_namespace_::GetQ((__int64)a2);
  if ( v14 )
  {
    Feature_MinQMouseAndMiP__private_ReportDeviceUsage();
    *(_QWORD *)(v14 + 88) = CInputDest::GetThreadInfo(a2);
  }
  ApiSetEditionUpdateRawMouseMode(Queue);
  QHelper::SetMouseMovePoint(a2, a3, v15);
  if ( (unsigned int)dword_1C024BA90 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C024BA90, 64LL, v16, v17) )
  {
    v34 = Queue;
    v35 = *(const struct CMouseProcessor::CMoveEvent **)(*((_QWORD *)v35 + 1) + 88LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1C024BA90,
      (unsigned int)&unk_1C0220B0C,
      v18,
      v19,
      (__int64)&v35,
      (__int64)&v34);
  }
  v20 = CInputDest::GetUserWindow(a2);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(v21, 0);
  EtwTraceWakePump(PtiFromInputDest, v20, 512LL);
  if ( CInputDest::IsCompositionInput(a2) )
  {
    v11 |= 2u;
LABEL_17:
    CMouseProcessor::PostMouseMoveToInputDest(this, a2, v9, a3, v11, a5);
    return;
  }
  if ( (v11 & 1) != 0 )
    goto LABEL_17;
  v23 = QHelper::_anonymous_namespace_::GetQ((__int64)a2);
  if ( v23 )
    *(_DWORD *)(v23 + 388) |= 0x20u;
  ApiSetEditionWakeThreadForInput(a2);
  v24 = *(_QWORD *)(Queue + 136);
  if ( v24 && (GetAppCompatFlags2QuadWord(*(_QWORD *)(v24 + 16)) & 0x2000000000000LL) != 0 )
  {
    v25 = (_OWORD *)INPUTDEST_FROM_PWND(v33, *(_QWORD *)(Queue + 136));
    v26 = v25[1];
    v32[0] = *v25;
    v27 = v25[2];
    v32[1] = v26;
    v28 = v25[3];
    v32[2] = v27;
    v29 = v25[4];
    v32[3] = v28;
    v30 = v25[5];
    v32[4] = v29;
    v31 = v25[6];
    v32[5] = v30;
    v32[6] = v31;
    if ( !CInputDest::operator==((int *)a2, (__int64)v32) )
    {
      LODWORD(v35) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5323LL);
    }
    CMouseProcessor::PostMouseMoveToInputDest(this, a2, v9, a3, 0, a5);
  }
}
