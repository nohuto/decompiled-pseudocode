__int64 __fastcall CcLazyWriteScan(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v8; // r15d
  unsigned __int64 v9; // r9
  __int64 *v10; // rsi
  __int64 *v11; // rcx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v22; // zf
  unsigned __int64 v23; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  _QWORD **v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  _QWORD *v31; // rdx
  unsigned int v32; // eax
  int v33; // r9d
  unsigned int v34; // ebx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // r13
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int8 v45; // cf
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // ecx
  unsigned int v49; // eax
  __int64 v50; // rdx
  unsigned int v51; // ecx
  unsigned int v52; // eax
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 *v55; // rax
  unsigned __int64 v56; // r15
  unsigned __int8 v57; // cl
  struct _KPRCB *v58; // r10
  _DWORD *v59; // r9
  int v60; // eax
  int WorkQueueEntry; // eax
  KSPIN_LOCK *v62; // rcx
  unsigned __int64 v63; // r15
  __int64 v64; // r8
  __int64 v65; // r9
  int v66; // ecx
  __int64 v67; // rdx
  __int64 v68; // rdx
  int v69; // ecx
  unsigned __int64 v70; // r15
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r10
  _DWORD *v73; // r9
  int v74; // eax
  __int64 v75; // rcx
  _QWORD *v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rcx
  char v79; // bl
  _QWORD *v80; // rax
  unsigned __int64 v81; // rbx
  unsigned __int8 v82; // al
  struct _KPRCB *v83; // r9
  _DWORD *v84; // r8
  int v85; // eax
  char v86; // [rsp+60h] [rbp-39h]
  char v87; // [rsp+61h] [rbp-38h]
  char v88; // [rsp+62h] [rbp-37h]
  unsigned int v89; // [rsp+64h] [rbp-35h] BYREF
  _QWORD *v90; // [rsp+68h] [rbp-31h] BYREF
  _QWORD **v91; // [rsp+70h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-21h] BYREF
  __int64 v93; // [rsp+90h] [rbp-9h]
  __int64 v94; // [rsp+98h] [rbp-1h] BYREF
  unsigned __int64 v95; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v96; // [rsp+A8h] [rbp+Fh]
  __int64 v97[8]; // [rsp+B0h] [rbp+17h] BYREF
  char v98; // [rsp+100h] [rbp+67h]

  v86 = 0;
  v97[0] = 0x7FFFFFFFFFFFFFFFLL;
  v98 = 0;
  v89 = 0;
  v8 = 0;
  v88 = 0;
  v87 = 0;
  v94 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a1 == *((_QWORD *)PspSystemPartition + 1) )
    CcScanLogHandleList(a1, &v89, a4, v97);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  CcSetLazyWriteScanQueuedInternal((_BYTE *)(a1 + 984), a4, 0);
  v9 = *(unsigned int *)(a1 + 1128);
  v10 = (__int64 *)(a1 + 1056);
  v11 = *(__int64 **)(a1 + 8);
  v12 = *(_QWORD *)(a1 + 1112) / v9;
  *(_QWORD *)(a1 + 1144) = v12;
  v13 = *(_QWORD *)(a1 + 1120) / v9;
  *(_QWORD *)(a1 + 1152) = v13;
  v14 = *v11;
  if ( (unsigned int)v9 <= 1 )
  {
    v17 = *v10;
    v15 = *(_QWORD *)(v14 + 17216);
    v16 = *v10;
  }
  else
  {
    v15 = *(_QWORD *)(v14 + 17216) + v12 * (unsigned int)(v9 - 1);
    v16 = *v10;
    v17 = *v10 + v13 * (unsigned int)(v9 - 1);
  }
  *(_QWORD *)(a1 + 1112) = v15;
  *(_QWORD *)(a1 + 1120) = v17;
  if ( !v16 && !*(_BYTE *)(a1 + 1050) )
  {
    if ( *(_QWORD *)(a1 + 1168) == a1 + 1168 )
    {
      *(_BYTE *)(a1 + 1049) = 0;
      result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        result = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0
          && (unsigned __int8)result <= 0xFu
          && LockHandle.OldIrql <= 0xFu
          && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v22 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v22 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      return result;
    }
    CcRescheduleLazyWriteScan(a1);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v23 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v22 = (v27 & v26[5]) == 0;
        v26[5] &= v27;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v25);
      }
    }
    __writecr8(v23);
    return CcPostDeferredWrites(a1, 0LL);
  }
  v91 = &v90;
  v28 = (_QWORD **)(a1 + 848);
  v90 = &v90;
  while ( 1 )
  {
    v29 = *v28;
    if ( *v28 == v28 )
      break;
    v30 = (_QWORD *)*v29;
    if ( (_QWORD **)v29[1] != v28 || (_QWORD *)v30[1] != v29 || (*v28 = v30, v30[1] = v28, v31 = v91, *v91 != &v90) )
LABEL_104:
      __fastfail(3u);
    v29[1] = v91;
    *v29 = &v90;
    *v31 = v29;
    v91 = (_QWORD **)v29;
  }
  *(_BYTE *)(a1 + 1050) = 0;
  v32 = CcCalculatePagesToWrite(a1, a4, a1 + 1056, (unsigned __int64 *)(a1 + 1080), 0);
  v33 = *(_DWORD *)(a1 + 976);
  v89 = v32;
  v34 = v32;
  CcAdjustThrottleForPartition((_QWORD *)a1, a1 + 1056, a1 + 1080, v33);
  *(_QWORD *)(a1 + 1064) = *v10;
  v37 = *(_QWORD *)(a1 + 1136);
  *(_DWORD *)(a1 + 1072) = v34;
  *(_DWORD *)(a1 + 976) = v34;
  *(_DWORD *)(v37 + 8LL * *(unsigned int *)(a2 + 152)) = v34;
  *(_QWORD *)(a2 + 216) = MEMORY[0xFFFFF78000000014];
  if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
    CcPerfLogLazyWriteScan(
      a3,
      a4,
      *(_DWORD *)(a1 + 976),
      *v10,
      *(_QWORD *)(**(_QWORD **)(a1 + 8) + 17216LL),
      *(_QWORD *)(a1 + 1080),
      (unsigned int)CcNumberOfMappedVacbs,
      *(_QWORD *)(a1 + 1088),
      *(_QWORD *)(a1 + 1096),
      *(_QWORD *)(a1 + 1144),
      *(_QWORD *)(a1 + 1152),
      *(unsigned int *)(a1 + 776));
  v38 = a1 + 680;
  v39 = 0LL;
  v40 = *(_QWORD *)(a1 + 680) - 136LL;
  if ( *(_QWORD *)(a1 + 680) != 136LL )
  {
    do
    {
      v41 = v40 + 136;
      if ( v40 + 136 == v38 )
        break;
      v42 = v40;
      if ( v39 )
        v42 = v39;
      v43 = *(_QWORD *)(v40 + 96) & 0xFFFFFFFFFFFFFFF0uLL;
      v96 = v42;
      if ( CcShouldLazyWriteCacheMap(v40, a1, 0LL, v89, v43, a4) )
      {
        v95 = 0LL;
        v44 = CcGetNodeForLazyWrite(v40);
        v45 = _bittest((const signed __int32 *)(v40 + 152), 0x18u);
        v93 = v44;
        if ( v45 )
        {
          v88 = 1;
          *(_DWORD *)(*(_QWORD *)(v40 + 248) + 144LL) |= 1u;
          v46 = *(_QWORD *)(v40 + 248);
          v47 = *(_QWORD *)(v40 + 264);
          if ( v47 > *(_QWORD *)(v46 + 112) )
          {
            *(_QWORD *)(v46 + 112) = v47;
            if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
              *(_QWORD *)(*(_QWORD *)(v40 + 248) + 128LL) = *(_QWORD *)((*(_QWORD *)(v40 + 96) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                      + 0x18);
          }
        }
        v48 = *(_DWORD *)(v40 + 152);
        v49 = *(_DWORD *)(v40 + 112);
        *(_DWORD *)(v40 + 200) = v49;
        if ( (v48 & 0x200) != 0 && v49 >= 0x40 )
        {
          if ( (v48 & 0x1000000) != 0 && (v50 = *(_QWORD *)(v40 + 248), (v51 = *(_DWORD *)(v50 + 104)) != 0) )
          {
            if ( v49 <= v51 )
              *(_DWORD *)(v50 + 104) = v51 - v49;
            else
              *(_DWORD *)(v50 + 104) = 0;
            ++CcDbgSkippedReductions;
          }
          else
          {
            *(_DWORD *)(v40 + 200) = v49 >> 3;
          }
        }
        if ( !v86 )
        {
          v52 = *(_DWORD *)(v40 + 200);
          if ( v52 < v89 )
          {
            v89 -= v52;
          }
          else
          {
            if ( _bittest((const signed __int32 *)(v40 + 152), 9u) || v96 == v40 && (*(_DWORD *)(v40 + 276) & 0xF) == 0 )
            {
              v98 = 1;
            }
            else
            {
              v53 = *(_QWORD *)v38;
              v54 = *(_QWORD **)(a1 + 688);
              if ( *(_QWORD *)(*(_QWORD *)v38 + 8LL) != v38 )
                goto LABEL_104;
              if ( *v54 != v38 )
                goto LABEL_104;
              *v54 = v53;
              *(_QWORD *)(v53 + 8) = v54;
              v55 = *(__int64 **)(v40 + 144);
              if ( *v55 != v41 )
                goto LABEL_104;
              *(_QWORD *)v38 = v41;
              *(_QWORD *)(a1 + 688) = v55;
              *v55 = v38;
              *(_QWORD *)(v40 + 144) = v38;
            }
            v89 = 0;
            v86 = 1;
          }
        }
        *(_DWORD *)(v40 + 152) |= 0x20u;
        ++*(_DWORD *)(v40 + 112);
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        v56 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          v57 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v57 <= 0xFu && LockHandle.OldIrql <= 0xFu && v57 >= 2u )
          {
            v58 = KeGetCurrentPrcb();
            v59 = v58->SchedulerAssist;
            v60 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v22 = (v60 & v59[5]) == 0;
            v59[5] &= v60;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(v58);
          }
        }
        __writecr8(v56);
        WorkQueueEntry = CcAllocateWorkQueueEntry(a1, 0LL, v93, (PSLIST_ENTRY *)&v95);
        v62 = (KSPIN_LOCK *)(a1 + 768);
        if ( WorkQueueEntry < 0 )
        {
          KeAcquireInStackQueuedSpinLock(v62, &LockHandle);
          *(_DWORD *)(v40 + 152) &= ~0x20u;
          --*(_DWORD *)(v40 + 112);
          break;
        }
        v63 = v95;
        *(_DWORD *)(v95 + 128) = 2;
        *(_QWORD *)(v63 + 16) = v40;
        KeAcquireInStackQueuedSpinLock(v62, &LockHandle);
        v66 = *(_DWORD *)(v40 + 112) - 1;
        v22 = (*(_DWORD *)(v40 + 152) & 0x10000) == 0;
        *(_DWORD *)(v40 + 112) = v66;
        if ( v22 )
        {
          if ( *(_DWORD *)(v40 + 4) || v66 )
            v68 = v93 + 104;
          else
            v68 = v93 + 120;
          *(_QWORD *)(v40 + 504) = v63;
        }
        else
        {
          v67 = v93;
          *(_QWORD *)(v40 + 504) = v63 | 1;
          v68 = v67 + 72;
        }
        CcPostWorkQueue((_QWORD *)v63, v68, v64, v65);
        v8 = 0;
        v87 = 1;
      }
      else
      {
        v69 = *(_DWORD *)(v40 + 152);
        v35 = 65568LL;
        if ( (v69 & 0x10020) == 0x10020 )
        {
          CcIncrementWriteBehindPriority(v40);
        }
        else if ( (unsigned int)++v8 >= 0x14 && (v69 & 0x820) == 0 )
        {
          ++*(_DWORD *)(v40 + 112);
          *(_DWORD *)(v40 + 152) = v69 | 0x20;
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          v70 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            v71 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v71 <= 0xFu && LockHandle.OldIrql <= 0xFu && v71 >= 2u )
            {
              v72 = KeGetCurrentPrcb();
              v73 = v72->SchedulerAssist;
              v74 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v22 = (v74 & v73[5]) == 0;
              v73[5] &= v74;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick(v72);
            }
          }
          __writecr8(v70);
          v8 = 0;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
          *(_DWORD *)(v40 + 152) &= ~0x20u;
          --*(_DWORD *)(v40 + 112);
        }
      }
      v40 = *(_QWORD *)v41 - 136LL;
      if ( v98 )
      {
        v75 = *(_QWORD *)v38;
        v76 = *(_QWORD **)(a1 + 688);
        if ( *(_QWORD *)(*(_QWORD *)v38 + 8LL) != v38 )
          goto LABEL_104;
        if ( *v76 != v38 )
          goto LABEL_104;
        *v76 = v75;
        *(_QWORD *)(v75 + 8) = v76;
        v77 = *(_QWORD *)v41;
        if ( *(_QWORD *)(*(_QWORD *)v41 + 8LL) != v41 )
          goto LABEL_104;
        *(_QWORD *)v38 = v77;
        *(_QWORD *)(a1 + 688) = v41;
        *(_QWORD *)(v77 + 8) = v38;
        *(_QWORD *)v41 = v38;
        v98 = 0;
      }
      v39 = v96;
    }
    while ( v40 != v96 );
  }
  v78 = v90;
  v79 = v87;
  if ( v90 != &v90 )
    v79 = 1;
  while ( v78 != &v90 )
  {
    v80 = (_QWORD *)*v78;
    if ( (_QWORD **)v78[1] != &v90 || (_QWORD *)v80[1] != v78 )
      goto LABEL_104;
    v90 = (_QWORD *)*v78;
    v80[1] = &v90;
    CcPostWorkQueue(v78, v78[19] + 104LL, v35, v36);
    v78 = v90;
  }
  if ( (_BYTE)dword_140D1D1EC
    || v79
    || *(_QWORD *)(a1 + 1168) != a1 + 1168
    || (CcComputeNextScanTime(a1, 0LL, v97, &v94), v94 != 0x7FFFFFFFFFFFFFFFLL) )
  {
    CcRescheduleLazyWriteScan(a1);
    if ( *(_BYTE *)(a1 + 780) )
      *(_BYTE *)(a1 + 780) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 1049) = 0;
    *(_BYTE *)(a1 + 780) = 1;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v81 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v82 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v82 <= 0xFu && LockHandle.OldIrql <= 0xFu && v82 >= 2u )
    {
      v83 = KeGetCurrentPrcb();
      v84 = v83->SchedulerAssist;
      v85 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v22 = (v85 & v84[5]) == 0;
      v84[5] &= v85;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick(v83);
    }
  }
  __writecr8(v81);
  if ( v88 )
    CcUpdateTimeOnLogHandles(a1);
  if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
    CcPerfLogLoggedStreamsStats(a4, *(_DWORD *)(a1 + 976));
  result = a1 + 1168;
  if ( *(_QWORD *)result != result )
    return CcPostDeferredWrites(a1, 0LL);
  return result;
}
