/*
 * XREFs of MiUserFault @ 0x140268260
 * Callers:
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 * Callees:
 *     MiCheckVirtualAddress @ 0x140225600 (MiCheckVirtualAddress.c)
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiZeroFault @ 0x140266000 (MiZeroFault.c)
 *     MiResolvePageTablePage @ 0x1402689F0 (MiResolvePageTablePage.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiReleaseFaultState @ 0x1402A2FD4 (MiReleaseFaultState.c)
 *     MiValidFault @ 0x1402C90E0 (MiValidFault.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402CFF20 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiAllowGuardFault @ 0x1402DA480 (MiAllowGuardFault.c)
 *     MiLockTransitionLeafPageEx @ 0x1402DD4C8 (MiLockTransitionLeafPageEx.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiCheckFatalAccessViolation @ 0x1402FCEDC (MiCheckFatalAccessViolation.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14030AD60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiUnlockVadTree @ 0x140330EC8 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1403334B4 (MiLockVadTree.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140462F92 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140608D0C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140615D8C (MiIsVadEligibleForCommitRelease.c)
 *     MiWaitForRotateToComplete @ 0x1406317E4 (MiWaitForRotateToComplete.c)
 *     MiCheckHoldFaultForHotPatch @ 0x14063F8B0 (MiCheckHoldFaultForHotPatch.c)
 *     MiDelayFaultingThread @ 0x140643864 (MiDelayFaultingThread.c)
 *     MiCheckForUserStackOverflow @ 0x14076B848 (MiCheckForUserStackOverflow.c)
 */

__int64 __fastcall MiUserFault(_QWORD *a1)
{
  __int64 **v1; // r12
  __int64 v3; // r8
  _KPROCESS *Process; // rbp
  __int64 v5; // r9
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // r10
  unsigned __int16 *v8; // r14
  unsigned __int8 v9; // al
  volatile __int32 *v10; // rbx
  unsigned __int8 v11; // di
  __int64 CurrentIrql; // rdx
  _KPROCESS *v13; // rcx
  unsigned __int64 v14; // rcx
  _KPROCESS *v15; // rbx
  unsigned __int64 v16; // rcx
  int v17; // eax
  unsigned int valid; // ebx
  ULONG_PTR v19; // r14
  unsigned __int64 v20; // rax
  int v21; // edx
  __int64 v22; // r8
  unsigned __int64 v23; // rbx
  char v24; // di
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  char v29; // bl
  unsigned int v30; // r13d
  _QWORD *v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // rbx
  unsigned __int64 v38; // rcx
  __int64 v39; // rdi
  volatile signed __int32 *v40; // rcx
  __int64 v41; // rdi
  unsigned __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 **v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdx
  bool v49; // sf
  bool v50; // of
  _DWORD *SchedulerAssist; // r10
  _DWORD *v52; // r9
  __int64 **Address; // rax
  __int64 v54; // rdx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v56; // rcx
  __int64 v57; // rcx
  struct _LIST_ENTRY *v58; // r9
  __int64 v59; // rax
  __int64 v60; // rbp
  __int64 v61; // rax
  __int64 v62; // rdi
  unsigned __int64 v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // r8
  int v66; // [rsp+20h] [rbp-68h] BYREF
  __int64 v67; // [rsp+28h] [rbp-60h] BYREF
  __int64 v68[3]; // [rsp+30h] [rbp-58h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v70; // [rsp+90h] [rbp+8h] BYREF
  signed __int32 v71; // [rsp+98h] [rbp+10h]
  int v72; // [rsp+A0h] [rbp+18h] BYREF
  signed __int32 v73; // [rsp+A8h] [rbp+20h]

  v1 = 0LL;
  v72 = 0;
  v67 = 0LL;
  v3 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  a1[7] = (char *)Process + 1664;
  if ( *(_DWORD *)&Process[1].Spare2[7] <= 0x10u
    || (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
    || (v5 = *(_QWORD *)(qword_140C67048 + 8LL * Process[1].IdealProcessor[25]), *(_DWORD *)(v5 + 1192))
    && *(_KPROCESS **)(v5 + 1344) == Process )
  {
    if ( !dword_140C6935C )
      goto LABEL_11;
    LODWORD(v3) = 3;
    goto LABEL_112;
  }
  v6 = *(_QWORD *)(v5 + 17600);
  if ( (unsigned __int16)KeNumberNodes <= 1u
    || (v31 = (_QWORD *)(*(_QWORD *)(v5 + 16) + 25408LL * KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]),
        v7 = 16LL * (v31[268] + v31[269])
           + ((v31[134] + v31[135]) << 9)
           + ((*v31 + v31[1]) << 18)
           + v31[2844]
           + v31[2845],
        v7 < 0x420)
    && v6 >= v7 >> 4
    || !v7 )
  {
    v7 = *(_QWORD *)(v5 + 17216);
  }
  if ( v7 >= 0x420 || v6 < 0x4000 && v6 < v7 >> 4 )
  {
    if ( dword_140C6935C )
      v3 = 3LL;
  }
  else
  {
    v50 = __OFSUB__(Process->BasePriority, 9);
    v49 = (char)(Process->BasePriority - 9) < 0;
    *(_DWORD *)&Process[1].Spare2[7] = 0;
    LOBYTE(v3) = v49 == v50;
    v3 = (unsigned int)(v3 + 1);
  }
  if ( (_DWORD)v3 )
LABEL_112:
    MiDelayFaultingThread((unsigned int)v3);
LABEL_11:
  v8 = (unsigned __int16 *)&unk_140C69E00;
  v9 = Process[1].IdealProcessor[30] & 7;
  if ( v9 > 4u )
  {
    if ( v9 != 5 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( (_BYTE)CurrentIrql == 2 )
          v3 = 4LL;
        else
          v3 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v3;
      }
      goto LABEL_20;
    }
    goto LABEL_13;
  }
  if ( v9 != 2 )
  {
LABEL_13:
    v10 = (volatile __int32 *)&Process[1].IdealNode[2];
    goto LABEL_14;
  }
  v10 = (volatile __int32 *)&unk_140C69E00;
LABEL_14:
  v11 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v11 <= 0xFu )
  {
    v52 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v11 == 2 )
      v3 = 4LL;
    else
      v3 = (-1LL << (v11 + 1)) & 4;
    v52[5] |= v3;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, v11);
  }
  else
  {
    _m_prefetchw((const void *)v10);
    v71 = *v10 & 0x7FFFFFFF;
    v73 = v71 + 1;
    v73 = _InterlockedCompareExchange(v10, v71 + 1, v71);
    if ( v73 != v71 )
    {
      while ( v73 >= 0 )
      {
        v71 = v73;
        v73 = _InterlockedCompareExchange(v10, v73 + 1, v73);
        if ( v73 == v71 )
          goto LABEL_17;
      }
      ExpWaitForSpinLockSharedAndAcquire(v10, v11);
    }
  }
LABEL_17:
  if ( *((_DWORD *)v10 + 1) )
    _InterlockedExchange(v10 + 1, 0);
  CurrentIrql = v11;
LABEL_20:
  *((_BYTE *)a1 + 68) = CurrentIrql;
  v13 = KeGetCurrentThread()->ApcState.Process;
  if ( (v13[1].IdealProcessor[30] & 7) != 2 )
    v8 = &v13[1].IdealNode[2];
  if ( (HIBYTE(v13[1].IdealProcessor[31]) & 0x60) == 0x60
    && *((_QWORD *)v8 + 4)
    && (unsigned __int64)a1 < 0xFFFF800000000000uLL )
  {
    MiLockVadTree(1LL);
    Address = MiLocateAddress((unsigned __int64)a1);
    if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
    {
      LOBYTE(v54) = 17;
      MiUnlockVadTree(1LL, v54);
      valid = -1073741819;
      goto LABEL_62;
    }
    LOBYTE(v54) = 17;
    MiUnlockVadTree(1LL, v54);
  }
  v14 = *a1;
  if ( *a1 > 0x7FFFFFFEFFFFuLL && v14 < 0xFFFF800000000000uLL )
  {
    valid = -1073741819;
    goto LABEL_62;
  }
  v15 = KeGetCurrentThread()->ApcState.Process;
  if ( v15[1].Affinity.StaticBitmap[9] && (unsigned int)MiWaitForRotateToComplete(v14, a1 + 7)
    || (v16 = v15[2].ActiveProcessors.StaticBitmap[2]) != 0 && (unsigned int)MiCheckHoldFaultForHotPatch(v16, a1)
    || (v17 = MiResolvePageTablePage(a1), valid = v17, v17 == -1073740748) )
  {
    valid = 0;
    goto LABEL_62;
  }
  if ( v17 < 0 )
  {
LABEL_62:
    v34 = a1[7];
    if ( a1[9] )
    {
      if ( *((_WORD *)a1 + 33) )
        MiEmptyDeferredWorkingSetEntries(a1 + 7, CurrentIrql, v3);
      MiUnlockPageTableInternal(v34, a1[9]);
      *((_BYTE *)a1 + 69) |= 2u;
      a1[9] = 0LL;
    }
    v35 = *((unsigned __int8 *)a1 + 68);
    if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
      MiUnlockWorkingSetExclusive(v34, v35);
    else
      MiUnlockWorkingSetShared(v34, v35);
    return valid;
  }
  v19 = a1[3];
  v20 = *(_QWORD *)v19;
  v3 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v19 >= 0xFFFFF6FB7DBED000uLL
    && v19 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
  {
    if ( (v20 & 1) == 0 )
      goto LABEL_30;
    if ( (v20 & 0x20) == 0 || (v20 & 0x42) == 0 )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v56 = *((_QWORD *)&Flink->Flink + ((v19 >> 3) & 0x1FF));
        if ( (v56 & 0x20) != 0 )
          v20 |= 0x20uLL;
        if ( (v56 & 0x42) != 0 )
          v20 |= 0x42uLL;
      }
      v3 = 0xFFFFF6FB7DBED7F8uLL;
    }
  }
  if ( (v20 & 1) != 0 )
  {
    valid = MiValidFault(a1, v20, 0xFFFFF6FB7DBED7F8uLL);
    goto LABEL_62;
  }
LABEL_30:
  CurrentIrql = a1[1];
  if ( (CurrentIrql & 2) != 0 && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0 && *a1 < 0xFFFF800000000000uLL )
  {
    CurrentIrql &= ~2uLL;
    a1[1] = CurrentIrql;
  }
  if ( v20 )
  {
    v72 = (v20 >> 5) & 0x1F;
    if ( (v20 & 0x400) != 0 )
    {
      v36 = *(_QWORD *)v19;
      if ( v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
      {
        CurrentIrql = (__int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(CurrentIrql + 912) != 1 && (v36 & 1) != 0 && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
        {
          CurrentIrql = (__int64)KeGetCurrentThread()->ApcState.Process;
          v3 = *(_QWORD *)(CurrentIrql + 1928);
          if ( v3 )
          {
            v57 = *(_QWORD *)(v3 + 8 * ((v19 >> 3) & 0x1FF));
            if ( (v57 & 0x20) != 0 )
              v36 |= 0x20uLL;
            if ( (v57 & 0x42) != 0 )
              v36 |= 0x42uLL;
          }
        }
      }
      v37 = (v36 >> 5) & 0x1F;
      if ( (v36 & 0x400) == 0 )
        goto LABEL_82;
      v38 = v36;
      if ( qword_140C657C0 && (v36 & 0x10) == 0 )
        v38 = v36 & ~qword_140C657C0;
      CurrentIrql = 0xFFFFFFFFLL;
      if ( HIDWORD(v38) == 0xFFFFFFFF )
      {
        v68[0] = 0LL;
        v66 = 0;
        v39 = MiCheckVirtualAddress((__int64)(v19 << 25) >> 16, &v66, v68);
        if ( v68[0] )
        {
          CurrentIrql = (__int64)KeGetCurrentThread()->ApcState.Process;
          v40 = (volatile signed __int32 *)(*(_QWORD *)(CurrentIrql + 1680) + 284LL);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v40, retaddr);
          }
          else
          {
            _InterlockedAnd(v40, 0xBFFFFFFF);
            _InterlockedDecrement(v40);
          }
        }
      }
      else
      {
LABEL_82:
        v41 = v36;
        if ( qword_140C657C0 && (v36 & 0x10) == 0 )
          v41 = v36 & ~qword_140C657C0;
        v39 = v41 >> 16;
        LODWORD(v37) = 256;
        if ( (v36 & 8) != 0 )
          LODWORD(v37) = 1;
      }
      v72 = v37;
      v67 = v39;
      if ( !v39 )
      {
        valid = -1073741819;
        goto LABEL_62;
      }
    }
LABEL_34:
    if ( v72 == 256 )
    {
LABEL_44:
      a1[12] = v67;
      return 3221225494LL;
    }
    v21 = a1[1] & 2;
    v22 = a1[2];
    if ( (a1[10] & 0x20) == 0 || v19 <= 0xFFFFF6BFFFFFFF78uLL && v19 >= 0xFFFFF68000000000uLL )
    {
      v23 = *(_QWORD *)v19;
      if ( v19 >= 0xFFFFF6FB7DBED000uLL
        && v19 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
      {
        if ( (v23 & 1) == 0 )
          goto LABEL_40;
        if ( (v23 & 0x20) == 0 || (v23 & 0x42) == 0 )
        {
          v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v58 )
          {
            v59 = *((_QWORD *)&v58->Flink + ((v19 >> 3) & 0x1FF));
            if ( (v59 & 0x20) != 0 )
              v23 |= 0x20uLL;
            if ( (v59 & 0x42) != 0 )
              v23 |= 0x42uLL;
          }
        }
      }
      if ( (v23 & 1) == 0 )
      {
LABEL_40:
        v24 = v72;
        if ( (a1[1] & 2) != 0 )
          v21 = 1;
        if ( *((char *)MiReadWrite + (v72 & 7)) - v21 >= 10 )
        {
          if ( (v72 & 0xFFFFFFF8) != 0x10 || (v22 & 1) != 0 && *(_BYTE *)(v22 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
            goto LABEL_44;
          if ( (unsigned int)MiAllowGuardFault(a1[2]) )
          {
            if ( (v23 & 0x800) == 0 || (v23 & 0x400) != 0 )
            {
              v42 = v23 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v24 & 0xF));
              if ( (unsigned int)MiPteInShadowRange(v19) )
              {
                if ( (unsigned int)MiPteHasShadow(v44, v43, v45) )
                {
                  if ( !HIBYTE(word_140C6697C) && (v42 & 1) != 0 )
                    v42 |= 0x8000000000000000uLL;
                  *(_QWORD *)v19 = v42;
                  MiWritePteShadow(v19, v42);
                  goto LABEL_93;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (v42 & 1) != 0 )
                {
                  v42 |= 0x8000000000000000uLL;
                }
              }
              *(_QWORD *)v19 = v42;
LABEL_93:
              LOBYTE(v43) = 17;
              MiReleaseFaultState(a1 + 7, v43, 0LL);
              return MiCheckForUserStackOverflow(*a1, 0LL);
            }
            v60 = MiLockTransitionLeafPageEx(v19);
            v61 = MI_READ_PTE_LOCK_FREE(v19);
            v62 = v24 & 0xF;
            if ( v60 )
              *(_QWORD *)(v60 + 16) = (32LL * (unsigned int)v62) | *(_QWORD *)(v60 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
            v63 = (32 * v62) | v61 & 0xFFFFFFFFFFFFFC1FuLL;
            if ( (unsigned int)MiPteInShadowRange(v19) )
            {
              if ( (unsigned int)MiPteHasShadow(v64, v43, v65) )
              {
                if ( !HIBYTE(word_140C6697C) && (v63 & 1) != 0 )
                  v63 |= 0x8000000000000000uLL;
                *(_QWORD *)v19 = v63;
                MiWritePteShadow(v19, v63);
                goto LABEL_192;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (v63 & 1) != 0 )
              {
                v63 |= 0x8000000000000000uLL;
              }
            }
            *(_QWORD *)v19 = v63;
LABEL_192:
            if ( v60 )
              _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_93;
          }
        }
        goto LABEL_102;
      }
      if ( (a1[1] & 2) == 0 || (v23 & 0xA00) != 0 )
        goto LABEL_44;
    }
LABEL_102:
    if ( *a1 < 0xFFFF800000000000uLL )
    {
      MiLockVadTree(1LL);
      v46 = MiLocateAddress(*a1);
      LOBYTE(v47) = 17;
      v1 = v46;
      MiUnlockVadTree(1LL, v47);
    }
    MiCheckFatalAccessViolation(*a1);
    a1[11] = v1;
    LOBYTE(v48) = 17;
    MiReleaseFaultState(a1 + 7, v48, 0LL);
    return 3221225477LL;
  }
  v70 = 0;
  v26 = MiZeroFault((__int64)a1, &v70, &v72, &v67);
  v29 = v70;
  v30 = v26;
  if ( !v70 )
    goto LABEL_34;
  v32 = a1[7];
  if ( a1[9] )
  {
    if ( *((_WORD *)a1 + 33) )
      MiEmptyDeferredWorkingSetEntries(a1 + 7, v27, v28);
    MiUnlockPageTableInternal(v32, a1[9]);
    *((_BYTE *)a1 + 69) |= 2u;
    a1[9] = 0LL;
  }
  v33 = *((unsigned __int8 *)a1 + 68);
  if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v32, v33);
  else
    MiUnlockWorkingSetShared(v32, v33);
  if ( v29 == 2 )
    return (unsigned int)MiCheckForUserStackOverflow(*a1, 1LL);
  return v30;
}
