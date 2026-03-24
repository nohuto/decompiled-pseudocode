/*
 * XREFs of MiLinkPoolCommitChain @ 0x14028BBC0
 * Callers:
 *     MiCommitPoolMemory @ 0x14028B8AC (MiCommitPoolMemory.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x14023DDC0 (MiGetContainingPageTable.c)
 *     MiUpdateLargePageBitMap @ 0x140280710 (MiUpdateLargePageBitMap.c)
 *     MiIsPoolPteInUse @ 0x14028D1AC (MiIsPoolPteInUse.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiFlushTbAsNeeded @ 0x1402B66A0 (MiFlushTbAsNeeded.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1402E6C70 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiLockAndIncrementShareCount @ 0x140356E80 (MiLockAndIncrementShareCount.c)
 *     MiWriteTopLevelPxe @ 0x14039D80C (MiWriteTopLevelPxe.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

char __fastcall MiLinkPoolCommitChain(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // rsi
  unsigned __int64 v3; // rbp
  __int64 Process; // rdx
  ULONG_PTR v6; // rdi
  __int64 CurrentThread; // rax
  ULONG_PTR v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r9
  ULONG_PTR v16; // r9
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 ValidPte; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 ContainingPageTable; // rax
  __int64 v26; // rax

  v2 = a2;
  v3 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( v3 > *(_QWORD *)(a1 + 56) )
    v3 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(a1 + 78) & 4) != 0 )
  {
    v13 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MI_READ_PTE_LOCK_FREE(v13);
    v14 = MiSwizzleInvalidPte(768LL);
    if ( v15 != v14 && (unsigned int)MiIsPoolPteInUse(v15) )
      KeBugCheckEx(0x1Au, 0x5304uLL, (__int64)(v2 << 25) >> 16, v16, 0LL);
    v17 = *(_QWORD **)(a1 + 16);
    *(_QWORD *)(a1 + 24) += 512LL;
    *(_QWORD *)(a1 + 16) = *v17;
    v18 = (__int64)(v17 + 0xB000000000LL) / 48;
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v18, 0x200uLL, 1, 1);
    ValidPte = MiMakeValidPte(0LL, v18, (*(unsigned __int16 *)(a1 + 78) >> 3) & 0x1F | 0xA4000000);
    if ( (unsigned __int64)v13 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v13 > 0xFFFFF6FB7DBEDFFFuLL )
    {
      if ( (unsigned int)MiPteInShadowRange(v13, v19) )
      {
        if ( (unsigned int)MiPteHasShadow(v22, v21, v23, v24) )
        {
          if ( !HIBYTE(word_140C4E008) && (ValidPte & 1) != 0 )
            ValidPte |= 0x8000000000000000uLL;
          *v13 = ValidPte;
          MiWritePteShadow(v13, ValidPte);
          goto LABEL_23;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ValidPte & 1) != 0 )
        {
          ValidPte |= 0x8000000000000000uLL;
        }
      }
      *v13 = ValidPte;
    }
    else
    {
      MiWriteTopLevelPxe(v13, ValidPte);
    }
LABEL_23:
    ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v13);
    MiLockAndIncrementShareCount(ContainingPageTable);
    LOBYTE(CurrentThread) = MiInitializeLargeNonPagedPoolLeafFrames(v2, v18);
    return CurrentThread;
  }
  MiFlushTbAsNeeded(a2);
  v6 = *(_QWORD *)(a1 + 32);
  for ( LOBYTE(CurrentThread) = 0; v2 <= v3; v2 += 8LL )
  {
    v8 = *(_QWORD *)v2;
    if ( (unsigned int)MiPteInShadowRange(v2, Process) )
    {
      if ( (MiFlags & 0xC00000) != 0 )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(Process + 912) != 1 && (v8 & 1) != 0 && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Process )
          {
            v26 = *(_QWORD *)(Process + 8 * ((v2 >> 3) & 0x1FF));
            Process = v8 | 0x20;
            if ( (v26 & 0x20) == 0 )
              Process = v8;
            v8 = Process;
            if ( (v26 & 0x42) != 0 )
              v8 = Process | 0x42;
          }
        }
      }
    }
    CurrentThread = v8 & 0x3E0;
    LOBYTE(Process) = (v8 & 0xC01) == 0;
    if ( ((unsigned __int8)Process & (CurrentThread == 0)) == 0 )
    {
      if ( (v8 & 1) == 0 )
      {
        LOBYTE(CurrentThread) = CurrentThread == 992;
        if ( (((v8 & 0xC00) == 0) & (unsigned __int8)CurrentThread) != 0 )
          KeBugCheckEx(0x1Au, 0x5308uLL, v2, v8, 0LL);
      }
      continue;
    }
    if ( v6 )
      v9 = (__int64)(v6 + 0x94000000000LL) >> 3;
    else
      v9 = 0xFFFFFFFFFLL;
    CurrentThread = MiSwizzleInvalidPte(v9 << 28);
    Process = CurrentThread | 0x3E0;
    if ( (_DWORD)v11 )
    {
      if ( (unsigned int)MiPteHasShadow(v10, Process, v11, v12) )
      {
        if ( !HIBYTE(word_140C4E008) && (Process & 1) != 0 )
          Process |= 0x8000000000000000uLL;
        *(_QWORD *)v2 = Process;
        LOBYTE(CurrentThread) = MiWritePteShadow(v2, Process);
        goto LABEL_14;
      }
      CurrentThread = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(CurrentThread + 184) + 2172LL) & 0x1000) != 0 && (Process & 1) != 0 )
        Process |= 0x8000000000000000uLL;
    }
    *(_QWORD *)v2 = Process;
LABEL_14:
    v6 = v2;
  }
  *(_QWORD *)(a1 + 32) = v6;
  return CurrentThread;
}
