/*
 * XREFs of MiSplitDirectMapPage @ 0x14054207C
 * Callers:
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 * Callees:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiCopyPage @ 0x14023FB90 (MiCopyPage.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiAddLockedPageCharge @ 0x14029AA98 (MiAddLockedPageCharge.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402F4E60 (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140333FA0 (MiLockNestedPageAtDpcInline.c)
 *     MiUpdateTransitionPteFrame @ 0x1403369F0 (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x140336A40 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x140337444 (MiFinalizePageAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWaitForFreePage @ 0x14055C13C (MiWaitForFreePage.c)
 */

ULONG_PTR __fastcall MiSplitDirectMapPage(unsigned __int16 *a1, __int64 a2, ULONG_PTR a3)
{
  __int64 v5; // rdi
  signed __int32 v6; // r9d
  unsigned int v7; // ebx
  __int64 v8; // r14
  __int64 i; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  ULONG_PTR v13; // rsi
  __int64 v14; // r14
  unsigned __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // r9
  __int128 v20; // xmm1
  __m128i v21; // xmm0
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  char v26; // r11
  __int16 v27; // r11
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *v31; // r15
  __int64 v32; // rax
  __int64 updated; // rbx
  int v34; // r13d
  __int64 v35; // rdx
  __int64 v36; // r8
  bool v37; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v40; // eax
  _DWORD *SchedulerAssist; // r8
  __int128 v43; // [rsp+20h] [rbp-58h] BYREF
  __int128 v44; // [rsp+30h] [rbp-48h] BYREF
  __m128i v45; // [rsp+40h] [rbp-38h]
  __int64 v46; // [rsp+80h] [rbp+8h]

  v5 = 48 * a3 - 0x58000000000LL;
  v6 = *(_DWORD *)(a2 + 8) & _InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u);
  v46 = *(_QWORD *)a1;
  v7 = v6 | *(_DWORD *)(a2 + 12);
  v8 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  for ( i = MiGetPage(v8, v7, 0LL); ; i = MiGetPage(v8, v7, 0LL) )
  {
    v13 = i;
    if ( i != -1 )
      break;
    MiWaitForFreePage(v8);
  }
  v14 = 48 * i - 0x58000000000LL;
  v15 = (unsigned __int8)MiLockPageInline(v5, v10, v11, v12);
  MiLockNestedPageAtDpcInline(v14, v16, v17, v18);
  MiFinalizePageAttribute(v14, *(unsigned __int8 *)(v5 + 34) >> 6, 1, v19);
  v20 = *(_OWORD *)(v5 + 16);
  v43 = *(_OWORD *)v5;
  v21 = *(__m128i *)(v5 + 32);
  v44 = v20;
  v45 = v21;
  v22 = (a1[16] >> 1) & 0x1F;
  v45.m128i_i64[1] = _mm_srli_si128(v21, 8).m128i_u64[0] & 0xFFFDFFFFFFFFFFFFuLL;
  v23 = MiSwizzleInvalidPte(32 * v22);
  if ( !MiPteInShadowRange((unsigned __int64)&v44) )
  {
LABEL_13:
    *(_QWORD *)&v44 = v23;
    goto LABEL_14;
  }
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v23 & 1) != 0 )
      v23 |= v24;
    goto LABEL_13;
  }
  if ( HIBYTE(word_140C4E008) == v26 && (v23 & 1) != 0 )
    v23 |= v24;
  *(_QWORD *)&v44 = v23;
  MiWritePteShadow((__int64)&v44, v23, v25);
LABEL_14:
  MiCopyPfnEntryEx(v14, (__int64)&v43);
  *(_BYTE *)(v14 + 34) |= 0x10u;
  *(_WORD *)(v14 + 32) = v27;
  MiAddLockedPageCharge(v28, 1);
  MiDereferenceControlAreaPfnList(v46, 0LL, v29, 2LL);
  MiCopyPage(v13, a3, 0LL, 6);
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 5;
  v31 = (__int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000, v30)
                  + 8LL * ((*(_DWORD *)(v5 + 8) >> 3) & 0x1FF));
  v32 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v31);
  updated = MiUpdateTransitionPteFrame(v32, v13);
  v34 = 0;
  if ( !MiPteInShadowRange((unsigned __int64)v31) )
    goto LABEL_22;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v34 = 1;
    if ( HIBYTE(word_140C4E008) )
      goto LABEL_22;
    v37 = (updated & 1) == 0;
  }
  else
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      goto LABEL_22;
    v37 = (updated & 1) == 0;
  }
  if ( !v37 )
    updated |= 0x8000000000000000uLL;
LABEL_22:
  *v31 = updated;
  if ( v34 )
    MiWritePteShadow((__int64)v31, updated, v36);
  LOBYTE(v35) = 17;
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v31, v35, 0x80000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v37 = (v40 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v40;
        if ( v37 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v15);
  return v13;
}
