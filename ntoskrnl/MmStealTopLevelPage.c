/*
 * XREFs of MmStealTopLevelPage @ 0x1403D1884
 * Callers:
 *     KiSwapDirectoryTableBaseTarget @ 0x1403D1750 (KiSwapDirectoryTableBaseTarget.c)
 * Callees:
 *     KeFlushSingleTb @ 0x140211E60 (KeFlushSingleTb.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1402A6248 (KeMakeKernelDirectoryTableBase.c)
 *     KeMakeUserDirectoryTableBase @ 0x1402A6428 (KeMakeUserDirectoryTableBase.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     MiReplacePageTablePage @ 0x14039164C (MiReplacePageTablePage.c)
 */

__int64 __fastcall MmStealTopLevelPage(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r13
  volatile LONG *SharedVm; // rbx
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
  KIRQL v28; // [rsp+70h] [rbp+8h]
  unsigned __int64 v29; // [rsp+78h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 40) != CurrentThread )
    return 0LL;
  Process = CurrentThread->ApcState.Process;
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  v6 = 0;
  v28 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  MiReplacePageTablePage(a1);
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    ++dword_140C13548;
    v29 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 32), 0LL, 0x80000000);
    v8 = (_QWORD *)(v29 + 8LL * ((((*(_DWORD *)(a1 + 8) >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
    v9 = 0;
    v10 = ((v7 & 0xFFFFFFFFFFLL) << 12) | MI_READ_PTE_LOCK_FREE((unsigned __int64)v8) & 0xFFF0000000000FFFuLL;
    v11 = ZeroPte;
    v12 = MiPteInShadowRange((unsigned __int64)v8);
    v13 = 0x8000000000000000uLL;
    if ( !v12 )
      goto LABEL_5;
    if ( MiPteHasShadow() )
    {
      v9 = 1;
      if ( HIBYTE(word_140C6697C) )
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
      if ( MiPteHasShadow() )
      {
        v14 = 1;
        if ( HIBYTE(word_140C6697C) )
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
    MiUnmapPageInHyperSpaceWorker(v29, 0x11u);
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
      if ( MiPteHasShadow() )
      {
        v20 = 1;
        if ( HIBYTE(word_140C6697C) )
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
    v26 = ((v7 & 0xFFFFFFFFFFLL) << 12) | v19 & 0xFFF0000000000FFFuLL;
    if ( !v22 )
      goto LABEL_46;
    if ( MiPteHasShadow() )
    {
      v25 = 1;
      if ( !HIBYTE(word_140C6697C) )
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
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v28);
  return v6;
}
