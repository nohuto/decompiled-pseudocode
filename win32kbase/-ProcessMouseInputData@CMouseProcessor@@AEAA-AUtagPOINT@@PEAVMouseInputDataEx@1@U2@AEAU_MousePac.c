struct tagPOINT __fastcall CMouseProcessor::ProcessMouseInputData(
        CMouseProcessor *this,
        struct tagPOINT *a2,
        struct tagPOINT a3,
        struct _MousePacketPerf *a4,
        struct _MOUSE_INPUT_DATA *a5,
        const struct tagUIPI_INFO_INT *a6,
        struct tagUIPI_INFO_INT *a7)
{
  LARGE_INTEGER PerformanceCounter; // rax
  struct _MOUSE_INPUT_DATA *v12; // r12
  bool v13; // zf
  __int64 v14; // rdx
  __m128i v16; // xmm6
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // rdx
  int v37; // edi
  __int64 v38; // r9
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int128 v60; // [rsp+38h] [rbp-D0h] BYREF
  _OWORD v61[46]; // [rsp+48h] [rbp-C0h] BYREF
  struct tagPOINT v62; // [rsp+368h] [rbp+260h] BYREF
  char v63; // [rsp+378h] [rbp+270h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v63,
    "ProcessMouseInputData",
    0LL);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = a5;
  *(LARGE_INTEGER *)&a5->UnitId = PerformanceCounter;
  v13 = (*(_BYTE *)(*(_QWORD *)&a3 + 2LL) & 0x50) == 0;
  a5 = (struct _MOUSE_INPUT_DATA *)*((_QWORD *)this + 431);
  if ( v13 && WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
  {
    v60 = 0LL;
    LODWORD(v60) = 1;
    BYTE10(v60) = CMouseProcessor::MouseInputDataEx::ContainsMotionData(*(CMouseProcessor::MouseInputDataEx **)&a3);
    WORD4(v60) = *(_WORD *)(*(_QWORD *)&a3 + 4LL);
    CCompositionRefreshRateBooster::EvaluateEventForCompositionFrameRateBoost(
      (CCompositionRefreshRateBooster *)(v14 + 96),
      (const struct InputHelper::CompositionFrameRateBoostCandidateEvent *)&v60);
  }
  v62 = (struct tagPOINT)a4;
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                          a3,
                          8LL)
    || (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                          a3,
                          0x8000LL) )
  {
    CMouseProcessor::QueueMouseEvent(
      this,
      *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
      (const struct _SUBPIXELS *)&a5,
      a7,
      0LL);
  }
  else
  {
    if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                            a3,
                            4LL) )
    {
      v62 = *(struct tagPOINT *)(*(_QWORD *)&a3 + 12LL);
      a5 = 0LL;
      v16 = *(__m128i *)InputConfig::Mouse::GetUnionRegion(v61);
      v21 = SGDGetUserSessionState(v18, v17, v19, v20) + 14368;
      v26 = 3LL * *(unsigned int *)(SGDGetUserSessionState(v23, v22, v24, v25) + 14364);
      v27 = LOWORD(v62.x) | ((unsigned __int16)(_mm_cvtsi128_si32(_mm_srli_si128(v16, 8)) - _mm_cvtsi128_si32(v16) - 1) << 16);
      *(_DWORD *)(v21 + 8 * v26) = v27;
      v30 = SGDGetUserSessionState(v27, v26, v28, v29) + 14368;
      v35 = *(unsigned int *)(SGDGetUserSessionState(v32, v31, v33, v34) + 14364);
      v36 = LOWORD(v62.y) | ((unsigned __int16)(_mm_cvtsi128_si32(_mm_srli_si128(v16, 12))
                                              - _mm_cvtsi128_si32(_mm_srli_si128(v16, 4))
                                              - 1) << 16);
      *(_DWORD *)(v30 + 24 * v35 + 4) = v36;
      v37 = *(_DWORD *)(*(_QWORD *)&a3 + 48LL);
      v39 = SGDGetUserSessionState(3 * v35, v36, v35, v38) + 14368;
      v44 = *(unsigned int *)(SGDGetUserSessionState(v41, v40, v42, v43) + 14364);
      *(_DWORD *)(v39 + 24 * v44 + 8) = v37;
      v45 = *(unsigned int *)(*(_QWORD *)&a3 + 20LL);
      v48 = SGDGetUserSessionState(v44, 3 * v44, v46, v47) + 14368;
      v53 = *(unsigned int *)(SGDGetUserSessionState(v50, v49, v51, v52) + 14364);
      *(_QWORD *)(v48 + 24 * v53 + 16) = v45;
      LODWORD(v48) = ((unsigned __int8)*(_DWORD *)(SGDGetUserSessionState(v53, 3 * v53, v54, v55) + 14364) + 1) & 0x3F;
      *(_DWORD *)(SGDGetUserSessionState(v57, v56, v58, v59) + 14364) = v48;
    }
    else
    {
      CMouseProcessor::GetMouseCoord(
        this,
        *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
        &v62,
        (struct _SUBPIXELS *)&a5);
    }
    if ( a6
      && !*(_WORD *)(*(_QWORD *)&a3 + 4LL)
      && !*((_WORD *)a6 + 2)
      && ((*(_BYTE *)(*(_QWORD *)&a3 + 2LL) ^ *((_BYTE *)a6 + 2)) & 1) == 0 )
    {
      InputTraceLogging::Mouse::CoalesceInput(*(_QWORD *)(*(_QWORD *)&a3 + 56LL));
      goto LABEL_7;
    }
    CMouseProcessor::CommitMousePosAndMoveCursor(
      this,
      *(struct CMouseProcessor::MouseInputDataEx **)&a3,
      v62,
      (struct _MousePacketPerf *)v12);
    CMouseProcessor::QueueMouseEvent(
      this,
      *(const struct CMouseProcessor::MouseInputDataEx **)&a3,
      (const struct _SUBPIXELS *)&a5,
      a7,
      &v62);
    v62 = gptCursorAsync;
  }
  *(LARGE_INTEGER *)&v12->RawButtons = KeQueryPerformanceCounter(0LL);
  RIMLockExclusive((__int64)this + 3416);
  MousePerfSummary::CollectMousePacketPerfTelemetry(
    (CMouseProcessor *)((char *)this + 2792),
    (const struct _MousePacketPerf *)v12);
  *((_QWORD *)this + 428) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 3416, 0LL);
  KeLeaveCriticalRegion();
LABEL_7:
  *a2 = v62;
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v63);
  return (struct tagPOINT)a2;
}
