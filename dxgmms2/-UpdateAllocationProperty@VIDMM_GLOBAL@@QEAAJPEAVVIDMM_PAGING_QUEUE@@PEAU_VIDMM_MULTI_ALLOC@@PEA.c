/*
 * XREFs of ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00E86E8
 * Callers:
 *     ?VidMmUpdateAllocationProperty@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C002CF30 (-VidMmUpdateAllocationProperty@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_AL.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C008EBA0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C00A2160 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C00E3CC8 (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C00E9D10 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C00E9E94 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateAllocationProperty(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        __m128i *a4,
        unsigned __int64 *a5)
{
  __m128i v8; // xmm0
  __int64 *v9; // rax
  unsigned int v10; // edx
  __int64 v11; // r13
  unsigned __int64 v12; // rax
  unsigned int v13; // r12d
  struct _D3DDDI_SEGMENTPREFERENCE v14; // ebx
  unsigned __int64 v15; // xmm0_8
  VIDMM_GLOBAL *v16; // rcx
  unsigned int v17; // esi
  __int64 v18; // rcx
  __int64 v20; // rcx
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *v21; // r9
  bool v22; // al
  __int64 v23; // rcx
  char v24; // r14
  int v25; // esi
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  int v27; // [rsp+50h] [rbp-51h]
  _QWORD v28[18]; // [rsp+60h] [rbp-41h] BYREF
  int v30; // [rsp+110h] [rbp+6Fh] BYREF
  unsigned int v31; // [rsp+118h] [rbp+77h]

  memset(v28, 0, 0x58uLL);
  v8 = *a4;
  v9 = *a3;
  v10 = (*((_DWORD *)a3 + 8) >> 2) & 0x3F;
  LODWORD(v28[0]) = 214;
  v11 = *v9;
  v12 = HIDWORD(v8.m128i_i64[0]);
  *(__m128i *)((char *)&v28[4] + 4) = v8;
  v28[2] = a3;
  v13 = *(_DWORD *)(v11 + 60);
  v14.0 = *(struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F *)(v11 + 64);
  v15 = _mm_srli_si128(v8, 8).m128i_u64[0];
  v31 = v10;
  v16 = (VIDMM_GLOBAL *)HIDWORD(v15);
  v27 = v12;
  if ( (v15 & 0x200000000LL) != 0 )
  {
    v17 = HIDWORD(v28[4]);
    if ( !HIDWORD(v28[4]) )
      goto LABEL_3;
    v20 = *((_QWORD *)this + 5028) + 1616LL * v10;
    if ( _bittest((const int *)&v17, (unsigned __int8)(*(_WORD *)(v20 + 36) - *(_BYTE *)(v20 + 28)))
      || (~v13 & HIDWORD(v28[4])) != 0 && (*((_BYTE *)a3 + 28) & 8) != 0 )
    {
      goto LABEL_3;
    }
    v21 = *(struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 **)(v11 + 536);
    v22 = (*(_DWORD *)(v11 + 68) & 0x10000000) != 0;
    v30 = 0;
    if ( !VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
            this,
            v10,
            HIDWORD(v28[4]),
            v21,
            *(_QWORD *)(v11 + 16),
            *(_QWORD *)(v11 + 24),
            v22,
            (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v30) )
    {
      WdLogSingleEntry1(1LL, 5586LL);
      DxgkLogInternalTriageEvent(v23, 0x40000LL);
      return -1073741811LL;
    }
    LOBYTE(v16) = v30 & 1;
    BYTE4(v28[6]) = v30 & 1;
    BYTE5(v28[6]) = (v30 & 2) != 0;
    if ( v17 == v13 )
      WdLogSingleEntry1(3LL, 5595LL);
    LODWORD(v12) = v27;
    v13 = v17;
  }
  v24 = v28[6];
  v25 = (LODWORD(v28[6]) >> 2) & 1;
  if ( v25 )
  {
    if ( (_DWORD)v12 == v14.0 )
    {
      WdLogSingleEntry1(3LL, 5606LL);
      LODWORD(v12) = v27;
    }
    v14.0 = (struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F)v12;
  }
  if ( (v15 & 0x200000000LL) != 0 || v25 )
  {
    if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(v16, v14, v13) )
      goto LABEL_3;
    MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(this, v31, v14, (bool *)&v30);
    if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
            this,
            v31,
            v13,
            MostPreferredSegment,
            (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v28[4]) )
      goto LABEL_3;
    v24 = v28[6];
  }
  if ( (v24 & 1) != 0 && (**(_DWORD **)(v11 + 536) & 0x8000) != 0 )
  {
    if ( (v28[5] & 0x100000000LL) == 0 )
    {
LABEL_3:
      WdLogSingleEntry1(1LL, -1073741811LL);
      DxgkLogInternalTriageEvent(v18, 0x40000LL);
      return 3221225485LL;
    }
    WdLogSingleEntry1(3LL, 5647LL);
  }
  if ( (v24 & 8) != 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 436LL) & 0x200) == 0 )
      goto LABEL_3;
    if ( (*(_DWORD *)(v11 + 72) & 0x200000) != 0 )
      WdLogSingleEntry1(3LL, 5664LL);
  }
  return VIDMM_GLOBAL::QueueDeferredCommand(this, a2, (struct _VIDMM_DEFERRED_COMMAND *)v28, 0, a5);
}
