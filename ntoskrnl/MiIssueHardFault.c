/*
 * XREFs of MiIssueHardFault @ 0x140342F00
 * Callers:
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x140345FA0 (MiInPagePageTable.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140210114 (MiLockAndDecrementShareCount.c)
 *     MiLockPageAndSetDirty @ 0x1402110B8 (MiLockPageAndSetDirty.c)
 *     MiRelockFaultState @ 0x14022853C (MiRelockFaultState.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x14026D1B0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     MiFinishHardFault @ 0x140284200 (MiFinishHardFault.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetEffectivePagePriorityThread @ 0x14028A260 (MiGetEffectivePagePriorityThread.c)
 *     MiGetPagingFileOffset @ 0x14029EA80 (MiGetPagingFileOffset.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiMakeTransitionPteValid @ 0x1402CD590 (MiMakeTransitionPteValid.c)
 *     MiZeroPhysicalPage @ 0x1402CE78C (MiZeroPhysicalPage.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x1402D7118 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x1402E9820 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiLogPageAccess @ 0x140326EF0 (MiLogPageAccess.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     MiWaitForInPageComplete @ 0x140342A90 (MiWaitForInPageComplete.c)
 *     MiReferenceInPageFile @ 0x140343354 (MiReferenceInPageFile.c)
 *     MiGetSessionIdForVa @ 0x140343520 (MiGetSessionIdForVa.c)
 *     MiUnlockFaultPageTable @ 0x140343598 (MiUnlockFaultPageTable.c)
 *     MiIssueHardFaultIo @ 0x1403435F0 (MiIssueHardFaultIo.c)
 *     PfHardFaultRecord @ 0x140344BD4 (PfHardFaultRecord.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiIssueHardFault(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  ULONG_PTR v6; // rdx
  unsigned int v8; // ebx
  unsigned int SessionIdForVa; // eax
  __int64 *v10; // rcx
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 SchedulerAssist; // r9
  __int64 v14; // rax
  unsigned __int8 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 result; // rax
  int v26; // ebx
  int v27; // edi
  __int64 v28; // r12
  unsigned __int64 v29; // rcx
  int v30; // edx
  ULONG_PTR *v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  int v35; // eax
  bool v36; // zf
  ULONG_PTR *v37; // rdx
  unsigned __int64 v38; // rbx
  __int64 v39; // r8
  unsigned __int64 TransitionPteValid; // rbx
  _BYTE *v41; // r8
  __int64 v42; // r8
  unsigned __int64 v43; // rax
  char v44; // cl
  __int64 v45; // [rsp+0h] [rbp-70h]
  _BYTE v46[16]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int8 v47; // [rsp+70h] [rbp+0h]
  __int64 v48; // [rsp+78h] [rbp+8h]
  __int64 v49; // [rsp+80h] [rbp+10h]
  _BYTE *v50; // [rsp+88h] [rbp+18h] BYREF
  __int64 v51; // [rsp+90h] [rbp+20h] BYREF
  __int64 v52; // [rsp+98h] [rbp+28h]
  __int64 v53; // [rsp+A0h] [rbp+30h]

  v4 = *(_QWORD *)(a2 + 152);
  v6 = *(_QWORD *)a1;
  v51 = 0LL;
  v8 = 0;
  v53 = v4;
  *(_QWORD *)(a2 + 224) = v6;
  SessionIdForVa = MiGetSessionIdForVa(a1, v6, a3, a4);
  v10 = *(__int64 **)(a2 + 208);
  if ( v10 )
    v11 = *v10;
  else
    v11 = 0LL;
  v12 = MiReferenceInPageFile(a2, SessionIdForVa);
  v48 = *(_QWORD *)(a1 + 56);
  v49 = *(_QWORD *)(a1 + 72);
  MiUnlockFaultPageTable(a1 + 56);
  v47 = *(_BYTE *)(a1 + 68);
  if ( (*(_BYTE *)(a1 + 69) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v48, 1u);
  else
    MiUnlockWorkingSetShared(v48, 1u);
  v48 = *(_QWORD *)(a1 + 16);
  if ( v12 )
  {
    *(_QWORD *)(a2 + 200) = v12;
    v8 = (*(_DWORD *)(v11 + 56) >> 5) & 1;
  }
  else
  {
    *(_QWORD *)(a2 + 200) = *(_QWORD *)(*(_QWORD *)(a2 + 200) + 56LL);
  }
  v14 = *(_QWORD *)(a1 + 16);
  if ( (v14 & 1) == 0 || *(_BYTE *)(v14 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    ++*(_BYTE *)(v4 + 1390);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 184LL) & 7) != 0 )
    --*(_WORD *)(v4 + 486);
  else
    --*(_WORD *)(v4 + 484);
  if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
  {
    v15 = v47;
    if ( v47 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
      v35 = ~(unsigned __int16)(-1LL << (v47 + 1));
      v36 = (v35 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
      *(_DWORD *)(SchedulerAssist + 20) &= v35;
      if ( v36 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v15 = v47;
  }
  __writecr8(v15);
  if ( (*(_DWORD *)(a2 + 192) & 0x20000) != 0 )
  {
    v16 = (*(_DWORD *)(a2 + 312) >> 12) + (unsigned int)((*(_DWORD *)(a2 + 312) & 0xFFF) != 0);
    MiZeroPhysicalPage(
      6LL * *(_QWORD *)(a2 + 8 * v16 + 312),
      *(_QWORD *)(a2 + 8 * v16 + 312),
      1LL,
      *(unsigned __int8 *)(48LL * *(_QWORD *)(a2 + 8 * v16 + 312) - 0x220000000000LL + 34) >> 6);
  }
  v17 = *(unsigned int *)(a2 + 312);
  *(_DWORD *)(a2 + 184) = v17;
  v50 = 0LL;
  if ( *(_DWORD *)(a2 + 36) )
  {
    v8 = 2;
  }
  else
  {
    v18 = *(_DWORD *)(a2 + 192);
    if ( (v18 & 0x200008) != 0x200008 || (v18 & 0x100) != 0 )
    {
      if ( ((PerfGlobalGroupMask & 0x2000) != 0 || (dword_140D0BE94 & 1) != 0) && (v18 & 0x100) == 0 && (v18 & 8) == 0 )
      {
        v19 = *(_QWORD *)(a2 + 96);
        v20 = *(_QWORD *)(a2 + 224);
        v45 = *(_QWORD *)(a2 + 200);
        v50 = v46;
        PfHardFaultRecord((unsigned int)v46, v19, v17, v20, v45, v4);
      }
      v21 = *(_QWORD *)(a1 + 56);
      if ( (*(_BYTE *)(v21 + 187) & 0x60) == 0x60 && !*((_QWORD *)MiGetSharedVm(v21) + 4) )
        KiStackAttachProcess(PsInitialSystemProcess, 0, a2 + 104);
      v8 |= 2u;
      MiIssueHardFaultIo(a2, v8 & 1, *(_QWORD *)(a1 + 16));
    }
  }
  v22 = *(_QWORD *)(a1 + 16);
  if ( (v22 & 1) != 0 )
  {
    v29 = v22 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v29 == 1 )
    {
      v30 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 184LL);
      if ( (v30 & 7u) >= 2 )
        *(_DWORD *)(a2 + 192) ^= (*(_DWORD *)(a2 + 192) ^ (2 * v30 - 2)) & 6;
      if ( v8 < 2 )
      {
        v37 = *(ULONG_PTR **)(v29 + 64);
        if ( *v37 == v29 + 56 )
        {
          *(_QWORD *)a2 = v29 + 56;
          *(_QWORD *)(a2 + 8) = v37;
          *v37 = a2;
          *(_QWORD *)(v29 + 64) = a2;
          *(_QWORD *)(v29 + 72) += *(unsigned int *)(a2 + 184);
          goto LABEL_52;
        }
      }
      else
      {
        v31 = *(ULONG_PTR **)(v29 + 48);
        v32 = v29 + 40;
        if ( *v31 == v32 )
        {
          *(_QWORD *)a2 = v32;
          *(_QWORD *)(a2 + 8) = v31;
          *v31 = a2;
          *(_QWORD *)(v32 + 8) = a2;
LABEL_52:
          KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 184LL) & 7) != 0 )
          {
            v36 = (*(_WORD *)(v4 + 486))++ == 0xFFFF;
            if ( v36 && *(_QWORD *)(v4 + 152) != v4 + 152 )
              KiCheckForKernelApcDelivery();
          }
          else
          {
            KeLeaveCriticalRegionThread(v4);
          }
          MiRelockFaultState((__int64 *)(a1 + 56), v49, v17, SchedulerAssist);
          return 0LL;
        }
      }
      __fastfail(3u);
    }
  }
  v23 = *(_QWORD *)(a2 + 248);
  v24 = *(_QWORD *)(a2 + 232);
  if ( !_bittest64((const signed __int64 *)(v23 + 40), 0x28u) && *(__int64 *)(v23 + 8) > 0 )
    v23 = 0LL;
  MiWaitForInPageComplete(a1, a2, (int *)&v50);
  result = MiFinishHardFault(a1, v49, a2, &v51);
  v26 = (int)v50;
  v27 = result;
  --*(_BYTE *)(v4 + 1390);
  LODWORD(v49) = v26;
  if ( !(_DWORD)result )
  {
    if ( !v23 )
      v23 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v51) >> 12) & 0xFFFFFFFFFFLL)
          - 0x220000000000LL;
    v28 = *(_DWORD *)(a1 + 8) & 2;
    if ( *(__int64 *)(v23 + 40) < 0 )
    {
      v24 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v27 = MiCompleteProtoPteFault((ULONG_PTR *)a1, v51, (unsigned int)v28, 0, v48);
      if ( v27 >= 0 )
        goto LABEL_32;
      return (unsigned int)v27;
    }
    v52 = v48 & 1;
    if ( (v48 & 1) == 0 || *(_BYTE *)(v48 & 0xFFFFFFFFFFFFFFFEuLL) != 4 )
      goto LABEL_86;
    v38 = MI_READ_PTE_LOCK_FREE(v24) & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    if ( MiPteInShadowRange(v24) )
    {
      if ( MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C6697C) && (v38 & 1) != 0 )
          v38 |= 0x8000000000000000uLL;
        *(_QWORD *)v24 = v38;
        MiWritePteShadow(v24, v38, v39);
        goto LABEL_86;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v38 & 1) != 0 )
      {
        v38 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v24 = v38;
LABEL_86:
    TransitionPteValid = MiMakeTransitionPteValid(v24);
    if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v23 + 16)) )
      TransitionPteValid |= 0x40uLL;
    if ( v28 )
    {
      if ( MiOkToSetPteDirtyForNotValidFault(TransitionPteValid, *(_QWORD *)a1) && (TransitionPteValid & 0x800) != 0 )
      {
        TransitionPteValid |= 0x42uLL;
        if ( (*(_BYTE *)(v23 + 34) & 0x10) == 0 )
        {
          if ( (unsigned int)MiGetPagingFileOffset((__int64 *)(v23 + 16)) )
            MiLockPageAndSetDirty(v23, 1);
        }
      }
    }
    v41 = (_BYTE *)(v48 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( !v52 )
      goto LABEL_109;
    if ( *v41 == 4 )
    {
      if ( MiPteInShadowRange(v24) )
      {
        if ( MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C6697C) && (TransitionPteValid & 1) != 0 )
            TransitionPteValid |= 0x8000000000000000uLL;
          *(_QWORD *)v24 = TransitionPteValid;
          MiWritePteShadow(v24, TransitionPteValid, v42);
          return 276LL;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (TransitionPteValid & 1) != 0 )
        {
          TransitionPteValid |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v24 = TransitionPteValid;
      return 276LL;
    }
    if ( *v41 == 5 )
    {
      v43 = v48 & 0xFFFFFFFFFFFFFFFEuLL;
      v44 = 0;
    }
    else
    {
LABEL_109:
      v44 = 0;
      v43 = 0LL;
      if ( v52 )
        v44 = *v41 == 3;
    }
    if ( (unsigned int)MiAllocateWsle(
                         *(_QWORD *)(a1 + 56),
                         (unsigned __int64 *)v24,
                         (_QWORD *)v23,
                         0,
                         TransitionPteValid,
                         v44,
                         v43) )
    {
      v26 = v49;
LABEL_32:
      if ( dword_140C67C68 && v26 != 2 && (unsigned int)MiGetEffectivePagePriorityThread(v53) >= dword_140C67C6C )
        MiLogPageAccess(*(_QWORD *)(a1 + 56), v24 | 1);
      if ( !v27 )
        return 276;
      return (unsigned int)v27;
    }
    MiLockAndDecrementShareCount(v23, 0);
    return (unsigned int)-1073741801;
  }
  return result;
}
