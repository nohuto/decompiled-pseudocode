/*
 * XREFs of MiLinkPoolCommitChain @ 0x140330100
 * Callers:
 *     MiCommitPoolMemory @ 0x14032FC90 (MiCommitPoolMemory.c)
 * Callees:
 *     MiWriteTopLevelPxe @ 0x140201C64 (MiWriteTopLevelPxe.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiGetContainingPageTable @ 0x140289FE0 (MiGetContainingPageTable.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1402E5F48 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiFlushTbAsNeeded @ 0x140324290 (MiFlushTbAsNeeded.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiLockAndIncrementShareCount @ 0x14034824C (MiLockAndIncrementShareCount.c)
 *     MiIsPoolPteInUse @ 0x14034837C (MiIsPoolPteInUse.c)
 *     MiUpdateLargePageBitMap @ 0x14034D79C (MiUpdateLargePageBitMap.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

char __fastcall MiLinkPoolCommitChain(__int64 a1, ULONG_PTR a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  unsigned __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rbx
  unsigned __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r9
  ULONG_PTR v14; // r9
  _QWORD *v15; // r14
  __int64 v16; // r14
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 ContainingPageTable; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r8

  v2 = a2;
  v3 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( v3 > *(_QWORD *)(a1 + 56) )
    v3 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(a1 + 78) & 4) != 0 )
  {
    v11 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MI_READ_PTE_LOCK_FREE((unsigned __int64)v11);
    v12 = MiSwizzleInvalidPte(768LL);
    if ( v13 != v12 && (unsigned int)MiIsPoolPteInUse(v13) )
      KeBugCheckEx(0x1Au, 0x5304uLL, (__int64)(v2 << 25) >> 16, v14, 0LL);
    v15 = *(_QWORD **)(a1 + 16);
    *(_QWORD *)(a1 + 24) += 512LL;
    *(_QWORD *)(a1 + 16) = *v15;
    v16 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v15 + 0x44000000000LL) >> 4);
    MiUpdateLargePageBitMap((unsigned int)&MiSystemPartition, v16, 512, 1, 1);
    ValidPte = MiMakeValidPte(0LL, v16, (*(unsigned __int16 *)(a1 + 78) >> 3) & 0x1F | 0xA4000000);
    if ( (unsigned __int64)v11 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v11 > 0xFFFFF6FB7DBEDFFFuLL )
    {
      if ( MiPteInShadowRange((unsigned __int64)v11) )
      {
        if ( MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C6697C) && (ValidPte & 1) != 0 )
            ValidPte |= 0x8000000000000000uLL;
          *v11 = ValidPte;
          MiWritePteShadow((__int64)v11, ValidPte, v23);
          goto LABEL_28;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ValidPte & 1) != 0 )
        {
          ValidPte |= 0x8000000000000000uLL;
        }
      }
      *v11 = ValidPte;
    }
    else
    {
      MiWriteTopLevelPxe(v11, ValidPte);
    }
LABEL_28:
    ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v11);
    MiLockAndIncrementShareCount(ContainingPageTable);
    LOBYTE(CurrentThread) = MiInitializeLargeNonPagedPoolLeafFrames(v2, v16);
    return (char)CurrentThread;
  }
  MiFlushTbAsNeeded(a2, ((__int64)(v3 - a2) >> 3) + 1, *(_DWORD *)(a1 + 44), 1);
  v5 = *(_QWORD *)(a1 + 32);
  for ( LOBYTE(CurrentThread) = 0; v2 <= v3; v2 += 8LL )
  {
    v7 = *(_QWORD *)v2;
    if ( v2 >= 0xFFFFF6FB7DBED000uLL
      && v2 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v7 & 1) != 0
      && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v20 = *((_QWORD *)&Flink->Flink + ((v2 >> 3) & 0x1FF));
        v21 = v7 | 0x20;
        if ( (v20 & 0x20) == 0 )
          v21 = *(_QWORD *)v2;
        v7 = v21;
        if ( (v20 & 0x42) != 0 )
          v7 = v21 | 0x42;
      }
    }
    CurrentThread = (struct _KTHREAD *)(v7 & 0x3E0);
    if ( (v7 & 0xC01) != 0 || CurrentThread != 0LL )
    {
      if ( (v7 & 1) == 0 )
      {
        LOBYTE(CurrentThread) = CurrentThread == (struct _KTHREAD *)992;
        if ( (((v7 & 0xC00) == 0) & (unsigned __int8)CurrentThread) != 0 )
          KeBugCheckEx(0x1Au, 0x5308uLL, v2, v7, 0LL);
      }
      continue;
    }
    if ( v5 )
      v8 = (__int64)(v5 + 0x94000000000LL) >> 3;
    else
      v8 = 0xFFFFFFFFFLL;
    v9 = v8 << 28;
    if ( qword_140C657C0 )
    {
      if ( (qword_140C657C0 & v9) != 0 )
        v9 |= 0x10uLL;
      else
        v9 |= qword_140C657C0;
    }
    v10 = v9 | 0x3E0;
    LODWORD(CurrentThread) = MiPteInShadowRange(v2);
    if ( (_DWORD)CurrentThread )
    {
      if ( MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C6697C) && (v10 & 1) != 0 )
          v10 |= 0x8000000000000000uLL;
        *(_QWORD *)v2 = v10;
        LOBYTE(CurrentThread) = MiWritePteShadow(v2, v10, v22);
        goto LABEL_17;
      }
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v10 & 1) != 0 )
        v10 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)v2 = v10;
LABEL_17:
    v5 = v2;
  }
  *(_QWORD *)(a1 + 32) = v5;
  return (char)CurrentThread;
}
