/*
 * XREFs of HalpTimerMeasureFrequencies @ 0x140376B78
 * Callers:
 *     HalpTimerSelectRoles @ 0x140376F4C (HalpTimerSelectRoles.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14022B710 (KeStallExecutionProcessor.c)
 *     HalpTimerStallExecutionProcessor @ 0x14022CA90 (HalpTimerStallExecutionProcessor.c)
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x140376E70 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerInitialize @ 0x140377220 (HalpTimerInitialize.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x140377478 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerScaleCounter @ 0x1403BE604 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __fastcall HalpTimerMeasureFrequencies(__int64 a1, __int64 a2)
{
  ULONG_PTR *v2; // rbx
  int v3; // r12d
  ULONG_PTR *v5; // rcx
  ULONG_PTR *v6; // rdi
  __int64 v7; // rbx
  _DWORD *v8; // rcx
  unsigned __int64 v9; // rax
  ULONG_PTR *v10; // rbx
  ULONG_PTR *v11; // rdi
  __int64 v12; // r10
  _DWORD *v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rcx
  ULONG_PTR *v17; // rbx
  ULONG_PTR *v18; // rdi
  __int64 v19; // r10
  _DWORD *v20; // rcx
  ULONG_PTR *v21; // rbx
  unsigned int v22; // ebp
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  __int64 v27; // r11
  unsigned int v28; // ebp
  unsigned int *v29; // rdi
  __int64 v30; // rax
  void (__fastcall *v31)(__int64); // rdx
  __int64 InternalData; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r10
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r10

  v2 = (ULONG_PTR *)HalpRegisteredTimers;
  v3 = *(_DWORD *)(a1 + 224) & 2;
  LOBYTE(a2) = 0;
  if ( (ULONG_PTR *)HalpRegisteredTimers != &HalpRegisteredTimers )
  {
    do
    {
      v5 = v2;
      v2 = (ULONG_PTR *)*v2;
      if ( (!v5[24] || (v5[23] & 8) != 0) && (v5[28] & 2) != 0 )
      {
        HalpTimerInitialize(v5, a2);
        LOBYTE(a2) = 1;
      }
    }
    while ( v2 != &HalpRegisteredTimers );
    if ( (_BYTE)a2 )
    {
      KeStallExecutionProcessor(0x5DCu);
      v6 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v6 != &HalpRegisteredTimers )
      {
        v7 = (__int64)v6;
        v6 = (ULONG_PTR *)*v6;
        v8 = (_DWORD *)(v7 + 184);
        if ( (!*(_QWORD *)(v7 + 192) || (*v8 & 8) != 0) && (*(_DWORD *)(v7 + 224) & 2) != 0 && (*v8 & 2) != 0 )
        {
          if ( v3 )
          {
            *(_DWORD *)(v7 + 48) = HalpTimerDetermineValidTimerPairReadLatency(v7, a1);
          }
          else
          {
            InternalData = HalpTimerGetInternalData(v7);
            *(_QWORD *)(v7 + 16) = (*(__int64 (__fastcall **)(__int64))(v7 + 112))(InternalData);
          }
        }
      }
      v9 = __readcr2();
      __writecr2(v9);
      if ( (*(_DWORD *)(a1 + 224) & 2) == 0 )
      {
        v33 = HalpTimerGetInternalData(a1);
        (*(void (__fastcall **)(__int64, _QWORD))(a1 + 176))(v33, 0LL);
      }
      v10 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v10 != &HalpRegisteredTimers )
      {
        v11 = v10;
        v12 = (__int64)v10;
        v10 = (ULONG_PTR *)*v10;
        v13 = v11 + 23;
        if ( (!v11[24] || (*v13 & 8) != 0) && (*(_DWORD *)(v12 + 224) & 2) != 0 && (*v13 & 2) != 0 )
        {
          if ( v3 )
          {
            HalpTimerReadTimerPairWithLatencyLimit(*(_DWORD *)(v12 + 48), v12, a1, (_DWORD)v11 + 16, v12 + 24);
          }
          else
          {
            v34 = HalpTimerGetInternalData(v12);
            v11[2] = (*(__int64 (__fastcall **)(__int64))(v35 + 112))(v34);
          }
        }
      }
      v14 = __readcr2();
      __writecr2(v14);
      if ( (*(_DWORD *)(a1 + 224) & 2) != 0 )
      {
        v15 = 1250000LL;
        HalpTimerStallExecutionProcessor(a1, 1250000LL, 0);
      }
      else
      {
        v36 = HalpTimerGetInternalData(a1);
        v15 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 176))(v36, 1250000LL);
      }
      v16 = __readcr2();
      __writecr2(v16);
      v17 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v17 != &HalpRegisteredTimers )
      {
        v18 = v17;
        v19 = (__int64)v17;
        v17 = (ULONG_PTR *)*v17;
        v20 = v18 + 23;
        if ( (!v18[24] || (*v20 & 8) != 0) && (*(_DWORD *)(v19 + 224) & 2) != 0 && (*v20 & 2) != 0 )
        {
          if ( v3 )
          {
            HalpTimerReadTimerPairWithLatencyLimit(*(_DWORD *)(v19 + 48), v19, a1, (_DWORD)v18 + 32, v19 + 40);
          }
          else
          {
            v37 = HalpTimerGetInternalData(v19);
            v18[4] = (*(__int64 (__fastcall **)(__int64))(v38 + 112))(v37);
          }
        }
      }
      v21 = (ULONG_PTR *)HalpRegisteredTimers;
      while ( v21 != &HalpRegisteredTimers )
      {
        v27 = (__int64)v21;
        v21 = (ULONG_PTR *)*v21;
        v29 = (unsigned int *)(v27 + 184);
        if ( (!*(_QWORD *)(v27 + 192) || (*v29 & 8) != 0) && (*(_DWORD *)(v27 + 224) & 2) != 0 )
        {
          v22 = *v29;
          if ( (*v29 & 2) != 0 )
          {
            v23 = *(_QWORD *)(v27 + 16);
            v24 = *(_QWORD *)(v27 + 32) - v23;
            v25 = *(_QWORD *)(v27 + 24);
            v26 = *(_QWORD *)(v27 + 40) - v25;
            if ( *(_QWORD *)(v27 + 32) < v23 )
              v24 += 1LL << *(_DWORD *)(v27 + 220);
            if ( *(_QWORD *)(v27 + 40) < v25 )
              v26 += 1LL << *(_DWORD *)(a1 + 220);
            if ( v3 )
              v15 = HalpTimerScaleCounter(v26, *(_QWORD *)(a1 + 192), 10000000LL);
            v28 = v22 & 0xFFFFFFF7;
            *v29 = v28;
            *(_QWORD *)(v27 + 192) = 10000000 * v24 / v15;
            if ( v27 != a1 && (v28 & 4) == 0 && *(_QWORD *)(v27 + 136) )
            {
              v30 = HalpTimerGetInternalData(v27);
              v31(v30);
            }
          }
        }
      }
    }
  }
}
