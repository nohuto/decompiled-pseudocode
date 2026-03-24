/*
 * XREFs of MxSwapPages @ 0x140A57120
 * Callers:
 *     MxRelocatePageTables @ 0x140A56734 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x140A569B4 (MxMovePageTables.c)
 * Callees:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234880 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWriteValidPteNewPage @ 0x14030E048 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140333FA0 (MiLockNestedPageAtDpcInline.c)
 *     KeFlushSingleTb @ 0x140334A18 (KeFlushSingleTb.c)
 *     MiCopyPfnEntryEx @ 0x140336A40 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x140337444 (MiFinalizePageAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     MxGetPhase0Mapping @ 0x140A57438 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxSwapPages(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  ULONG_PTR v4; // rsi
  __int64 result; // rax
  unsigned __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // r13
  unsigned __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // r9
  __int64 SchedulerAssist; // r9
  unsigned __int64 v19; // r14
  unsigned __int64 ValidPte; // rbx
  int v21; // ebp
  __int64 v22; // r8
  size_t v23; // r11
  unsigned __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  _DWORD *v29; // r9
  unsigned __int8 v30; // al
  char v31; // dl
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rbx
  unsigned __int64 *v34; // r14
  int v35; // r12d
  __int64 v36; // r8
  struct _LIST_ENTRY *Flink; // r8
  __int64 v38; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v41; // eax
  char v42; // dl
  bool v43; // zf
  char v44; // dl
  bool v45; // zf
  char v46; // r9
  bool v47; // zf
  struct _KPRCB *v48; // r9
  _DWORD *v49; // r8
  unsigned __int64 v50; // [rsp+20h] [rbp-48h]
  BOOL v52; // [rsp+80h] [rbp+18h]
  __int64 v53; // [rsp+88h] [rbp+20h] BYREF

  v53 = MI_READ_PTE_LOCK_FREE(a2);
  v3 = v53;
  if ( MiPteInShadowRange((unsigned __int64)&v53)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v38 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v53 >> 3) & 0x1FF));
      if ( (v38 & 0x20) != 0 )
        v3 |= 0x20uLL;
      if ( (v38 & 0x42) != 0 )
        v3 |= 0x42uLL;
    }
    else
    {
      v3 = v53;
    }
  }
  v4 = (v3 >> 12) & 0xFFFFFFFFFLL;
  result = MxGetPhase0Mapping();
  v50 = result;
  v6 = result;
  if ( result )
  {
    result = MiGetPage(
               (__int64)&MiSystemPartition,
               *(_DWORD *)(a1 + 8) & (unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) | *(_DWORD *)(a1 + 12),
               8LL);
    v10 = result;
    if ( result != -1 )
    {
      v11 = 48 * result - 0x58000000000LL;
      v12 = 48 * v4 - 0x58000000000LL;
      v13 = (unsigned __int8)MiLockPageInline(v12, v7, v8, v9);
      MiLockNestedPageAtDpcInline(v11, v14, v15, v16);
      MiFinalizePageAttribute(v11, *(unsigned __int8 *)(v12 + 34) >> 6, 1, v17);
      MiCopyPfnEntryEx(v11, v12);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
            v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v43 = (v41 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
            *(_DWORD *)(SchedulerAssist + 20) &= v41;
            if ( v43 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v13);
      v19 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ValidPte = MiMakeValidPte(v19, v10, 2684354564LL, SchedulerAssist);
      v21 = 0;
      v52 = MiPteInShadowRange(v19);
      v22 = 0x8000000000000000uLL;
      v23 = 4096LL;
      if ( v52 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v21 = 1;
          if ( HIBYTE(word_140C4E008) != v42 )
            goto LABEL_6;
          v43 = (ValidPte & 1) == 0;
        }
        else
        {
          if ( ((unsigned int)v23 & HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink)) == 0 )
            goto LABEL_6;
          v43 = (ValidPte & 1) == 0;
        }
        if ( !v43 )
          ValidPte |= v22;
      }
LABEL_6:
      *(_QWORD *)v19 = ValidPte;
      if ( v21 )
        MiWritePteShadow(v19, ValidPte, v22);
      v24 = (__int64)(a2 << 25) >> 16;
      memmove((void *)v6, (const void *)v24, v23);
      if ( ((v19 ^ v24) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        v25 = ZeroPte;
        v26 = 0LL;
        if ( !v52 )
          goto LABEL_10;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v26 = 1LL;
          if ( HIBYTE(word_140C4E008) == v46 )
          {
            v47 = (v25 & 1) == 0;
            goto LABEL_55;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v47 = (v25 & 1) == 0;
LABEL_55:
          if ( !v47 )
            v25 |= 0x8000000000000000uLL;
        }
LABEL_10:
        *(_QWORD *)v19 = v25;
        if ( (_DWORD)v26 )
          MiWritePteShadow(v19, v25, v26);
LABEL_12:
        v53 = v53 ^ (v53 ^ (v10 << 12)) & 0xFFFFFFFFF000LL | 0x20;
        MiWriteValidPteNewPage((__int64 *)a2, v53, 0);
        KeFlushSingleTb(v24, 0, 1u);
        KeFlushSingleTb(v6, 0, 1u);
        v30 = MiLockPageInline(48 * v4 - 0x58000000000LL, v27, v28, v29);
        v31 = *(_BYTE *)(v12 + 34) & 0xDF;
        *(_WORD *)(v12 + 32) = 0;
        v32 = v30;
        *(_QWORD *)(v12 + 24) &= 0xC000000000000000uLL;
        *(_BYTE *)(v12 + 34) = v31;
        *(_BYTE *)(v12 + 34) &= ~8u;
        MiInsertPageInFreeOrZeroedList(v4, 2);
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        result = (unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v32 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              v48 = KeGetCurrentPrcb();
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v32 + 1));
              v49 = v48->SchedulerAssist;
              v43 = ((unsigned int)result & v49[5]) == 0;
              v49[5] &= result;
              if ( v43 )
                result = KiRemoveSystemWorkPriorityKick((__int64)v48);
            }
          }
        }
        __writecr8(v32);
        return result;
      }
      v33 = ZeroPte;
      v34 = (unsigned __int64 *)(v6 + 8 * ((v19 >> 3) & 0x1FF));
      v35 = 0;
      if ( !MiPteInShadowRange((unsigned __int64)v34) )
      {
LABEL_16:
        *v34 = v33;
        if ( v35 )
          MiWritePteShadow((__int64)v34, v33, v36);
        v6 = v50;
        goto LABEL_12;
      }
      if ( (unsigned int)MiPteHasShadow() )
      {
        v35 = 1;
        if ( HIBYTE(word_140C4E008) != v44 )
          goto LABEL_16;
        v45 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_16;
        v45 = (ZeroPte & 1) == 0;
      }
      if ( !v45 )
        v33 = ZeroPte | 0x8000000000000000uLL;
      goto LABEL_16;
    }
  }
  return result;
}
