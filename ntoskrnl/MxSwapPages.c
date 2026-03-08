/*
 * XREFs of MxSwapPages @ 0x140B50198
 * Callers:
 *     MxRelocatePageTables @ 0x140B4F790 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x140B4F948 (MxMovePageTables.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140211DE8 (MiWriteValidPteNewPage.c)
 *     KeFlushSingleTb @ 0x140211E60 (KeFlushSingleTb.c)
 *     MiCopyPfnEntryEx @ 0x140213930 (MiCopyPfnEntryEx.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiFinalizePageAttribute @ 0x14028A354 (MiFinalizePageAttribute.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MxGetPhase0Mapping @ 0x140B5049C (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxSwapPages(__int64 a1, unsigned __int64 a2)
{
  ULONG_PTR v3; // r15
  __int64 result; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r13
  unsigned __int64 v9; // rsi
  __int64 v10; // r9
  unsigned __int64 v11; // rsi
  unsigned __int64 ValidPte; // rbx
  int v13; // ebp
  __int64 v14; // r8
  size_t v15; // r11
  unsigned __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int8 v19; // al
  char v20; // dl
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rbx
  unsigned __int64 *v23; // rsi
  int v24; // r12d
  __int64 v25; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  char v30; // dl
  bool v31; // zf
  char v32; // dl
  bool v33; // zf
  char v34; // r9
  bool v35; // zf
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  unsigned __int64 v38; // [rsp+20h] [rbp-48h]
  BOOL v40; // [rsp+80h] [rbp+18h]
  __int64 v41; // [rsp+88h] [rbp+20h] BYREF

  v41 = MI_READ_PTE_LOCK_FREE(a2);
  v3 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v41) >> 12) & 0xFFFFFFFFFFLL;
  result = MxGetPhase0Mapping();
  v38 = result;
  v5 = result;
  if ( !result )
    return result;
  result = MiGetPage(
             (__int64)MiSystemPartition,
             *(_DWORD *)(a1 + 12) | *(_DWORD *)(a1 + 8) & (unsigned int)_InterlockedExchangeAdd(
                                                                          *(volatile signed __int32 **)a1,
                                                                          1u),
             8u);
  v6 = result;
  if ( result == -1 )
    return result;
  v7 = 48 * result - 0x220000000000LL;
  v8 = 48 * v3 - 0x220000000000LL;
  v9 = (unsigned __int8)MiLockPageInline(v8);
  MiLockNestedPageAtDpcInline(v7);
  MiFinalizePageAttribute(v7, *(unsigned __int8 *)(v8 + 34) >> 6, 1u, v10);
  MiCopyPfnEntryEx(v7, (__int128 *)v8);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v31 = (v29 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v29;
      if ( v31 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v9);
  v11 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  ValidPte = MiMakeValidPte(v11, v6, -1610612732);
  v13 = 0;
  v40 = MiPteInShadowRange(v11);
  v14 = 0x8000000000000000uLL;
  v15 = 4096LL;
  if ( v40 )
  {
    if ( MiPteHasShadow() )
    {
      v13 = 1;
      if ( HIBYTE(word_140C6697C) != v30 )
        goto LABEL_5;
      v31 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( ((unsigned int)v15 & HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink)) == 0 )
        goto LABEL_5;
      v31 = (ValidPte & 1) == 0;
    }
    if ( !v31 )
      ValidPte |= v14;
  }
LABEL_5:
  *(_QWORD *)v11 = ValidPte;
  if ( v13 )
    MiWritePteShadow(v11, ValidPte, v14);
  v16 = (__int64)(a2 << 25) >> 16;
  memmove((void *)v5, (const void *)v16, v15);
  if ( ((v11 ^ v16) & 0xFFFFFFFFFFFFF000uLL) == 0 )
  {
    v22 = ZeroPte;
    v23 = (unsigned __int64 *)(v5 + 8 * ((v11 >> 3) & 0x1FF));
    v24 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v23) )
    {
LABEL_15:
      *v23 = v22;
      if ( v24 )
        MiWritePteShadow((__int64)v23, v22, v25);
      v5 = v38;
      goto LABEL_11;
    }
    if ( MiPteHasShadow() )
    {
      v24 = 1;
      if ( HIBYTE(word_140C6697C) != v32 )
        goto LABEL_15;
      v33 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_15;
      v33 = (ZeroPte & 1) == 0;
    }
    if ( !v33 )
      v22 = ZeroPte | 0x8000000000000000uLL;
    goto LABEL_15;
  }
  v17 = ZeroPte;
  v18 = 0LL;
  if ( !v40 )
    goto LABEL_9;
  if ( MiPteHasShadow() )
  {
    v18 = 1LL;
    if ( HIBYTE(word_140C6697C) == v34 )
    {
      v35 = (v17 & 1) == 0;
      goto LABEL_43;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    v35 = (v17 & 1) == 0;
LABEL_43:
    if ( !v35 )
      v17 |= 0x8000000000000000uLL;
  }
LABEL_9:
  *(_QWORD *)v11 = v17;
  if ( (_DWORD)v18 )
    MiWritePteShadow(v11, v17, v18);
LABEL_11:
  v41 = v41 ^ (v41 ^ (v6 << 12)) & 0xFFFFFFFFFF000LL | 0x20;
  MiWriteValidPteNewPage((__int64 *)a2, v41, 0);
  KeFlushSingleTb(v16, 0, 1u);
  KeFlushSingleTb(v5, 0, 1u);
  v19 = MiLockPageInline(48 * v3 - 0x220000000000LL);
  v20 = *(_BYTE *)(v8 + 34) & 0xDF;
  *(_WORD *)(v8 + 32) = 0;
  v21 = v19;
  *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
  *(_BYTE *)(v8 + 34) = v20;
  *(_BYTE *)(v8 + 34) &= ~8u;
  MiInsertPageInFreeOrZeroedList(v3, 2);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v21 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      v36 = KeGetCurrentPrcb();
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
      v37 = v36->SchedulerAssist;
      v31 = ((unsigned int)result & v37[5]) == 0;
      v37[5] &= result;
      if ( v31 )
        result = KiRemoveSystemWorkPriorityKick((__int64)v36);
    }
  }
  __writecr8(v21);
  return result;
}
