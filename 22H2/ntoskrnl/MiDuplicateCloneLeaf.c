/*
 * XREFs of MiDuplicateCloneLeaf @ 0x14055A174
 * Callers:
 *     MiBuildForkPte @ 0x1405581FC (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x14055A9A4 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140218590 (MiGetPfnPriority.c)
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAA0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementShareCount @ 0x14023FB30 (MiDecrementShareCount.c)
 *     MiCopyPage @ 0x14023FB90 (MiCopyPage.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x140284864 (MiChangePageAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x1402AF040 (MiMakeTransitionPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiVaToPfn @ 0x140301194 (MiVaToPfn.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x14031218C (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiLockNestedPageAtDpcInline @ 0x140333FA0 (MiLockNestedPageAtDpcInline.c)
 *     MiUpdateTransitionPteFrame @ 0x1403369F0 (MiUpdateTransitionPteFrame.c)
 *     MiInitializePfnForOtherProcess @ 0x140356D68 (MiInitializePfnForOtherProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDuplicateCloneLeaf(
        unsigned __int64 a1,
        __int64 *a2,
        ULONG_PTR a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  unsigned __int64 v8; // rdi
  ULONG_PTR v9; // rbx
  __int64 v10; // r14
  int v11; // r15d
  unsigned __int64 v12; // rbx
  LONG *SharedVm; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  int v20; // r9d
  __int64 TransitionPte; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // edx
  bool v26; // zf
  char v27; // r14
  __int64 v28; // rbx
  __int64 v29; // r8
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  _DWORD *v34; // r9
  unsigned __int64 v35; // rbx
  _DWORD *v36; // r9
  unsigned __int8 v37; // cl
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // edx
  int v42; // [rsp+20h] [rbp-48h]
  int v43; // [rsp+24h] [rbp-44h]
  struct _KTHREAD *CurrentThread; // [rsp+28h] [rbp-40h]
  unsigned int v45; // [rsp+28h] [rbp-40h]
  unsigned __int64 *v46; // [rsp+30h] [rbp-38h]
  char PfnPriority; // [rsp+30h] [rbp-38h]
  __int64 v48; // [rsp+38h] [rbp-30h] BYREF

  v8 = MI_READ_PTE_LOCK_FREE(a1);
  v48 = v8;
  if ( (v8 & 1) != 0 )
  {
    v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v48) >> 12) & 0xFFFFFFFFFLL;
    v10 = 48 * v9 - 0x58000000000LL;
    v11 = 1;
    v8 = *(_QWORD *)(v10 + 16);
  }
  else
  {
    v12 = v8;
    if ( qword_140C4DF40 )
    {
      if ( (v8 & 0x10) != 0 )
        v12 = v8 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v12 = v8 & ~qword_140C4DF40;
    }
    v9 = (v12 >> 12) & 0xFFFFFFFFFLL;
    v10 = 48 * v9 - 0x58000000000LL;
    if ( (*(_BYTE *)(v10 + 34) & 0x20) != 0 )
    {
      v46 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockWorkingSetExclusive((__int64)v46, a4);
      CurrentThread = KeGetCurrentThread();
      ++BYTE6(CurrentThread[1].Queue);
      --BYTE6(CurrentThread[1].Queue);
      SharedVm = MiGetSharedVm((__int64)v46);
      ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      return 0LL;
    }
    v11 = 0;
  }
  v15 = (v8 >> 5) & 0x1F;
  v43 = MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v10 + 16));
  v19 = v16 + 48 * a3;
  if ( v11 != 1 )
    MiLockNestedPageAtDpcInline(v16 + 48 * a3, v16, v17, v18);
  v20 = 129;
  if ( v11 != 1 )
    v20 = 132;
  MiCopyPage(a3, v9, 0LL, v20);
  if ( !v11 )
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  PfnPriority = MiGetPfnPriority(v10);
  v45 = *(unsigned __int8 *)(v10 + 34) >> 6;
  if ( v11 == 1 )
  {
    TransitionPte = MiMakeTransitionPte(a3, v15);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && a5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << (a5 + 1));
          v26 = (v25 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v25;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(a5);
    TransitionPte = MiUpdateTransitionPteFrame(v48, a3);
  }
  v48 = TransitionPte;
  v27 = TransitionPte;
  v42 = 0;
  v28 = TransitionPte;
  if ( MiPteInShadowRange((unsigned __int64)a2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v42 = 1;
      if ( !HIBYTE(word_140C4E008) )
      {
LABEL_31:
        if ( (v27 & 1) != 0 )
          v28 |= 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_31;
    }
  }
  v30 = (unsigned __int64)a2;
  *a2 = v28;
  if ( v42 )
    MiWritePteShadow((__int64)a2, v28, v29);
  v31 = MiVaToPfn(v30);
  MiInitializePfnForOtherProcess(a3, a1, v31, 16LL);
  *(_QWORD *)(v19 + 16) = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (unsigned int)v15);
  v35 = (unsigned __int8)MiLockPageInline(v19, v32, v33, v34);
  if ( v43 )
    *(_QWORD *)(v19 + 16) |= 0x4000000uLL;
  v37 = *(_BYTE *)(v19 + 34);
  if ( v37 >> 6 != v45 )
  {
    MiChangePageAttribute(v19, v45, 3LL, v36);
    v37 = *(_BYTE *)(v19 + 34);
  }
  *(_BYTE *)(v19 + 35) ^= (PfnPriority ^ *(_BYTE *)(v19 + 35)) & 7;
  *(_BYTE *)(v19 + 34) = v37 & 0xF8 | 6;
  MiDecrementShareCount(v19);
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v38 = KeGetCurrentIrql();
      if ( v38 <= 0xFu && (unsigned __int8)v35 <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = v39->SchedulerAssist;
        v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
        v26 = (v41 & v40[5]) == 0;
        v40[5] &= v41;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick((__int64)v39);
      }
    }
  }
  __writecr8(v35);
  return 1LL;
}
