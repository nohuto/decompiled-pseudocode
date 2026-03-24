/*
 * XREFs of MiInsertLargeUserMapping @ 0x14055E4B8
 * Callers:
 *     MiCommitExistingVad @ 0x140218D50 (MiCommitExistingVad.c)
 *     MiMapUserLargePages @ 0x14055E670 (MiMapUserLargePages.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x140289E54 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x14028D0E0 (MiGetUsedPtesHandle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 */

char __fastcall MiInsertLargeUserMapping(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v5; // ebp
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  __int64 v9; // r8
  unsigned __int64 ValidPte; // rbx
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 UsedPtesHandle; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v17; // ebp
  __int64 v18; // r8

  v5 = a4;
  v7 = a2;
  if ( (_DWORD)a4 != 2 )
  {
    a4 = (unsigned int)(2 - a4);
    do
    {
      v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --a4;
    }
    while ( a4 );
  }
  v8 = 16LL;
  v9 = a5;
  LODWORD(v9) = a5 | 0x80000000;
  if ( (*(_DWORD *)(a1 + 48) & 0x300000) == 0x300000 )
    v9 = a5;
  if ( v5 != 2 )
  {
    v8 = 1LL;
    v9 = (unsigned int)v9 | 0x4000000;
  }
  ValidPte = MiMakeValidPte(a2, a3, v9, a4);
  v11 = 0;
  if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && !MI_READ_PTE_LOCK_FREE(v7) )
  {
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16, v12);
    MiIncreaseUsedPtesCount(UsedPtesHandle, (unsigned int)v8, v14, v15);
  }
  if ( v5 == 2 )
  {
    do
    {
      *(_QWORD *)v7 = ValidPte;
      v7 += 8LL;
      ++v11;
      ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFF000LL;
      LOBYTE(CurrentThread) = v11;
    }
    while ( v11 < v8 );
    return (char)CurrentThread;
  }
  v17 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange(v7);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v17 = 1;
      if ( !HIBYTE(word_140C4E008) )
      {
LABEL_20:
        if ( (ValidPte & 1) != 0 )
        {
          LOBYTE(CurrentThread) = 0;
          ValidPte |= 0x8000000000000000uLL;
        }
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        goto LABEL_20;
    }
  }
  *(_QWORD *)v7 = ValidPte;
  if ( v17 )
    LOBYTE(CurrentThread) = MiWritePteShadow(v7, ValidPte, v18);
  return (char)CurrentThread;
}
