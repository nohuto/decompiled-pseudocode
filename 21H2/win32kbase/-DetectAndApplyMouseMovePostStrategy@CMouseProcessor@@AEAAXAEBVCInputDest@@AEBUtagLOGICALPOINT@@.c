/*
 * XREFs of ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C003404C
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0033DD0 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C0033E80 (CoalesceInputSourceMouseMoves.c)
 *     ApiSetEditionMouseMoveShellResilience @ 0x1C0033EEC (ApiSetEditionMouseMoveShellResilience.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00341E0 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0034240 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     EtwTraceWakePump @ 0x1C0034380 (EtwTraceWakePump.c)
 *     ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C00343BC (-SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C003A804 (ApiSetEditionUpdateRawMouseMode.c)
 *     INPUTDEST_FROM_PWND @ 0x1C003AD68 (INPUTDEST_FROM_PWND.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003B608 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C003C340 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C00415CC (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ApiSetEditionWakeThreadForInput @ 0x1C00992B8 (ApiSetEditionWakeThreadForInput.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C0167FBC (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::DetectAndApplyMouseMovePostStrategy(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3,
        const struct CMouseProcessor::CMoveEvent *a4,
        struct _mouseCursorEvent *a5)
{
  __int64 v8; // rsi
  int v9; // ecx
  int v10; // edi
  struct tagQ *Queue; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct tagQ *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rdx
  struct tagTHREADINFO *ThreadInfo; // rax
  const struct tagLOGICALPOINT *v19; // r8
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rax
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  _OWORD v38[7]; // [rsp+30h] [rbp-D0h] BYREF
  char v39[160]; // [rsp+A0h] [rbp-60h] BYREF
  struct tagQ *v41; // [rsp+158h] [rbp+58h] BYREF
  __int64 v42; // [rsp+168h] [rbp+68h] BYREF

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v8 = *((_QWORD *)a4 + 1);
  v9 = 4;
  if ( *(_DWORD *)(v8 + 148) != 1 )
    v9 = 0;
  v10 = v9 | 1;
  if ( (*(_DWORD *)(v8 + 112) & 4) == 0 )
    v10 = v9;
  Queue = (struct tagQ *)CInputDest::GetQueue(a2, 2LL);
  v15 = Queue;
  if ( !Queue )
  {
    if ( !*(_QWORD *)(v8 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
    goto LABEL_24;
  }
  CoalesceInputSourceMouseMoves(Queue, (_DWORD *)(v8 + 104));
  if ( *((_DWORD *)a2 + 23) == 2 )
    v16 = *((_QWORD *)a2 + 10);
  else
    v16 = 0LL;
  ApiSetEditionMouseMoveShellResilience(v16);
  v17 = CInputDest::GetQueue(a2, 2LL);
  if ( v17 )
  {
    ThreadInfo = CInputDest::GetThreadInfo(a2);
    *(_QWORD *)(v17 + 88) = ThreadInfo;
  }
  ApiSetEditionUpdateRawMouseMode(v15, v17);
  QHelper::SetMouseMovePoint(a2, a3, v19);
  if ( (unsigned int)dword_1C028EE70 > 5 && tlgKeywordOn((__int64)&dword_1C028EE70, 64LL) )
  {
    v27 = *((_QWORD *)a4 + 1);
    v41 = v15;
    v42 = *(_QWORD *)(v27 + 88);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1C028EE70,
      (unsigned int)&unk_1C0263BBC,
      v25,
      v26,
      (__int64)&v42,
      (__int64)&v41);
  }
  if ( *((_DWORD *)a2 + 23) == 2 )
    v20 = *((_QWORD *)a2 + 10);
  else
    v20 = 0LL;
  v21 = 0LL;
  v22 = CInputDest::GetQueue(a2, 0LL);
  if ( v22 )
    v21 = *(_QWORD *)(v22 + 88);
  EtwTraceWakePump(v21, v20, 512LL);
  if ( CInputDest::IsCompositionInput(a2) )
  {
    v10 |= 2u;
    goto LABEL_24;
  }
  if ( (v10 & 1) != 0 )
  {
LABEL_24:
    CMouseProcessor::PostMouseMoveToInputDest(this, a2, v8, a3, v10, a5);
    return;
  }
  v23 = CInputDest::GetQueue(a2, 2LL);
  if ( v23 )
    *(_DWORD *)(v23 + 388) |= 0x20u;
  ApiSetEditionWakeThreadForInput(a2);
  v24 = *((_QWORD *)v15 + 17);
  if ( v24 && qword_1C029C780 && (qword_1C029C780(*(_QWORD *)(v24 + 16)) & 0x2000000000000LL) != 0 )
  {
    v28 = (_OWORD *)INPUTDEST_FROM_PWND(v39, *((_QWORD *)v15 + 17));
    v29 = v28[1];
    v38[0] = *v28;
    v30 = v28[2];
    v38[1] = v29;
    v31 = v28[3];
    v38[2] = v30;
    v32 = v28[4];
    v38[3] = v31;
    v33 = v28[5];
    v38[4] = v32;
    v34 = v28[6];
    v38[5] = v33;
    v38[6] = v34;
    if ( !(unsigned __int8)CInputDest::operator==(a2, v38) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37);
    CMouseProcessor::PostMouseMoveToInputDest(this, a2, v8, a3, 0, a5);
  }
}
