/*
 * XREFs of MiMakeSystemCacheRangeValid @ 0x14029F220
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x140211C80 (MiAllocateWsle.c)
 *     MiAddWorkingSetEntries @ 0x140212380 (MiAddWorkingSetEntries.c)
 *     MiDecrementShareCount @ 0x14023FB30 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     PfSnLogPageFaultCommon @ 0x14029B6DC (PfSnLogPageFaultCommon.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14029C084 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiReferenceControlAreaFile @ 0x14029D540 (MiReferenceControlAreaFile.c)
 *     PfSnReferenceProcessTrace @ 0x14029E950 (PfSnReferenceProcessTrace.c)
 *     MiStartingOffset @ 0x14029EAA0 (MiStartingOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     ObDereferenceObjectDeferDelete @ 0x1402C3BD0 (ObDereferenceObjectDeferDelete.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     PfSnCheckLoggingForThread @ 0x1402F3958 (PfSnCheckLoggingForThread.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402F3E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5BA4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMakeSystemCacheRangeValid(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r12
  __int64 v8; // rsi
  _DWORD *v9; // r9
  LONG *v10; // rbx
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v14; // rcx
  int v15; // eax
  signed __int32 v16; // ett
  _DWORD *v17; // rcx
  int v18; // eax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v22; // rax
  struct _LIST_ENTRY *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  unsigned int v28; // r15d
  unsigned __int64 v29; // rcx
  unsigned __int8 v30; // si
  __int64 v31; // r14
  __int64 v32; // rbx
  unsigned __int64 v33; // r8
  __int64 v34; // rcx
  unsigned __int64 v35; // r12
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rbx
  struct _LIST_ENTRY *v39; // r8
  __int64 v40; // rax
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // r14
  struct _LIST_ENTRY *v43; // rdx
  __int64 v44; // rax
  _QWORD *v45; // r14
  unsigned int v46; // eax
  char v47; // al
  unsigned __int64 v48; // rdx
  int v49; // ecx
  char v50; // r9
  __int64 result; // rax
  unsigned __int64 v52; // r14
  __int64 v53; // r13
  unsigned __int64 v54; // r15
  __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // r8
  _DWORD *v58; // r9
  unsigned __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r10
  _DWORD *v65; // r9
  int v66; // eax
  bool v67; // zf
  __int64 v68; // rsi
  __int64 v69; // rsi
  __int64 v70; // rbx
  signed __int64 v71; // r14
  unsigned __int64 v72; // r12
  struct _KTHREAD *CurrentThread; // r15
  struct _EX_RUNDOWN_REF *v74; // rax
  struct _EX_RUNDOWN_REF *v75; // rsi
  char v76; // r8
  signed __int64 v77; // rax
  signed __int64 v78; // rtt
  __int64 v79; // [rsp+40h] [rbp-C0h]
  __int64 v80; // [rsp+40h] [rbp-C0h]
  __int128 v81; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v82; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v83; // [rsp+60h] [rbp-A0h]
  unsigned int v84; // [rsp+68h] [rbp-98h]
  __int64 v85; // [rsp+70h] [rbp-90h] BYREF
  int v86; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v87; // [rsp+80h] [rbp-80h] BYREF
  __int64 v88; // [rsp+88h] [rbp-78h]
  __int64 v89; // [rsp+90h] [rbp-70h]
  __int64 v90; // [rsp+98h] [rbp-68h]
  __int64 v91; // [rsp+A0h] [rbp-60h]
  _OWORD v92[8]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v93[16]; // [rsp+130h] [rbp+30h]

  v90 = a4;
  v84 = a3;
  v85 = 0LL;
  v93[0] = 0LL;
  v82 = 0LL;
  v81 = 0LL;
  v5 = a4;
  v83 = a1;
  memset(v92, 0, sizeof(v92));
  v91 = 0LL;
  v6 = (__int64)(a1 << 25) >> 16;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (byte_140C52A78 & 7u) < 6 )
  {
    v10 = &dword_140C4F780;
    if ( (byte_140C52A78 & 7) != 2 )
      v10 = (LONG *)&unk_140C52A80;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = v14[6];
          v14[6] = v15 + 1;
          if ( v15 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v10);
      v16 = *v10 & 0x7FFFFFFF;
      if ( v16 != _InterlockedCompareExchange(v10, v16 + 1, v16) )
      {
        v17 = CurrentPrcb->SchedulerAssist;
        if ( v17 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v18 = v17[6] - 1;
            v17[6] = v18;
            if ( !v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v10, CurrentIrql);
      }
    }
    if ( v10[1] )
      _InterlockedExchange(v10 + 1, 0);
    LOBYTE(v8) = CurrentIrql;
    v89 = CurrentIrql;
  }
  else
  {
    v8 = KeGetCurrentIrql();
    v89 = v8;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v8 <= 0xFu )
    {
      v9 = KeGetCurrentPrcb()->SchedulerAssist;
      v9[5] |= (-1 << (v8 + 1)) & 4;
    }
  }
  MiLockPageTableInternal((__int64)&unk_140C529C0, v7, 0LL);
  v19 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v20 = *(_QWORD *)v19;
  if ( v19 >= 0xFFFFF6FB7DBED000uLL
    && v19 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v20 & 1) != 0
    && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v22 = *((_QWORD *)&Flink->Flink + ((v19 >> 3) & 0x1FF));
      v19 = v20 | 0x20;
      if ( (v22 & 0x20) == 0 )
        v19 = v20;
      v20 = v19;
      if ( (v22 & 0x42) != 0 )
        v20 = v19 | 0x42;
    }
  }
  v87 = v20;
  if ( (unsigned int)MiPteInShadowRange(&v87, v19)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v20 & 1) != 0
    && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
  {
    v23 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v23 )
    {
      v24 = *((_QWORD *)&v23->Flink + (((unsigned __int64)&v87 >> 3) & 0x1FF));
      v25 = v20 | 0x20;
      if ( (v24 & 0x20) == 0 )
        v25 = v20;
      v20 = v25;
      if ( (v24 & 0x42) != 0 )
        v20 = v25 | 0x42;
    }
  }
  v26 = *(_QWORD *)(48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
  if ( v26 )
    v26 += 40 * ((v6 >> 18) & 7);
  v27 = *(_QWORD *)(v26 + 24);
  v28 = v84;
  BYTE12(v81) = v8;
  v29 = v27 & 0xFFFFFFFFFFFFFFFEuLL;
  v82 = v7;
  if ( (v27 & 1) == 0 )
    v29 = v27;
  v30 = BYTE13(v81) | 4;
  BYTE13(v81) |= 4u;
  v31 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(*(_QWORD *)v29 + 60LL) & 0x3FF)) + 7232LL;
  v88 = v31;
  v32 = v31;
  *(_QWORD *)&v81 = v31;
  if ( v84 )
  {
    v33 = v83 - a2;
    v34 = v84;
    v35 = 0LL;
    v83 -= a2;
    v79 = v84;
    v36 = v31;
    while ( 1 )
    {
      *(_QWORD *)((char *)v92 + v35) = 0LL;
      v37 = *(_QWORD *)a2;
      v38 = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (MiFlags & 0xC00000) != 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v38 & 1) != 0
            && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
          {
            v39 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v39 )
            {
              v38 |= 0x20uLL;
              v40 = *((_QWORD *)&v39->Flink + ((a2 >> 3) & 0x1FF));
              if ( (v40 & 0x20) == 0 )
                v38 = *(_QWORD *)a2;
              if ( (v40 & 0x42) != 0 )
                v38 |= 0x42uLL;
            }
          }
          v30 = BYTE13(v81);
        }
        v34 = v79;
        v33 = v83;
      }
      v85 = v38;
      if ( !v38 )
        goto LABEL_108;
      if ( (v38 & 1) != 0 )
        break;
      *(_QWORD *)((char *)v92 + v35) = 1LL;
      *(_QWORD *)a2 = v37 | 1;
LABEL_108:
      v33 = v83;
      v35 += 8LL;
      a2 += 8LL;
      v79 = --v34;
      if ( !v34 )
      {
        v7 = v82;
        v32 = v81;
        v5 = v90;
        v31 = v88;
        v28 = v84;
        goto LABEL_110;
      }
    }
    v41 = v33 + a2;
    if ( (*(_BYTE *)(v33 + a2) & 1) != 0 )
      goto LABEL_106;
    v42 = v38;
    if ( (unsigned int)MiPteInShadowRange(&v85, v37) && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
      {
        v43 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v43 )
        {
          v42 = v38 | 0x20;
          v44 = *((_QWORD *)&v43->Flink + (((unsigned __int64)&v85 >> 3) & 0x1FF));
          if ( (v44 & 0x20) == 0 )
            v42 = v38;
          if ( (v44 & 0x42) != 0 )
            v42 |= 0x42uLL;
        }
      }
      v30 = BYTE13(v81);
    }
    v45 = (_QWORD *)(48 * ((v42 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v93[v35 / 8] = v45[2];
    if ( (v30 & 4) == 0 || (v30 & 1) != 0 || (v30 & 2) != 0 )
    {
      v47 = 0;
      goto LABEL_102;
    }
    v46 = v41;
    if ( !WORD5(v81) )
    {
LABEL_97:
      WORD5(v81) = 1;
      WORD4(v81) = (v46 >> 3) & 0x1FF;
      if ( (unsigned int)MI_PFN_IS_PROTO(v45) )
        v30 &= ~0x10u;
      else
        v30 |= 0x10u;
      v47 = 4;
      BYTE13(v81) = v30;
LABEL_102:
      if ( (unsigned int)MiAllocateWsle(v36, v41, v45, 0, v38, v47, 0LL) )
      {
        if ( (v93[v35 / 8] & 0x400LL) != 0 && PfSnNumActiveTraces )
          *(_QWORD *)((char *)v92 + v35) = v45[1] | 0x8000000000000000uLL;
        goto LABEL_107;
      }
LABEL_106:
      *(_QWORD *)((char *)v92 + v35) = 1LL;
LABEL_107:
      v34 = v79;
      goto LABEL_108;
    }
    if ( WORD5(v81) + WORD4(v81) == (((unsigned int)v41 >> 3) & 0x1FF) )
    {
      if ( (unsigned int)MI_PFN_IS_PROTO(v45) )
      {
        if ( (v30 & 0x10) == 0 )
          goto LABEL_95;
      }
      else if ( (v30 & 0x10) != 0 )
      {
        goto LABEL_95;
      }
    }
    MiEmptyDeferredWorkingSetEntries((__int64)&v81);
    v30 = BYTE13(v81);
LABEL_95:
    v46 = v41;
    if ( WORD5(v81) )
    {
      ++WORD5(v81);
      v47 = 4;
      goto LABEL_102;
    }
    goto LABEL_97;
  }
LABEL_110:
  if ( v7 )
  {
    if ( WORD5(v81) )
    {
      v48 = ((unsigned __int64)WORD4(v81) << 12) + ((((__int64)((v7 << 25) - v91) >> 16 << 25) - v91) >> 16);
      v49 = 2 * ((v30 >> 4) & 1);
      if ( v48 < 0xFFFFF68000000000uLL || v48 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v50 = v49 | 5;
      }
      else
      {
        v50 = v49 | 4;
        if ( (*(_BYTE *)(v32 + 184) & 7) != 0 )
          v50 = 2 * ((v30 & 0x10) != 0);
      }
      MiAddWorkingSetEntries(v32, v48, WORD5(v81), v50);
      WORD5(v81) = 0;
    }
    MiUnlockPageTableInternal(v32, v7);
    BYTE13(v81) = v30 | 2;
    v82 = 0LL;
  }
  MiUnlockWorkingSetShared(v31, v89);
  v80 = v28;
  result = -(__int64)v28;
  v52 = a2 - 8LL * v28;
  v83 = v52;
  if ( v28 )
  {
    result = v28;
    v53 = 0LL;
    while ( 1 )
    {
      v54 = *(_QWORD *)((char *)v92 + v53 * 8);
      if ( v54 == 1 )
        break;
      if ( v54 )
      {
        v68 = v93[v53];
        if ( qword_140C4DF40 && (v68 & 0x10) == 0 )
          v68 &= ~qword_140C4DF40;
        v69 = v68 >> 16;
        v70 = *(_QWORD *)v69;
        v71 = MiReferenceControlAreaFile(*(_QWORD *)v69);
        v72 = MiStartingOffset((__int64 *)v69, v54, 0xFFFFFFFF);
        if ( !*(_QWORD *)(v71 + 32) )
        {
          CurrentThread = KeGetCurrentThread();
          v74 = PfSnReferenceProcessTrace((__int64)CurrentThread->ApcState.Process);
          v75 = v74;
          if ( v74 )
          {
            if ( (unsigned int)PfSnCheckLoggingForThread(CurrentThread, v74, 4LL) )
              PfSnLogPageFaultCommon((__int64)v75, v71, *(_QWORD *)(v71 + 24), v72, v76);
            ExReleaseRundownProtection(v75 + 45);
          }
        }
        _m_prefetchw((const void *)(v70 + 64));
        v77 = *(_QWORD *)(v70 + 64);
        if ( (v71 ^ (unsigned __int64)v77) >= 0xF )
        {
LABEL_146:
          ObDereferenceObjectDeferDelete((PVOID)v71);
        }
        else
        {
          while ( 1 )
          {
            v78 = v77;
            v77 = _InterlockedCompareExchange64((volatile signed __int64 *)(v70 + 64), v77 + 1, v77);
            if ( v78 == v77 )
              break;
            if ( (v71 ^ (unsigned __int64)v77) >= 0xF )
              goto LABEL_146;
          }
        }
        v52 = v83;
        goto LABEL_148;
      }
LABEL_149:
      v52 += 8LL;
      ++v53;
      --result;
      v83 = v52;
      v80 = result;
      if ( !result )
        return result;
    }
    v85 = MI_READ_PTE_LOCK_FREE(v52);
    v55 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v85) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v59 = (unsigned __int8)MiLockPageInline(v55, v56, v57, v58);
    MiDecrementShareCount(v55);
    _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v86 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v86, v60, v61, v62);
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
    MiDecrementShareCount(v5);
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v63 = KeGetCurrentIrql();
        if ( v63 <= 0xFu && (unsigned __int8)v59 <= 0xFu && v63 >= 2u )
        {
          v64 = KeGetCurrentPrcb();
          v65 = v64->SchedulerAssist;
          v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v59 + 1));
          v67 = (v66 & v65[5]) == 0;
          v65[5] &= v66;
          if ( v67 )
            KiRemoveSystemWorkPriorityKick(v64);
        }
      }
    }
    __writecr8(v59);
LABEL_148:
    result = v80;
    goto LABEL_149;
  }
  return result;
}
