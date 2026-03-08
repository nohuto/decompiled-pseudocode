/*
 * XREFs of MxCreateFreePfns @ 0x140B37690
 * Callers:
 *     MxReleaseFreeDescriptor @ 0x140B371A0 (MxReleaseFreeDescriptor.c)
 *     MiCreateDescriptorPfns @ 0x140B373F4 (MiCreateDescriptorPfns.c)
 *     MiCreateFreePfns @ 0x140B37598 (MiCreateFreePfns.c)
 * Callees:
 *     MiCreateInitialLargeLeafPfns @ 0x140213A50 (MiCreateInitialLargeLeafPfns.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x140213BC4 (MiInitializeAllResidentPageBasePfns.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiDetermineNewPfnHeatState @ 0x1402DD0B8 (MiDetermineNewPfnHeatState.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiInsertLargePageInNodeList @ 0x14031C970 (MiInsertLargePageInNodeList.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiCreatePfnTemplate @ 0x1403708F4 (MiCreatePfnTemplate.c)
 *     MiRestrictRangeToNode @ 0x140370AB4 (MiRestrictRangeToNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeEmptyBootPageTable @ 0x140B961A8 (MiFreeEmptyBootPageTable.c)
 */

void __fastcall MxCreateFreePfns(__int64 a1)
{
  ULONG_PTR v1; // rsi
  ULONG_PTR v2; // r14
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __m128i *v7; // r13
  int v8; // eax
  __int16 v9; // r9
  __int16 v10; // r15
  unsigned __int8 CurrentIrql; // di
  __m128i *v12; // rbx
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  __m128i *v16; // rax
  ULONG_PTR v17; // r12
  int v18; // ecx
  unsigned __int64 v19; // r15
  __int64 v20; // rax
  ULONG_PTR v21; // rax
  __int64 v22; // r13
  int v23; // eax
  int v24; // r9d
  int v25; // ecx
  char v26; // al
  __int16 v27; // ax
  _QWORD *v28; // r12
  unsigned __int64 v29; // rbx
  __int64 v30; // r15
  BOOL v31; // eax
  __int64 v32; // r8
  int v33; // edx
  int v34; // eax
  bool v35; // zf
  __int64 v36; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v38; // rax
  unsigned __int8 v39; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v41; // r8
  int v42; // eax
  _QWORD v43[2]; // [rsp+40h] [rbp-39h] BYREF
  __int128 v44; // [rsp+50h] [rbp-29h]
  __m128i v45; // [rsp+60h] [rbp-19h] BYREF
  __m128i v46; // [rsp+70h] [rbp-9h] BYREF
  __m128i v47; // [rsp+80h] [rbp+7h] BYREF
  int v48; // [rsp+E0h] [rbp+67h]
  unsigned int v49; // [rsp+E8h] [rbp+6Fh] BYREF
  __m128i *v50; // [rsp+F0h] [rbp+77h]
  __int64 v51; // [rsp+F8h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = 1;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  if ( !v1 )
  {
    if ( !--v2 )
      return;
    v1 = 1LL;
  }
  v4 = *(_DWORD *)(a1 + 24);
  if ( (v4 & 0x20000000) == 0 || (v4 & 0x1FFFFFFF) == 2 || (v4 & 0x1FFFFFFF) == 0x18 )
  {
    v5 = 0LL;
    v51 = 0LL;
    if ( (v4 & 0x1FFFFFFF) == 0x18 )
    {
      v49 = 0;
      v51 = 0LL;
      goto LABEL_5;
    }
  }
  else
  {
    v5 = 1LL;
    v51 = 1LL;
  }
  v49 = 1;
LABEL_5:
  v6 = 48 * v1 - 0x220000000000LL;
  v50 = 0LL;
  v7 = 0LL;
  if ( v2 )
  {
    while ( !v5 )
    {
LABEL_7:
      if ( (v1 & 0x1FF) != 0 || v5 || v2 < 0x200 )
      {
        *(_QWORD *)v6 = v7;
        v7 = (__m128i *)v6;
        v50 = (__m128i *)v6;
LABEL_9:
        ++v1;
        v6 += 48LL;
        --v2;
        goto LABEL_10;
      }
      v17 = MiRestrictRangeToNode(v1, v2);
      if ( v17 >= 0x200 )
      {
        v18 = 0;
        v48 = 0;
        if ( _bittest64(&KeFeatureBits, 0x25u) )
        {
          v3 = 0;
        }
        else
        {
          v18 = 1;
          v48 = 1;
        }
        while ( 1 )
        {
          v19 = MiLargePageSizes[v3];
          if ( v1 == (v1 & ~(v19 - 1)) && v17 >= v19 )
          {
            if ( v3 == v18 )
            {
              v21 = v17;
            }
            else
            {
              v20 = MiLargePageSizes[v3 - 1];
              v21 = v20 - (v1 & (v20 - 1));
              if ( v21 > v17 )
                v21 = v17;
            }
            v22 = v19 * (v21 / v19);
            v23 = MiDetermineNewPfnHeatState(0, v3);
            v25 = v24;
            LOBYTE(v25) = v23 == 0;
            MiInitializeAllResidentPageBasePfns(MiSystemPartition, v1, v22, v3, 1, v25, v24);
            MiCreateInitialLargeLeafPfns(v1, v22, v3, 1, 0, 0);
            for ( ; v22; v22 -= v19 )
            {
              v26 = MiLockPageInline(v6);
              v43[1] = v49;
              v44 = 0LL;
              v43[0] = v1;
              LOBYTE(v44) = v26;
              MiInsertLargePageInNodeList((__int64)v43);
              v17 -= v19;
              v2 -= v19;
              v1 += v19;
              v6 += 48 * v19;
            }
            if ( v17 < 0x200 )
            {
LABEL_38:
              v7 = v50;
              v3 = 1;
              goto LABEL_10;
            }
            v18 = v48;
            v3 = v48 - 1;
          }
          if ( ++v3 > 1 )
            goto LABEL_38;
        }
      }
      *(_QWORD *)v6 = v7;
      ++v1;
      v7 = (__m128i *)v6;
      v50 = (__m128i *)v6;
      v6 += 48LL;
      --v2;
LABEL_10:
      v5 = v51;
      if ( !v2 )
        goto LABEL_11;
    }
    v27 = *(_WORD *)(v6 + 32);
    if ( v27 != 1 )
    {
      if ( v27 )
        goto LABEL_9;
      goto LABEL_7;
    }
    v28 = (_QWORD *)(*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL);
    v29 = ZeroPte;
    v30 = 48 * (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v31 = MiPteInShadowRange((unsigned __int64)v28);
    v33 = 0;
    if ( v31 )
    {
      if ( MiPteHasShadow() )
      {
        v34 = v33 + 1;
        if ( HIBYTE(word_140C6697C) == (_BYTE)v33 )
        {
          v35 = ((unsigned __int8)ZeroPte & (unsigned __int8)v34) == 0;
          goto LABEL_58;
        }
LABEL_62:
        *v28 = v29;
        if ( v34 )
          MiWritePteShadow((__int64)v28, v29, v32);
        v3 = 1;
        v36 = *(_QWORD *)(v30 + 24) ^ ((*(_QWORD *)(v30 + 24) - 1LL) ^ *(_QWORD *)(v30 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v30 + 24) = v36;
        if ( (v36 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          MiFreeEmptyBootPageTable(v30);
        v5 = v51;
        *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
        *(_WORD *)(v6 + 32) = 0;
        goto LABEL_7;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v34 = v33;
        v35 = (ZeroPte & 1) == 0;
LABEL_58:
        if ( !v35 )
          v29 = ZeroPte | 0x8000000000000000uLL;
        goto LABEL_62;
      }
    }
    v34 = v33;
    goto LABEL_62;
  }
LABEL_11:
  MiCreatePfnTemplate((__int64)&v45, 0, 0);
  if ( !v49 )
    v47.m128i_i8[2] &= 0xF8u;
  v8 = MiDetermineNewPfnHeatState(0, 3u);
  v10 = v9 | 0x400;
  if ( !v8 )
    v10 = v9;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v38) = 4;
    if ( CurrentIrql != 2 )
      v38 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v38;
  }
  while ( v7 )
  {
    v12 = v7;
    v7 = (__m128i *)v7->m128i_i64[0];
    v13 = _mm_loadu_si128(&v45);
    v14 = _mm_loadu_si128(&v46);
    v15 = _mm_loadu_si128(&v47);
    v16 = v12;
    do
    {
      *v16 = v13;
      v16[1] = v14;
      v16[2] = v15;
      v16 += 3;
    }
    while ( v16 != &v12[3] );
    v49 = 0;
    while ( _interlockedbittestandset64(&v12[1].m128i_i32[2], 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v49);
      while ( v12[1].m128i_i64[1] < 0 );
    }
    MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)v12[0x22000000000LL].m128i_i64 >> 4), v10);
    _InterlockedAnd64(&v12[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags )
  {
    v39 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v39 <= 0xFu && CurrentIrql <= 0xFu && v39 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v41 = CurrentPrcb->SchedulerAssist;
      v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v35 = (v42 & v41[5]) == 0;
      v41[5] &= v42;
      if ( v35 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
}
