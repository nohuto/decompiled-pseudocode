/*
 * XREFs of MiAddWorkingSetEntries @ 0x140212380
 * Callers:
 *     MiAllocateWsle @ 0x140211C80 (MiAllocateWsle.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14029C084 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiMakeSystemCacheRangeValid @ 0x14029F220 (MiMakeSystemCacheRangeValid.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022E810 (KxWaitForLockOwnerShip.c)
 *     MiIsDriverPage @ 0x14029CD50 (MiIsDriverPage.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiCountWslesInPageTable @ 0x1402DAFF0 (MiCountWslesInPageTable.c)
 *     KxWaitForLockChainValid @ 0x1402DCF80 (KxWaitForLockChainValid.c)
 *     MiGetStandbyRepurposed @ 0x14033A7B4 (MiGetStandbyRepurposed.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051630C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405163CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

unsigned __int64 __fastcall MiAddWorkingSetEntries(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  char v4; // al
  unsigned __int64 v7; // r14
  volatile signed __int64 *v9; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  _QWORD *v16; // r13
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r12
  char v19; // al
  unsigned __int64 v20; // rcx
  char v21; // r9
  int v22; // r15d
  unsigned __int64 v23; // rbx
  unsigned __int8 v24; // bl
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r8
  unsigned __int8 v28; // al
  unsigned __int64 result; // rax
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rbx
  _KPROCESS *Process; // rcx
  unsigned __int64 *v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r13
  __int64 *v40; // rbx
  __int64 *v41; // r12
  __int64 v42; // r8
  __int64 v43; // rax
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // r12
  unsigned __int64 v46; // rbx
  struct _KPRCB *v47; // rcx
  _DWORD *v48; // rdx
  unsigned __int8 v49; // cl
  int v50; // edx
  struct _LIST_ENTRY *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 **v54; // rcx
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rcx
  int StandbyRepurposed; // eax
  __int64 v59; // r11
  int v60; // r10d
  struct _LIST_ENTRY *Flink; // rax
  __int64 v62; // rax
  struct _LIST_ENTRY *v63; // rax
  __int64 v64; // rax
  struct _LIST_ENTRY *v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rdx
  int v68; // eax
  struct _LIST_ENTRY *v69; // rax
  __int64 v70; // rax
  struct _LIST_ENTRY *v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  unsigned __int64 v74; // [rsp+20h] [rbp-69h] BYREF
  volatile signed __int64 *v75; // [rsp+28h] [rbp-61h]
  __int64 v76; // [rsp+30h] [rbp-59h]
  unsigned __int64 v77; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v78; // [rsp+40h] [rbp-49h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-41h] BYREF
  __int64 v80; // [rsp+60h] [rbp-29h]
  unsigned __int64 v81; // [rsp+68h] [rbp-21h]
  __int128 v82; // [rsp+70h] [rbp-19h]
  __int64 v83; // [rsp+80h] [rbp-9h]
  _DWORD v84[8]; // [rsp+88h] [rbp-1h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+5Fh]

  v4 = *(_BYTE *)(a1 + 184) & 7;
  v76 = 0LL;
  v81 = a2;
  v7 = a2;
  if ( v4 == 2 )
    v9 = (volatile signed __int64 *)&unk_140C4F7C0;
  else
    v9 = (volatile signed __int64 *)(a1 + 256);
  v75 = v9;
  v74 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v56 = SchedulerAssist[6];
      SchedulerAssist[6] = v56 + 1;
      if ( v56 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v74, v9);
  }
  else if ( _InterlockedExchange64(v9, (__int64)&v74) )
  {
    KxWaitForLockOwnerShip(&v74);
  }
  v12 = 1LL;
  if ( (a4 & 1) != 0 )
  {
    v13 = a3 + *(_QWORD *)(a1 + 120);
    if ( v13 > *(_QWORD *)(a1 + 112) && (*(_BYTE *)(a1 + 187) & 8) == 0 )
    {
      v14 = *(_QWORD *)(a1 + 136);
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      if ( v14 > v15 )
      {
        v16 = *(_QWORD **)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(a1 + 174));
        v17 = v16[866];
        if ( (v14 & 0x3F) != 0 )
        {
          v18 = -1LL;
        }
        else
        {
          v18 = v16[888];
          if ( v18 < v17 / 0x14 )
          {
            v12 = 1LL;
            if ( v14 >= v17 / 0x14 )
            {
LABEL_87:
              *(_BYTE *)(a1 + 187) |= 8u;
              goto LABEL_15;
            }
          }
          else
          {
            v12 = 1LL;
          }
        }
        if ( v14 - v15 >= 3 * (v17 >> 2) )
        {
          v57 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(a1 + 174));
          v80 = v16[856];
          StandbyRepurposed = MiGetStandbyRepurposed(v57);
          if ( StandbyRepurposed == v60 )
          {
            v12 = 1LL;
          }
          else
          {
            if ( v59 )
              v18 = v16[888];
            v12 = 1LL;
            if ( v18 < 10LL * *(_QWORD *)(v80 + 2384) )
              goto LABEL_87;
          }
        }
      }
      if ( (*(_BYTE *)(a1 + 184) & 0x40) != 0 && v13 > *(_QWORD *)(a1 + 152) )
        goto LABEL_87;
    }
  }
LABEL_15:
  v19 = *(_BYTE *)(a1 + 184);
  *(_DWORD *)(a1 + 4) += a3;
  if ( (v19 & 7) == 2 )
    dword_140C4F800 += a3;
  __addgsdword(0x2E90u, a3);
  *(_QWORD *)(a1 + 136) += a3;
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
    *(_QWORD *)(a1 + 120) += a3;
  else
    v12 = 0LL;
  v20 = a3 + *(_QWORD *)(a1 + 120);
  if ( v20 > *(_QWORD *)(a1 + 160) )
    *(_QWORD *)(a1 + 160) = v20;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    qword_140C4F808 += a3;
    if ( (_DWORD)v12 == 1 )
      qword_140C4F810 += a3;
    if ( qword_140C4F810 > (unsigned __int64)qword_140C4F818 )
      qword_140C4F818 = qword_140C4F810;
  }
  if ( (a4 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 144) += a3;
    v82 = 0LL;
    v83 = 0LL;
    if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
      *(_QWORD *)(a1 + 128) += a3;
  }
  v21 = *(_BYTE *)(a1 + 184);
  if ( (v21 & 7u) >= 2 )
  {
    v42 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(a1 + 174));
    v43 = (v21 & 7u) - 2;
    v44 = *(_QWORD *)(a1 + 136) + *(_QWORD *)(v42 + 4352);
    if ( v44 > *(_QWORD *)(v42 + 8 * v43 + 4360) )
    {
      *(_QWORD *)(v42 + 8 * v43 + 4360) = v44;
      v21 = *(_BYTE *)(a1 + 184);
    }
    if ( (v21 & 7) == 4 )
    {
      if ( PsNtosImageBase
        && (v7 >= (unsigned __int64)PsNtosImageBase && v7 < PsNtosImageEnd
         || v7 < PsHalImageEnd && v7 >= (unsigned __int64)PsHalImageBase) )
      {
        LODWORD(xmmword_140C4CD48) = a3 + xmmword_140C4CD48;
      }
      else if ( (unsigned int)MiGetSystemRegionType(v7) == 12
             && MiIsDriverPage(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
      {
        DWORD1(xmmword_140C4CD48) += a3;
      }
    }
  }
  v22 = a4 & 4;
  if ( v22 && a3 )
  {
    do
    {
      if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v12 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v23 = *(_QWORD *)v12;
        if ( v12 >= 0xFFFFF6FB7DBED000uLL
          && v12 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v23 & 1) != 0
          && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v62 = *((_QWORD *)&Flink->Flink + ((v12 >> 3) & 0x1FF));
            v12 = v23 | 0x20;
            if ( (v62 & 0x20) == 0 )
              v12 = v23;
            HIBYTE(v23) = HIBYTE(v12);
            if ( (v62 & 0x42) != 0 )
              HIBYTE(v23) = HIBYTE(v12);
          }
        }
        v24 = HIBYTE(v23) & 0xF;
      }
      else
      {
        v45 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v46 = *(_QWORD *)v45;
        if ( (unsigned int)MiPteInShadowRange(v45, v12)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v46 & 1) != 0
          && ((v46 & 0x20) == 0 || (v46 & 0x42) == 0) )
        {
          v51 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v51 )
          {
            v12 = v46 | 0x20;
            v52 = *((_QWORD *)&v51->Flink + ((v45 >> 3) & 0x1FF));
            if ( (v52 & 0x20) == 0 )
              v12 = v46;
            v46 = v12;
            if ( (v52 & 0x42) != 0 )
              v46 = v12 | 0x42;
          }
        }
        v24 = (*(_BYTE *)(48 * ((v46 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) >> 1) & 7;
      }
      if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v25 = ((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        v26 = *(_QWORD *)v25;
        if ( v25 >= 0xFFFFF6FB7DBED000uLL
          && v25 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v26 & 1) != 0
          && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
        {
          v63 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v63 )
          {
            v64 = *((_QWORD *)&v63->Flink + ((v25 >> 3) & 0x1FF));
            v25 = v26 | 0x20;
            if ( (v64 & 0x20) == 0 )
              v25 = v26;
            v26 = v25;
            if ( (v64 & 0x42) != 0 )
              v26 = v25 | 0x42;
          }
        }
        v77 = v26;
        if ( (unsigned int)MiPteInShadowRange(&v77, v25)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v26 & 1) != 0
          && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
        {
          v65 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v65 )
          {
            v66 = *((_QWORD *)&v65->Flink + (((unsigned __int64)&v77 >> 3) & 0x1FF));
            v67 = v26 | 0x20;
            if ( (v66 & 0x20) == 0 )
              v67 = v26;
            v26 = v67;
            if ( (v66 & 0x42) != 0 )
              v26 = v67 | 0x42;
          }
        }
        v12 = 48 * ((v26 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v27 = *(_QWORD *)v12;
        v28 = (*(_QWORD *)v12 >> 14) & 7;
        if ( ((*(_QWORD *)v12 >> 4) & 0x3FF) != 0 )
        {
          if ( v24 == v28 )
          {
            *(_QWORD *)v12 = v27 ^ ((unsigned __int16)v27 ^ (unsigned __int16)(16 * (((*(_QWORD *)v12 >> 4) & 0x3FF) + 1))) & 0x3FF0;
          }
          else if ( v24 > v28 )
          {
            *(_QWORD *)v12 = v27 & 0xFFFFFFFFFFFE001FuLL | ((unsigned __int64)(v24 & 7) << 14) | 0x10;
          }
        }
      }
      ++*(_QWORD *)(a1 + 8LL * v24 + 40);
      if ( v24 == 7 )
      {
        v37 = *(unsigned __int16 *)(a1 + 174);
        v12 = *(_QWORD *)(a1 + 96);
        memset(&LockHandle, 0, sizeof(LockHandle));
        v38 = *(_QWORD *)(qword_140C4E648 + 8 * v37);
        v39 = *(_QWORD *)(v38 + 6848);
        if ( v12 >= *(_QWORD *)(v39 + 56) )
        {
          v40 = (__int64 *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 24) )
          {
            v41 = (__int64 *)(v38 + 6856);
            if ( *(__int64 **)(v38 + 6856) != v40 )
            {
              LockHandle.LockQueue.Lock = &SpinLock;
              LockHandle.LockQueue.Next = 0LL;
              v47 = KeGetCurrentPrcb();
              v48 = v47->SchedulerAssist;
              if ( v48 )
              {
                if ( v47->NestingLevel <= 1u )
                {
                  v68 = v48[6];
                  v48[6] = v68 + 1;
                  if ( v68 == -1 )
                    KiRemoveSystemWorkPriorityKick(v47);
                }
              }
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                KiAcquireQueuedSpinLockInstrumented(&LockHandle, &SpinLock);
              }
              else if ( _InterlockedExchange64((volatile __int64 *)&SpinLock, (__int64)&LockHandle) )
              {
                KxWaitForLockOwnerShip(&LockHandle);
              }
              if ( *(_BYTE *)(v39 + 53) || (v53 = *v40) == 0 )
              {
                *(_BYTE *)(v39 + 54) = 1;
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
              else
              {
                v54 = *(__int64 ***)(a1 + 32);
                if ( *(__int64 **)(v53 + 8) != v40
                  || *v54 != v40
                  || (*v54 = (__int64 *)v53, *(_QWORD *)(v53 + 8) = v54, v55 = *v41, *(__int64 **)(*v41 + 8) != v41) )
                {
                  __fastfail(3u);
                }
                *v40 = v55;
                *(_QWORD *)(a1 + 32) = v41;
                *(_QWORD *)(v55 + 8) = v40;
                *v41 = (__int64)v40;
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
            }
          }
        }
      }
      v7 += 4096LL;
      --a3;
    }
    while ( a3 );
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = KiReleaseQueuedSpinLockInstrumented(&v74, retaddr);
    goto LABEL_42;
  }
  _m_prefetchw(&v74);
  result = v74;
  if ( v74 )
    goto LABEL_113;
  result = _InterlockedCompareExchange64(v75, 0LL, (signed __int64)&v74);
  if ( (unsigned __int64 *)result != &v74 )
  {
    result = KxWaitForLockChainValid(&v74);
LABEL_113:
    v74 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
LABEL_42:
  v30 = KeGetCurrentPrcb();
  v31 = v30->SchedulerAssist;
  if ( v31 )
  {
    if ( v30->NestingLevel <= 1u )
    {
      result = (unsigned int)(v31[6] - 1);
      v31[6] = result;
      if ( !(_DWORD)result )
        result = KiRemoveSystemWorkPriorityKick(v30);
    }
  }
  if ( v22 )
  {
    v32 = v81;
    if ( v81 < 0xFFFFF68000000000uLL || (result = 0xFFFFF6FFFFFFFFFFuLL, v81 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      v33 = ((v81 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v34 = *(_QWORD *)v33;
      if ( v33 >= 0xFFFFF6FB7DBED000uLL
        && v33 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v34 & 1) != 0
        && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
      {
        v69 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v69 )
        {
          v70 = *((_QWORD *)&v69->Flink + ((v33 >> 3) & 0x1FF));
          v33 = v34 | 0x20;
          if ( (v70 & 0x20) == 0 )
            v33 = v34;
          v34 = v33;
          if ( (v70 & 0x42) != 0 )
            v34 = v33 | 0x42;
        }
      }
      v78 = v34;
      if ( (unsigned int)MiPteInShadowRange(&v78, v33) )
      {
        if ( (MiFlags & 0xC00000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 && (v34 & 1) != 0 && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v71 = Process[1].ProcessListEntry.Flink;
            if ( v71 )
            {
              v72 = *((_QWORD *)&v71->Flink + (((unsigned __int64)&v78 >> 3) & 0x1FF));
              v73 = v34 | 0x20;
              Process = (_KPROCESS *)(unsigned __int8)v72;
              LOBYTE(Process) = v72 & 0x20;
              if ( (v72 & 0x20) == 0 )
                v73 = v34;
              v34 = v73;
              if ( (v72 & 0x42) != 0 )
                v34 = v73 | 0x42;
            }
          }
        }
      }
      v36 = (unsigned __int64 *)(48 * ((v34 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
      result = (unsigned __int64)*(unsigned int *)v36 >> 4;
      if ( (result & 0x3FF) == 0 )
      {
        MiCountWslesInPageTable(Process, v32, v84);
        v49 = 8;
        while ( 1 )
        {
          result = --v49;
          v50 = v84[v49];
          if ( v50 )
            break;
          if ( !v49 )
            return result;
        }
        result = *v36 & 0xFFFFFFFFFFFE000FuLL;
        *v36 = result | (16 * (v50 & 0x3FF | ((unsigned __int64)(v49 & 7) << 10)));
      }
    }
  }
  return result;
}
