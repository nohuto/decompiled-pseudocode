/*
 * XREFs of MmStealTopLevelPage @ 0x140387ED8
 * Callers:
 *     KiSwapDirectoryTableBaseTarget @ 0x140387DA0 (KiSwapDirectoryTableBaseTarget.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAA0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x140334A18 (KeFlushSingleTb.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1403558E0 (KeMakeKernelDirectoryTableBase.c)
 *     KeMakeUserDirectoryTableBase @ 0x140355C04 (KeMakeUserDirectoryTableBase.c)
 *     MiReplacePageTablePage @ 0x1403634C0 (MiReplacePageTablePage.c)
 */

__int64 __fastcall MmStealTopLevelPage(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r13
  LONG *SharedVm; // rbx
  unsigned int v6; // esi
  __int64 v7; // r15
  _QWORD *v8; // r14
  int v9; // r12d
  unsigned __int64 v10; // rbx
  __int64 v11; // rdi
  BOOL v12; // r11d
  __int64 v13; // r8
  int v14; // edx
  bool v15; // zf
  bool v16; // zf
  __int64 v17; // r14
  unsigned __int64 v18; // rdi
  __int64 v19; // rbx
  int v20; // ebp
  __int64 v21; // r8
  BOOL v22; // r12d
  bool v23; // zf
  __int64 v24; // r8
  int v25; // edx
  unsigned __int64 v26; // rbx
  bool v27; // zf
  KIRQL v28; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 40) != CurrentThread )
    return 0LL;
  Process = CurrentThread->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]);
  v6 = 0;
  v28 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  MiReplacePageTablePage(a1);
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    v8 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * ((((*(_DWORD *)(a1 + 8) >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
    v9 = 0;
    v10 = ((v7 & 0xFFFFFFFFFLL) << 12) | MI_READ_PTE_LOCK_FREE((unsigned __int64)v8) & 0xFFFF000000000FFFuLL;
    v11 = ZeroPte;
    v12 = MiPteInShadowRange((unsigned __int64)v8);
    v13 = 0x8000000000000000uLL;
    if ( !v12 )
      goto LABEL_5;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v9 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_5;
      v15 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v15 = (ZeroPte & 1) == 0;
    }
    if ( !v15 )
      v11 = v13 | ZeroPte;
LABEL_5:
    *v8 = v11;
    if ( v9 )
    {
      MiWritePteShadow((__int64)v8, v11, v13);
      v13 = 0x8000000000000000uLL;
    }
    v14 = 0;
    if ( v12 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v14 = 1;
        if ( HIBYTE(word_140C4E008) )
          goto LABEL_8;
        v16 = (v10 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_8;
        v16 = (v10 & 1) == 0;
      }
      if ( !v16 )
        v10 |= v13;
    }
LABEL_8:
    *v8 = v10;
    if ( v14 )
      MiWritePteShadow((__int64)v8, v10, v13);
    if ( !*(_DWORD *)(a1 + 60) )
    {
      Process->DirectoryTableBase = KeMakeKernelDirectoryTableBase(v7 << 12);
LABEL_12:
      v6 = 1;
      goto LABEL_13;
    }
    v17 = (((unsigned __int64)Process[1].ProcessListEntry.Flink >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v18 = ZeroPte;
    v19 = MI_READ_PTE_LOCK_FREE(v17);
    v20 = 0;
    v22 = MiPteInShadowRange(v17);
    if ( v22 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v20 = 1;
        if ( HIBYTE(word_140C4E008) )
          goto LABEL_36;
        v23 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_36;
        v23 = (ZeroPte & 1) == 0;
      }
      if ( !v23 )
        v18 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_36:
    *(_QWORD *)v17 = v18;
    if ( v20 )
      MiWritePteShadow(v17, v18, v21);
    KeFlushSingleTb(v17 << 25 >> 16, 0, 2u);
    v25 = 0;
    v26 = ((v7 & 0xFFFFFFFFFLL) << 12) | v19 & 0xFFFF000000000FFFuLL;
    if ( !v22 )
      goto LABEL_46;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v25 = 1;
      if ( !HIBYTE(word_140C4E008) )
      {
        v27 = (v26 & 1) == 0;
        goto LABEL_44;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v27 = (v26 & 1) == 0;
LABEL_44:
      if ( !v27 )
        v26 |= 0x8000000000000000uLL;
    }
LABEL_46:
    *(_QWORD *)v17 = v26;
    if ( v25 )
      MiWritePteShadow(v17, v26, v24);
    Process->UserDirectoryTableBase = KeMakeUserDirectoryTableBase(v7 << 12);
    goto LABEL_12;
  }
LABEL_13:
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessorsPadding[6], v28);
  return v6;
}
