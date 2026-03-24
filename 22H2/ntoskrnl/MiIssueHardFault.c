/*
 * XREFs of MiIssueHardFault @ 0x14028F030
 * Callers:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x14028C440 (MiInPagePageTable.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     MiAllocateWsle @ 0x140211C80 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     MiFinishHardFault @ 0x140239200 (MiFinishHardFault.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     MiLockAndDecrementShareCount @ 0x140263D30 (MiLockAndDecrementShareCount.c)
 *     MiRelockFaultState @ 0x140285928 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14028FB74 (MiReleaseFaultState.c)
 *     MiLockPageAndSetDirty @ 0x1402900EC (MiLockPageAndSetDirty.c)
 *     MiWaitForInPageComplete @ 0x14029B880 (MiWaitForInPageComplete.c)
 *     MiReferenceInPageFile @ 0x14029D328 (MiReferenceInPageFile.c)
 *     MiGetSessionIdForVa @ 0x14029EB40 (MiGetSessionIdForVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogPageAccess @ 0x1402BACE0 (MiLogPageAccess.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x140303DF4 (MiOkToSetPteDirtyForNotValidFault.c)
 *     PfHardFaultRecord @ 0x140305864 (PfHardFaultRecord.c)
 *     MiIssueHardFaultIo @ 0x140306F74 (MiIssueHardFaultIo.c)
 *     MiMakeTransitionPteValid @ 0x1403096E0 (MiMakeTransitionPteValid.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x14031218C (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiGetEffectivePagePriorityThread @ 0x140339E94 (MiGetEffectivePagePriorityThread.c)
 *     MiGetPagingFileOffset @ 0x14033A2B0 (MiGetPagingFileOffset.c)
 *     MiZeroPhysicalPage @ 0x1403578E0 (MiZeroPhysicalPage.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiIssueHardFault(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r12
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int SessionIdForVa; // eax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v16; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  int v21; // r8d
  _DWORD *v22; // r9
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  int v30; // edx
  __int64 *v31; // rax
  unsigned __int64 v32; // rcx
  __int64 *v33; // rdx
  __int64 v34; // r8
  _DWORD *v35; // r9
  __int64 v37; // r14
  unsigned __int64 v38; // rsi
  int v39; // edi
  int v40; // eax
  unsigned int v41; // edx
  __int64 v42; // rdx
  __int64 *v43; // rbx
  unsigned __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 TransitionPteValid; // rbx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  _BYTE *v54; // r15
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  char v60; // dl
  __int64 v61; // r8
  __int64 v62; // [rsp+0h] [rbp-70h]
  __int64 v63; // [rsp+0h] [rbp-70h]
  _BYTE v64[16]; // [rsp+20h] [rbp-50h] BYREF
  char v65[8]; // [rsp+70h] [rbp+0h] BYREF
  __int64 v66; // [rsp+78h] [rbp+8h]
  _BYTE *v67; // [rsp+80h] [rbp+10h] BYREF
  unsigned __int64 v68; // [rsp+88h] [rbp+18h] BYREF
  __int64 v69; // [rsp+90h] [rbp+20h]
  __int64 *v70; // [rsp+98h] [rbp+28h]
  _QWORD *v71; // [rsp+A0h] [rbp+30h]
  __int64 v72; // [rsp+A8h] [rbp+38h]

  v2 = *(_QWORD *)(a2 + 208);
  v4 = *(_QWORD *)(a2 + 152);
  v71 = (_QWORD *)a1;
  v6 = *(_QWORD *)a1;
  v7 = 0;
  *(_QWORD *)(a2 + 224) = v6;
  v65[0] = 0;
  v68 = 0LL;
  v69 = v2;
  SessionIdForVa = MiGetSessionIdForVa(v6);
  v9 = MiReferenceInPageFile(a2, SessionIdForVa);
  LOBYTE(v10) = 1;
  v70 = (__int64 *)(a1 + 56);
  v11 = MiReleaseFaultState(a1 + 56, v10, v65);
  v12 = *(_QWORD *)(a1 + 16);
  v66 = v11;
  if ( v9 )
  {
    v13 = v69;
    *(_QWORD *)(a2 + 200) = v9;
    v7 = (*(_DWORD *)(v13 + 56) >> 5) & 1;
  }
  else
  {
    *(_QWORD *)(a2 + 200) = *(_QWORD *)(*(_QWORD *)(a2 + 200) + 56LL);
  }
  v14 = *(_QWORD *)(a1 + 16);
  if ( (v14 & 1) == 0 || *(_BYTE *)(v14 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    ++*(_BYTE *)(v4 + 1310);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 184LL) & 7) != 0 )
    --*(_WORD *)(v4 + 486);
  else
    --*(_WORD *)(v4 + 484);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v16 = v65[0];
    if ( v65[0] <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = v65[0];
      v19 = ~(unsigned __int16)(-1LL << (v65[0] + 1));
      v20 = (v19 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v16 = v65[0];
  }
  __writecr8(v16);
  v21 = *(_DWORD *)(a2 + 312);
  v22 = (_DWORD *)0xFFFFFA8000000000LL;
  if ( (*(_DWORD *)(a2 + 192) & 0x20000) != 0 )
  {
    MiZeroPhysicalPage(*(_QWORD *)(a2
                                 + 8LL
                                 * ((*(_DWORD *)(a2 + 312) >> 12) + (unsigned int)((*(_DWORD *)(a2 + 312) & 0xFFF) != 0))
                                 + 312));
    v21 = *(_DWORD *)(a2 + 312);
  }
  *(_DWORD *)(a2 + 184) = v21;
  v67 = 0LL;
  if ( *(_DWORD *)(a2 + 36) )
  {
    v7 = 2;
LABEL_33:
    v27 = a1 + 56;
    goto LABEL_34;
  }
  v23 = *(_DWORD *)(a2 + 192);
  if ( (v23 & 0x200008) == 0x200008 && (v23 & 0x100) == 0 )
    goto LABEL_33;
  if ( ((PerfGlobalGroupMask & 0x2000) != 0 || (dword_140CEC354 & 1) != 0) && (v23 & 0x100) == 0 && (v23 & 8) == 0 )
  {
    v24 = *(_QWORD *)(a2 + 96);
    v25 = *(_QWORD *)(a2 + 224);
    v62 = *(_QWORD *)(a2 + 200);
    v67 = v64;
    PfHardFaultRecord((unsigned int)v64, v24, v21, v25, v62, v4);
  }
  v26 = *(_QWORD *)(a1 + 56);
  v27 = a1 + 56;
  if ( (*(_BYTE *)(v26 + 187) & 0x60) == 0x60 && !*((_QWORD *)MiGetSharedVm(v26) + 4) )
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, a2 + 104, v22);
  v7 |= 2u;
  MiIssueHardFaultIo(a2, v7 & 1, *(_QWORD *)(a1 + 16), v22);
LABEL_34:
  v28 = *(_QWORD *)(a1 + 16);
  if ( (v28 & 1) != 0 )
  {
    v29 = v28 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v29 == 1 )
    {
      v30 = *(unsigned __int8 *)(*(_QWORD *)v27 + 184LL);
      if ( (v30 & 7u) >= 2 )
        *(_DWORD *)(a2 + 192) ^= (*(_DWORD *)(a2 + 192) ^ (2 * v30 - 2)) & 6;
      if ( v7 < 2 )
      {
        v33 = *(__int64 **)(v29 + 64);
        if ( *v33 == v29 + 56 )
        {
          *(_QWORD *)a2 = v29 + 56;
          *(_QWORD *)(a2 + 8) = v33;
          *v33 = a2;
          *(_QWORD *)(v29 + 64) = a2;
          *(_QWORD *)(v29 + 72) += *(unsigned int *)(a2 + 184);
          goto LABEL_44;
        }
      }
      else
      {
        v31 = *(__int64 **)(v29 + 48);
        v32 = v29 + 40;
        if ( *v31 == v32 )
        {
          *(_QWORD *)a2 = v32;
          *(_QWORD *)(a2 + 8) = v31;
          *v31 = a2;
          *(_QWORD *)(v32 + 8) = a2;
LABEL_44:
          KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( (*(_BYTE *)(*(_QWORD *)v27 + 184LL) & 7) != 0 )
            KiLeaveGuardedRegionUnsafe(v4);
          else
            KeLeaveCriticalRegionThread(v4);
          MiRelockFaultState(v27, v66, v34, v35);
          return 0LL;
        }
      }
      __fastfail(3u);
    }
  }
  v37 = *(_QWORD *)(a2 + 248);
  v38 = *(_QWORD *)(a2 + 232);
  if ( (*(_QWORD *)(v37 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v37 + 8) > 0 )
    v37 = 0LL;
  MiWaitForInPageComplete(a1, a2, &v67);
  v39 = MiFinishHardFault(a1, v66, a2, (__int64 *)&v68);
  v40 = (int)v67;
  --*(_BYTE *)(v4 + 1310);
  LODWORD(v66) = v40;
  if ( v39 )
    return (unsigned int)v39;
  if ( !v37 )
    v37 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v68) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v69 = *(_DWORD *)(a1 + 8) & 2;
  if ( (unsigned int)MI_PFN_IS_PROTO(v37) )
  {
    v38 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v39 = MiCompleteProtoPteFault(a1, v68, (struct _LIST_ENTRY *)v41, 0, v12);
    if ( v39 >= 0 )
    {
      v43 = v70;
LABEL_57:
      if ( dword_140C4E828
        && (_DWORD)v66 != 2
        && (unsigned int)MiGetEffectivePagePriorityThread(v4, v42) >= dword_140C4E82C )
      {
        MiLogPageAccess(*v43, v38 | 1);
      }
      if ( !v39 )
        return 276;
    }
    return (unsigned int)v39;
  }
  v72 = v12 & 1;
  if ( (v12 & 1) != 0 && *(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
  {
    v44 = MI_READ_PTE_LOCK_FREE(v38) & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    if ( (unsigned int)MiPteInShadowRange(v38, v45) )
    {
      if ( (unsigned int)MiPteHasShadow(v47, v46, v48, v49) )
      {
        if ( !HIBYTE(word_140C4E008) && (v44 & 1) != 0 )
          v44 |= 0x8000000000000000uLL;
        *(_QWORD *)v38 = v44;
        MiWritePteShadow(v38, v44);
        goto LABEL_76;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v44 & 1) != 0 )
      {
        v44 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v38 = v44;
  }
LABEL_76:
  TransitionPteValid = MiMakeTransitionPteValid(v38);
  if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(v37 + 16) )
    TransitionPteValid |= 0x40uLL;
  if ( v69 )
  {
    if ( (unsigned int)MiOkToSetPteDirtyForNotValidFault(TransitionPteValid, *v71, v52, v53) )
    {
      if ( (TransitionPteValid & 0x800) != 0 )
      {
        TransitionPteValid |= 0x42uLL;
        if ( (*(_BYTE *)(v37 + 34) & 0x10) == 0 )
        {
          if ( (unsigned int)MiGetPagingFileOffset(v37 + 16) )
            MiLockPageAndSetDirty(v37, 1LL);
        }
      }
    }
  }
  v54 = (_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( !v72 )
    goto LABEL_98;
  if ( *v54 != 4 )
  {
    if ( *v54 == 5 )
    {
      v59 = (__int64)v54;
      v60 = 0;
      goto LABEL_99;
    }
LABEL_98:
    v60 = 0;
    v59 = 0LL;
LABEL_99:
    if ( v72 && *v54 == 3 )
      v60 = 1;
    v63 = TransitionPteValid;
    v43 = v70;
    if ( (unsigned int)MiAllocateWsle(*v70, v38, (_QWORD *)v37, 0, v63, v60, v59) )
      goto LABEL_57;
    MiLockAndDecrementShareCount(v37, 0LL, v61);
    return (unsigned int)-1073741801;
  }
  if ( !(unsigned int)MiPteInShadowRange(v38, v51) )
  {
LABEL_95:
    *(_QWORD *)v38 = TransitionPteValid;
    return 276LL;
  }
  if ( !(unsigned int)MiPteHasShadow(v56, v55, v57, v58) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (TransitionPteValid & 1) != 0 )
    {
      TransitionPteValid |= 0x8000000000000000uLL;
    }
    goto LABEL_95;
  }
  if ( !HIBYTE(word_140C4E008) && (TransitionPteValid & 1) != 0 )
    TransitionPteValid |= 0x8000000000000000uLL;
  *(_QWORD *)v38 = TransitionPteValid;
  MiWritePteShadow(v38, TransitionPteValid);
  return 276LL;
}
