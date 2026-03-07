void __fastcall CMouseProcessor::DetectAndApplyMouseMovePostStrategy(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3,
        const struct CMouseProcessor::CMoveEvent *a4,
        struct _mouseCursorEvent *a5)
{
  __int64 v8; // rsi
  char v9; // cl
  char v10; // di
  __int64 *Queue; // r13
  __int64 v12; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v14; // rdx
  const struct tagLOGICALPOINT *v15; // r8
  __int64 v16; // r14
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rax
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  _OWORD v31[7]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v32[40]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v34; // [rsp+158h] [rbp+58h] BYREF
  __int64 v35; // [rsp+168h] [rbp+68h] BYREF

  if ( !*(_DWORD *)a2 )
  {
    LODWORD(v34) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5383LL);
  }
  v8 = *((_QWORD *)a4 + 1);
  v9 = 4;
  if ( *(_DWORD *)(v8 + 148) != 1 )
    v9 = 0;
  v10 = v9 | 1;
  if ( (*(_DWORD *)(v8 + 112) & 4) == 0 )
    v10 = v9;
  Queue = (__int64 *)CInputDest::GetQueue(a2, 2LL);
  if ( !Queue )
  {
    if ( !*(_QWORD *)(v8 + 8) )
    {
      LODWORD(v34) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5405LL);
    }
    goto LABEL_24;
  }
  CoalesceInputSourceMouseMoves((struct tagQ *)Queue);
  if ( *((_DWORD *)a2 + 23) == 2 )
    v12 = *((_QWORD *)a2 + 10);
  else
    v12 = 0LL;
  ApiSetEditionMouseMoveShellResilience(v12);
  if ( CInputDest::GetQueue(a2, 2LL) )
  {
    ThreadInfo = CInputDest::GetThreadInfo(a2);
    *(_QWORD *)(v14 + 96) = ThreadInfo;
  }
  ApiSetEditionUpdateRawMouseMode((__int64)Queue);
  QHelper::SetMouseMovePoint(a2, a3, v15);
  if ( (unsigned int)dword_1C02CA7E0 > 5 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
  {
    v23 = *((_QWORD *)a4 + 1);
    v34 = Queue;
    v35 = *(_QWORD *)(v23 + 88);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1C02CA7E0,
      (unsigned int)&unk_1C029D955,
      v21,
      v22,
      (__int64)&v35,
      (__int64)&v34);
  }
  if ( *((_DWORD *)a2 + 23) == 2 )
    v16 = *((_QWORD *)a2 + 10);
  else
    v16 = 0LL;
  v17 = 0LL;
  v18 = CInputDest::GetQueue(a2, 0LL);
  if ( v18 )
    v17 = *(_QWORD *)(v18 + 96);
  EtwTraceWakePump(v17, v16, 512LL);
  if ( CInputDest::IsCompositionInput(a2) )
  {
    v10 |= 2u;
    goto LABEL_24;
  }
  if ( (v10 & 1) != 0 )
  {
LABEL_24:
    CMouseProcessor::PostMouseMoveToInputDest(
      (__int64 *)this,
      (__int64)a2,
      v8,
      (unsigned __int16 *)a3,
      v10,
      (__int64)a5);
    return;
  }
  v19 = CInputDest::GetQueue(a2, 2LL);
  if ( v19 )
    *(_DWORD *)(v19 + 396) |= 0x20u;
  ApiSetEditionWakeThreadForInput(a2);
  v20 = Queue[18];
  if ( v20 && qword_1C02D6FC8 && (qword_1C02D6FC8(*(_QWORD *)(v20 + 16)) & 0x2000000000000LL) != 0 )
  {
    v24 = INPUTDEST_FROM_PWND(v32, Queue[18]);
    v25 = v24[1];
    v31[0] = *v24;
    v26 = v24[2];
    v31[1] = v25;
    v27 = v24[3];
    v31[2] = v26;
    v28 = v24[4];
    v31[3] = v27;
    v29 = v24[5];
    v31[4] = v28;
    v30 = v24[6];
    v31[5] = v29;
    v31[6] = v30;
    if ( !CInputDest::operator==((int *)a2, (__int64)v31) )
    {
      LODWORD(v34) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5483LL);
    }
    CMouseProcessor::PostMouseMoveToInputDest((__int64 *)this, (__int64)a2, v8, (unsigned __int16 *)a3, 0, (__int64)a5);
  }
}
