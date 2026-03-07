__int64 __fastcall CcScheduleReadAheadNuma(
        _QWORD *Object,
        _QWORD *a2,
        unsigned int a3,
        struct _KTHREAD *CurrentThread,
        __int64 a5)
{
  __int64 CurrentNumaNode; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v9; // r14
  __int64 v11; // rsi
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 result; // rax
  int v15; // r10d
  int v16; // r11d
  int v17; // ecx
  __int64 v18; // rbx
  int v19; // r14d
  unsigned __int64 v20; // r15
  int Pattern; // eax
  int v22; // r12d
  __int64 v23; // rdx
  int v24; // ecx
  unsigned int v25; // r8d
  signed __int64 v26; // rcx
  int v27; // r8d
  unsigned int v28; // ecx
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  bool v36; // zf
  int v37; // edx
  int v38; // r8d
  __int64 v39; // r15
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r9
  _DWORD *v43; // r8
  int v44; // eax
  KIRQL v45; // al
  unsigned __int64 v46; // rsi
  struct _KPRCB *v47; // r9
  _DWORD *v48; // r8
  struct _KPRCB *v49; // r9
  _DWORD *v50; // r8
  __int64 v51; // [rsp+48h] [rbp-41h]
  __int64 v52; // [rsp+48h] [rbp-41h]
  int v53; // [rsp+48h] [rbp-41h]
  __int64 v54; // [rsp+50h] [rbp-39h] BYREF
  __int64 v55; // [rsp+58h] [rbp-31h]
  int v56; // [rsp+60h] [rbp-29h]
  __int64 v57; // [rsp+68h] [rbp-21h]
  __int64 v58; // [rsp+70h] [rbp-19h]
  __int64 v59; // [rsp+78h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-9h] BYREF
  int v61; // [rsp+E8h] [rbp+5Fh]
  unsigned int v63; // [rsp+F8h] [rbp+6Fh]
  __int64 v64; // [rsp+100h] [rbp+77h]

  v64 = (__int64)CurrentThread;
  v63 = a3;
  CurrentNumaNode = a5;
  v6 = Object[6];
  v7 = Object[5];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = a3;
  v54 = 0LL;
  v11 = *(_QWORD *)(v7 + 8);
  v61 = 0;
  v57 = 0LL;
  v58 = 0LL;
  v55 = a5;
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 536);
    v13 = *(_QWORD *)(v11 + 600);
    v57 = v12;
    v58 = v13;
    if ( !a5 )
    {
      CurrentNumaNode = CcGetCurrentNumaNode(v12, v11);
      v55 = CurrentNumaNode;
    }
  }
  if ( !CurrentThread )
  {
    CurrentThread = KeGetCurrentThread();
    v64 = (__int64)CurrentThread;
  }
  result = PsGetIoPriorityThread(CurrentThread);
  if ( v6 )
  {
    if ( v11 )
    {
      v17 = *(_DWORD *)(v11 + 152);
      if ( (v17 & 1) == 0 && (v17 & 0x2000) == 0 && (Object[10] & 0x100000) == 0 && (int)result >= 2 )
      {
        result = CcCanIWriteStream(v15, v16, (_DWORD)Object, 0x1000000, 0, 4);
        if ( (_BYTE)result )
        {
          if ( !*(_BYTE *)(CurrentNumaNode + 196) )
          {
            v18 = v9 + *a2;
            v51 = v9;
            v19 = ~*(_DWORD *)(v6 + 4) & (*(_DWORD *)(v6 + 4) + v9);
            v56 = v19;
            v59 = v6 + 80;
            v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 80));
            if ( (*(_DWORD *)v6 & 0x20000) == 0 )
              *(_DWORD *)v6 |= 0x20000u;
            Pattern = CcDetermineReadPattern(v6, a2);
            v22 = Pattern;
            if ( Pattern )
            {
              LODWORD(v23) = Pattern - 1;
              if ( Pattern != 1 )
              {
                LODWORD(v23) = Pattern - 2;
                if ( Pattern != 2 )
                {
                  v24 = (int)a2;
                  if ( Pattern != 3 )
                    goto LABEL_68;
                  v52 = 2LL * *a2 - *(_QWORD *)(v6 + 32);
                  if ( v52 < 0 )
                    goto LABEL_68;
                  LODWORD(v23) = (v52 & 0xFFF) + v63;
                  LODWORD(v52) = v52 & 0xFFFFF000;
                  v63 = v23;
                  *(_QWORD *)(v6 + 56) = v52;
                  v25 = (v23 + 4095) & 0xFFFFF000;
                  goto LABEL_34;
                }
              }
              v26 = *(_QWORD *)(v6 + 64);
              if ( v18 + v51 + (unsigned int)(2 * v19) >= v26 )
              {
                v53 = *(_QWORD *)(v6 + 64);
                *(_QWORD *)(v6 + 56) = v18 & 0xFFFFFFFFFFFFF000uLL;
                if ( (__int64)(v18 & 0xFFFFFFFFFFFFF000uLL) >= v26 )
                  v53 = ~(v19 - 1) & (v19 + v18 - 1);
                ++*(_DWORD *)(v6 + 48);
                v27 = v19;
                v28 = *(_DWORD *)(v6 + 48);
                if ( Pattern == 1 || v28 >= 3 )
                  v27 = 2 * v19;
                v25 = v53 - *(_DWORD *)(v6 + 56) + v27;
                if ( v28 >= 3 )
                {
                  v29 = *(unsigned int *)(v6 + 92);
                  if ( (_DWORD)v29 )
                  {
                    v30 = v29 * v63 * v28;
                    v23 = (v30 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
                    v31 = v30 / 0x64;
                    if ( v31 > 0xFFFFFFFF )
                      v31 = 0xFFFFFFFFLL;
                    if ( v31 > v25 )
                      v25 = v31;
                  }
                }
LABEL_34:
                v61 = 1;
                *(_DWORD *)(v6 + 52) = v25;
                if ( (*(_DWORD *)v6 & 0x10000) == 0 )
                {
                  *(_DWORD *)v6 |= 0x10000u;
                  *(_DWORD *)v6 ^= (*(_DWORD *)v6 ^ ((unsigned int)PsGetPagePriorityThread(KeGetCurrentThread()) << 18)) & 0x1C0000;
                  KxReleaseSpinLock(v6 + 80);
                  if ( KiIrqlFlags )
                  {
                    CurrentIrql = KeGetCurrentIrql();
                    if ( (KiIrqlFlags & 1) != 0
                      && CurrentIrql <= 0xFu
                      && (unsigned __int8)v20 <= 0xFu
                      && CurrentIrql >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      SchedulerAssist = CurrentPrcb->SchedulerAssist;
                      v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
                      v36 = (v35 & SchedulerAssist[5]) == 0;
                      SchedulerAssist[5] &= v35;
                      if ( v36 )
                        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                    }
                  }
                  __writecr8(v20);
                  if ( (int)CcAllocateWorkQueueEntry(v57, v58, v55, &v54) < 0 )
                  {
                    v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 80));
                    *(_DWORD *)v6 &= ~0x10000u;
                    v46 = v45;
                    result = KxReleaseSpinLock(v6 + 80);
                    if ( KiIrqlFlags )
                    {
                      result = KeGetCurrentIrql();
                      if ( (KiIrqlFlags & 1) != 0
                        && (unsigned __int8)result <= 0xFu
                        && (unsigned __int8)v46 <= 0xFu
                        && (unsigned __int8)result >= 2u )
                      {
                        v47 = KeGetCurrentPrcb();
                        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
                        v48 = v47->SchedulerAssist;
                        v36 = ((unsigned int)result & v48[5]) == 0;
                        v48[5] &= result;
                        if ( v36 )
                          result = KiRemoveSystemWorkPriorityKick(v47);
                      }
                    }
                    __writecr8(v46);
                  }
                  else
                  {
                    v39 = v54;
                    if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
                      CcPerfLogScheduleReadAhead(v54, (_DWORD)Object, (_DWORD)a2, v63, v56, v22, 1);
                    if ( (*(_DWORD *)(v11 + 152) & 0x10000000) != 0 )
                      CcChargeThreadForReadAhead((_DWORD)Object, v37, v38, v22, v64);
                    ObfReferenceObjectWithTag(Object, 0x746C6644u);
                    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v57 + 768), &LockHandle);
                    *(_DWORD *)(v11 + 152) |= 0x4000u;
                    ++*(_DWORD *)(v11 + 4);
                    ++*(_DWORD *)(v11 + 544);
                    KxReleaseQueuedSpinLock(&LockHandle);
                    OldIrql = LockHandle.OldIrql;
                    if ( KiIrqlFlags )
                    {
                      v41 = KeGetCurrentIrql();
                      if ( (KiIrqlFlags & 1) != 0 && v41 <= 0xFu && LockHandle.OldIrql <= 0xFu && v41 >= 2u )
                      {
                        v42 = KeGetCurrentPrcb();
                        v43 = v42->SchedulerAssist;
                        v44 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                        v36 = (v44 & v43[5]) == 0;
                        v43[5] &= v44;
                        if ( v36 )
                          KiRemoveSystemWorkPriorityKick(v42);
                        v39 = v54;
                      }
                    }
                    __writecr8(OldIrql);
                    *(_QWORD *)(v6 + 112) = v39;
                    *(_DWORD *)(v39 + 128) = 1;
                    *(_QWORD *)(v39 + 16) = Object;
                    *(_QWORD *)(v39 + 24) = 0LL;
                    IoReferenceIoAttributionFromThread(v64);
                    return CcPostWorkQueue(v39, v55 + 88);
                  }
                  return result;
                }
                if ( (*(_DWORD *)(v11 + 152) & 0x10000000) != 0 )
                  CcChargeThreadForReadAhead((_DWORD)Object, v23, v25, v22, v64);
              }
            }
            else
            {
              *(_DWORD *)(v6 + 48) = 0;
              *(_QWORD *)(v6 + 64) = 0LL;
              *(_QWORD *)(v6 + 72) = 0LL;
            }
            v24 = (int)a2;
LABEL_68:
            if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
              CcPerfLogScheduleReadAhead(0, (_DWORD)Object, v24, v63, v19, v22, v61);
            result = KxReleaseSpinLock(v59);
            if ( KiIrqlFlags )
            {
              result = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0
                && (unsigned __int8)result <= 0xFu
                && (unsigned __int8)v20 <= 0xFu
                && (unsigned __int8)result >= 2u )
              {
                v49 = KeGetCurrentPrcb();
                v50 = v49->SchedulerAssist;
                result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
                v36 = ((unsigned int)result & v50[5]) == 0;
                v50[5] &= result;
                if ( v36 )
                  result = KiRemoveSystemWorkPriorityKick(v49);
              }
            }
            __writecr8(v20);
          }
        }
      }
    }
  }
  return result;
}
