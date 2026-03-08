/*
 * XREFs of MiSplitDirectMapPage @ 0x14063CE6C
 * Callers:
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 * Callees:
 *     MiCopyPfnEntryEx @ 0x140213930 (MiCopyPfnEntryEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveLockedPageCharge @ 0x140286E00 (MiRemoveLockedPageCharge.c)
 *     MiFinalizePageAttribute @ 0x14028A354 (MiFinalizePageAttribute.c)
 *     MiAddLockedPageCharge @ 0x1402A309C (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiUpdateTransitionPteFrame @ 0x1402C6CD0 (MiUpdateTransitionPteFrame.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402CFBF0 (MiDereferenceControlAreaPfnList.c)
 *     MiColdPageSizeSupported @ 0x1402DD100 (MiColdPageSizeSupported.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiCopyPage @ 0x14032DC70 (MiCopyPage.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiReleaseFreshPage @ 0x14034E570 (MiReleaseFreshPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWaitForFreePage @ 0x140651458 (MiWaitForFreePage.c)
 *     MiAddPageToHeatRanges @ 0x140651704 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x140652018 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiSplitDirectMapPage(unsigned __int16 *a1, __int64 a2, ULONG_PTR a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 i; // rax
  ULONG_PTR v8; // r13
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  char v11; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  int v17; // r8d
  unsigned __int8 v18; // al
  int v19; // edx
  __int64 v21; // r9
  __int128 v22; // xmm1
  __m128i v23; // xmm0
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 updated; // rbx
  __int64 v30; // r8
  int v31; // eax
  bool v32; // zf
  unsigned __int64 v33; // r11
  __int64 v34; // rdx
  __int64 v35; // r8
  int v36; // ecx
  ULONG_PTR v37; // r15
  char v38; // al
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  int v41; // eax
  _DWORD *v42; // r8
  __int128 v43; // [rsp+20h] [rbp-38h] BYREF
  __int128 v44; // [rsp+30h] [rbp-28h] BYREF
  __int128 v45; // [rsp+40h] [rbp-18h]
  __int64 *v47; // [rsp+A0h] [rbp+48h]
  __int64 v48; // [rsp+A8h] [rbp+50h]

  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v4 = 48 * a3 - 0x220000000000LL;
  v5 = *(_DWORD *)(a2 + 12) | *(_DWORD *)(a2 + 8) & _InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u);
  v48 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  for ( i = MiGetPage(v6, v5, 0); ; i = MiGetPage(v6, v5, 0) )
  {
    v8 = i;
    if ( i != -1 )
      break;
    MiWaitForFreePage(v6);
  }
  v9 = 48 * i - 0x220000000000LL;
  v10 = (unsigned __int8)MiLockPageInline(v4);
  v11 = *(_BYTE *)(v4 + 35);
  if ( (v11 & 0x40) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags )
      goto LABEL_20;
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 || CurrentIrql > 0xFu || (unsigned __int8)v10 > 0xFu || CurrentIrql < 2u )
      goto LABEL_20;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
    v16 = (v15 & SchedulerAssist[5]) == 0;
    v17 = v15 & SchedulerAssist[5];
LABEL_18:
    SchedulerAssist[5] = v17;
    if ( v16 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
LABEL_20:
    __writecr8(v10);
    MiReleaseFreshPage(v9);
    return -1LL;
  }
  if ( (v11 & 0x10) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags )
      goto LABEL_20;
    v18 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 || v18 > 0xFu || (unsigned __int8)v10 > 0xFu || v18 < 2u )
      goto LABEL_20;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
    v16 = (v19 & SchedulerAssist[5]) == 0;
    v17 = v19 & SchedulerAssist[5];
    goto LABEL_18;
  }
  MiLockNestedPageAtDpcInline(v9);
  MiFinalizePageAttribute(v9, *(unsigned __int8 *)(v4 + 34) >> 6, 1u, v21);
  v22 = *(_OWORD *)(v4 + 16);
  v43 = *(_OWORD *)v4;
  v23 = *(__m128i *)(v4 + 32);
  v44 = v22;
  *(_QWORD *)&v45 = v23.m128i_i64[0];
  *((_QWORD *)&v45 + 1) = _mm_srli_si128(v23, 8).m128i_u64[0] & 0xFFDFFFFFFFFFFFFFuLL;
  v24 = MiSwizzleInvalidPte(32LL * ((a1[16] >> 1) & 0x1F));
  if ( !MiPteInShadowRange((unsigned __int64)&v44) )
    goto LABEL_30;
  if ( !MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v24 & 1) != 0 )
      v24 |= v25;
LABEL_30:
    *(_QWORD *)&v44 = v24;
    goto LABEL_31;
  }
  if ( !HIBYTE(word_140C6697C) && (v24 & 1) != 0 )
    v24 |= v25;
  *(_QWORD *)&v44 = v24;
  MiWritePteShadow((__int64)&v44, v24, v26);
LABEL_31:
  MiCopyPfnEntryEx(v9, &v43);
  *(_BYTE *)(v9 + 34) |= 0x10u;
  *(_WORD *)(v9 + 32) = 0;
  MiAddLockedPageCharge(v9, 1);
  MiDereferenceControlAreaPfnList(v48, 0LL, v27, 2);
  MiCopyPage(v8, a3, 6);
  *(_BYTE *)(v4 + 34) = *(_BYTE *)(v4 + 34) & 0xF8 | 5;
  v47 = (__int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000)
                  + 8LL * ((*(_DWORD *)(v4 + 8) >> 3) & 0x1FF));
  v28 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v47);
  updated = MiUpdateTransitionPteFrame(v28, v8);
  if ( MiPteInShadowRange((unsigned __int64)v47) )
  {
    if ( MiPteHasShadow() )
    {
      v31 = 1;
      if ( !HIBYTE(word_140C6697C) )
      {
        v32 = (updated & 1) == 0;
        goto LABEL_35;
      }
    }
    else
    {
      v31 = 0;
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v32 = (updated & 1) == 0;
LABEL_35:
        if ( !v32 )
          updated |= 0x8000000000000000uLL;
      }
    }
  }
  else
  {
    v31 = 0;
  }
  v33 = (unsigned __int64)v47;
  *v47 = updated;
  if ( v31 )
    MiWritePteShadow((__int64)v47, updated, v30);
  MiUnmapPageInHyperSpaceWorker(v33, 0x11u);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( *(_WORD *)(v4 + 32) == 1 )
  {
    v37 = a3;
    if ( (unsigned int)MiColdPageSizeSupported(1u)
      && (unsigned int)MiAddPageToHeatRanges(a4, a3, (unsigned int)(v36 + 2)) )
    {
      MiNotifyPageHeat(a4);
    }
  }
  else
  {
    v37 = a3;
  }
  v38 = *(_BYTE *)(v4 + 34);
  *(_QWORD *)(v4 + 24) |= 0x4000000000000000uLL;
  *(_BYTE *)(v4 + 34) = v38 & 0xF8 | 6;
  if ( (unsigned int)MiRemoveLockedPageCharge(v4, v34, v35) )
  {
    *(_BYTE *)(v4 + 35) |= 0x10u;
    MiInsertPageInFreeOrZeroedList(v37, 2);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    v39 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v39 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v39 >= 2u )
    {
      v40 = KeGetCurrentPrcb();
      v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v42 = v40->SchedulerAssist;
      v16 = (v41 & v42[5]) == 0;
      v42[5] &= v41;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick((__int64)v40);
    }
  }
  __writecr8(v10);
  return v8;
}
