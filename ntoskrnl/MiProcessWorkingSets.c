/*
 * XREFs of MiProcessWorkingSets @ 0x14035F6F0
 * Callers:
 *     MiWorkingSetManager @ 0x1403616C0 (MiWorkingSetManager.c)
 * Callees:
 *     MiTrimOrAgeWorkingSet @ 0x1402245D0 (MiTrimOrAgeWorkingSet.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KxWaitForLockChainValid @ 0x140291730 (KxWaitForLockChainValid.c)
 *     MiReturnWsToExpansionList @ 0x1402A5FD4 (MiReturnWsToExpansionList.c)
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1402FC390 (_tlgWriteEx_EtwWriteEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     MiComputeSystemTrimCriteria @ 0x14035FE9C (MiComputeSystemTrimCriteria.c)
 *     MiLogProcessWorkingSetsStop @ 0x140360210 (MiLogProcessWorkingSetsStop.c)
 *     MiComputeAgingPercent @ 0x140360274 (MiComputeAgingPercent.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403A9C3C (MiInitializeWorkingSetManagerParameters.c)
 *     MiDrainZeroLookasides @ 0x1403B6E88 (MiDrainZeroLookasides.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiOrderTrimList @ 0x14046378E (MiOrderTrimList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KeRetryOutswapProcess @ 0x14056CFF0 (KeRetryOutswapProcess.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056EF78 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057DAC8 (KiHaltOnAddressWakeEntireList.c)
 *     MiCheckSystemTrimEndCriteria @ 0x140631E4C (MiCheckSystemTrimEndCriteria.c)
 */

__int64 __fastcall MiProcessWorkingSets(__int64 a1, __int64 a2)
{
  PRKEVENT v2; // rdi
  __int64 v4; // r15
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __m128i v7; // xmm1
  __m128i v8; // xmm2
  __m128i v9; // xmm0
  __int64 v10; // rcx
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  _QWORD *v13; // r9
  __int64 v14; // rax
  __int64 result; // rax
  int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // rbx
  __int64 **v22; // r13
  __int64 v23; // r11
  int v24; // r14d
  __int16 v25; // dx
  int v26; // r15d
  __int64 *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rsi
  int *v30; // r12
  __int64 Next; // rax
  unsigned __int64 OldIrql; // r14
  int v33; // eax
  unsigned __int8 v34; // dl
  signed __int64 *v35; // rdx
  __int64 *v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 **v39; // rax
  _DWORD *v40; // r9
  __int64 v41; // r10
  __int64 **v42; // rax
  __int64 *v43; // rax
  bool v44; // zf
  char v45; // si
  unsigned int v46; // ecx
  unsigned int v47; // eax
  unsigned __int64 v48; // rbx
  _QWORD *v49; // rsi
  struct _LIST_ENTRY *v50; // rcx
  __int64 v51; // rax
  char v52; // al
  int v53; // eax
  __int64 v54; // rcx
  unsigned __int8 Lock; // cl
  _QWORD *v56; // r8
  _QWORD *v57; // rcx
  _QWORD *v58; // rdx
  __int64 v59; // r9
  _QWORD *v60; // rax
  __int64 v61; // rax
  unsigned __int64 v62; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v66; // eax
  __int64 v67; // rax
  __int64 **v68; // rax
  unsigned __int64 v69; // rdi
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r10
  _DWORD *v72; // r9
  int v73; // eax
  unsigned __int8 v74; // cl
  struct _KPRCB *v75; // r10
  _DWORD *v76; // r9
  int v77; // eax
  int v78; // eax
  unsigned __int8 v79; // cl
  struct _KPRCB *v80; // r9
  _DWORD *v81; // r8
  int v82; // eax
  PRKEVENT v83; // rax
  unsigned __int8 v84; // al
  _DWORD *v85; // r8
  int v86; // eax
  signed __int32 v87[12]; // [rsp+0h] [rbp-100h] BYREF
  int v88; // [rsp+40h] [rbp-C0h]
  char v89; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v90; // [rsp+48h] [rbp-B8h]
  unsigned int v91; // [rsp+50h] [rbp-B0h]
  __int16 v92; // [rsp+54h] [rbp-ACh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v94; // [rsp+70h] [rbp-90h] BYREF
  int v95; // [rsp+74h] [rbp-8Ch]
  unsigned int v96; // [rsp+78h] [rbp-88h]
  PRKEVENT Event; // [rsp+80h] [rbp-80h]
  __int64 v98; // [rsp+88h] [rbp-78h]
  int v99; // [rsp+90h] [rbp-70h] BYREF
  int v100; // [rsp+94h] [rbp-6Ch]
  __int64 v101; // [rsp+98h] [rbp-68h] BYREF
  __int64 v102; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v103; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v104; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v105; // [rsp+B8h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v106; // [rsp+C0h] [rbp-40h] BYREF
  char *v107; // [rsp+E0h] [rbp-20h]
  __int64 v108; // [rsp+E8h] [rbp-18h]
  __int16 *v109; // [rsp+F0h] [rbp-10h]
  __int64 v110; // [rsp+F8h] [rbp-8h]
  int *v111; // [rsp+100h] [rbp+0h]
  __int64 v112; // [rsp+108h] [rbp+8h]
  __int64 *v113; // [rsp+110h] [rbp+10h]
  __int64 v114; // [rsp+118h] [rbp+18h]
  __int64 *v115; // [rsp+120h] [rbp+20h]
  __int64 v116; // [rsp+128h] [rbp+28h]
  __int64 *v117; // [rsp+130h] [rbp+30h]
  __int64 v118; // [rsp+138h] [rbp+38h]
  __int64 *v119; // [rsp+140h] [rbp+40h]
  __int64 v120; // [rsp+148h] [rbp+48h]
  __int64 *v121; // [rsp+150h] [rbp+50h]
  __int64 v122; // [rsp+158h] [rbp+58h]
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v2 = *(PRKEVENT *)(a1 + 16920);
  v90 = a2;
  v98 = a1;
  Event = v2;
  v4 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_UNKNOWN *)a1 == &MiSystemPartition )
  {
    v5 = 0LL;
    v6 = 0LL;
    if ( KeNumberNodes )
    {
      if ( (unsigned __int16)KeNumberNodes < 4u )
        goto LABEL_7;
      v7 = 0LL;
      v8 = 0LL;
      do
      {
        v9 = _mm_loadu_si128((const __m128i *)((char *)&xmmword_140C67050 + 8 * v6));
        v10 = (unsigned int)(v6 + 2);
        v6 = (unsigned int)(v6 + 4);
        v7 = _mm_add_epi64(v7, v9);
        v11 = _mm_add_epi64(_mm_loadu_si128((const __m128i *)((char *)&xmmword_140C67050 + 8 * v10)), v8);
        v8 = v11;
      }
      while ( (unsigned int)v6 < (KeNumberNodes & 0xFFFCu) );
      v12 = _mm_add_epi64(v7, v11);
      v5 = _mm_add_epi64(v12, _mm_srli_si128(v12, 8)).m128i_u64[0];
      if ( (unsigned int)v6 < (unsigned __int16)KeNumberNodes )
      {
LABEL_7:
        v13 = (_QWORD *)&xmmword_140C67050 + v6;
        v14 = (unsigned __int16)KeNumberNodes - (unsigned int)v6;
        do
        {
          v5 += *v13++;
          --v14;
        }
        while ( v14 );
      }
    }
    if ( *(_QWORD *)(v4 + 17040) <= v5 )
    {
      v2[110].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)-1LL;
    }
    else if ( v2[110].Header.WaitListHead.Flink != (struct _LIST_ENTRY *)v5 )
    {
      v2[110].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v5;
      v62 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 224));
      *(_BYTE *)(v4 + 12) = 1;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 224));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v62 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v62 + 1));
          v44 = (v66 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v66;
          if ( v44 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v62);
      v2 = Event;
    }
  }
  if ( *(_BYTE *)(v4 + 12) )
    MiInitializeWorkingSetManagerParameters(v4);
  result = *(unsigned int *)(v4 + 4);
  if ( (result & 0x10) != 0 )
    return result;
  MiComputeAgingPercent(v4);
  v16 = MiComputeSystemTrimCriteria(v4, a2);
  v91 = v16;
  if ( *(_QWORD *)&qword_140C69568
    && **(_DWORD **)&qword_140C69568 > 5u
    && tlgKeywordOn(*(__int64 *)&qword_140C69568, 1LL) )
  {
    v89 = *(_BYTE *)(a2 + 2);
    v107 = &v89;
    v94 = *(_WORD *)(v19 + 2346);
    v109 = &v94;
    v111 = &v99;
    v102 = *(_QWORD *)(a2 + 80);
    v113 = &v102;
    v103 = *(_QWORD *)(a2 + 72);
    v115 = &v103;
    v104 = *(_QWORD *)(v4 + 17216);
    v117 = &v104;
    v105 = *(_QWORD *)(v4 + 17600);
    v119 = &v105;
    v101 = *(_QWORD *)(v4 + 17824);
    v121 = &v101;
    v108 = v17;
    v110 = 2LL;
    v99 = v16;
    v112 = 4LL;
    v114 = 8LL;
    v116 = 8LL;
    v118 = 8LL;
    v120 = 8LL;
    v122 = 8LL;
    tlgWriteEx_EtwWriteEx(v20, (unsigned __int8 *)&qword_1400383D0, v18, v17, v87[8], v87[10], 0xAu, &v106);
  }
  if ( (v16 & 5) != 0 )
  {
    MiDrainZeroLookasides(v4, 0LL, 0LL, 0LL);
    LOBYTE(v2[2].Header.SignalState) = 1;
  }
  v96 = 0;
  v95 = 0;
  if ( (v16 & 2) != 0 )
    ++HIDWORD(v2[3].Header.WaitListHead.Flink);
  v21 = 0LL;
  if ( (v16 & 0x20) != 0 )
  {
    if ( WORD1(v2[97].Header.WaitListHead.Blink) > 0xAu )
      WORD1(v2[97].Header.WaitListHead.Blink) = 10;
    KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
    if ( BYTE2(v2[2].Header.SignalState) )
    {
      v56 = (_QWORD *)(v4 + 16928);
      BYTE2(v2[2].Header.SignalState) = 0;
      v57 = *(_QWORD **)(v4 + 16928);
      if ( v57 != (_QWORD *)(v4 + 16928) )
      {
        do
        {
          v58 = v57;
          v57 = (_QWORD *)*v57;
          if ( (struct _LIST_ENTRY *)v58[9] >= v2[2].Header.WaitListHead.Flink )
          {
            v59 = *v58;
            v60 = (_QWORD *)v58[1];
            if ( *(_QWORD **)(*v58 + 8LL) != v58 )
              goto LABEL_102;
            if ( (_QWORD *)*v60 != v58 )
              goto LABEL_102;
            *v60 = v59;
            *(_QWORD *)(v59 + 8) = v60;
            v61 = *v56;
            if ( *(_QWORD **)(*v56 + 8LL) != v56 )
              goto LABEL_102;
            *v58 = v61;
            v58[1] = v56;
            *(_QWORD *)(v61 + 8) = v58;
            *v56 = v58;
          }
        }
        while ( v57 != v56 );
      }
    }
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
  }
  BYTE1(v2[2].Header.SignalState) = 1;
  v22 = (__int64 **)(v4 + 16928);
  v23 = a2;
  while ( 2 )
  {
    while ( 2 )
    {
      v24 = 0;
      v100 = v16 & 1;
      if ( (v16 & 1) != 0 )
      {
        v67 = MiOrderTrimList(v4, *((unsigned __int8 *)MiTrimPassToAge + (*(_BYTE *)v23 & 0x7F)), v16 & 1, 0LL);
        v23 = v90;
        *(_QWORD *)(v90 + 104) = v67;
      }
      v25 = ++LOWORD(v2[97].Header.WaitListHead.Blink);
      *(_QWORD *)(v23 + 88) = *(_QWORD *)(v23 + 80) - *(_QWORD *)(v23 + 96);
      v26 = v16 & 0x20;
      v92 = v25;
      while ( 1 )
      {
        v27 = *v22;
        if ( *v22 == (__int64 *)v22 )
          goto LABEL_63;
        v28 = *v27;
        if ( (__int64 **)v27[1] != v22 || *(__int64 **)(v28 + 8) != v27 )
          goto LABEL_102;
        *v22 = (__int64 *)v28;
        v29 = (__int64)(v27 - 3);
        *(_QWORD *)(v28 + 8) = v22;
        if ( *((_WORD *)v27 + 74) == v25 )
          break;
        *v27 = 0LL;
        *(_WORD *)(v29 + 172) = v25;
        v26 = v16 & 0x20;
        if ( (v16 & 0x20) != 0 && (struct _LIST_ENTRY *)*(_QWORD *)(v29 + 96) < Event[2].Header.WaitListHead.Flink )
        {
          v42 = (__int64 **)v22[1];
          if ( *v42 == (__int64 *)v22 )
          {
            *v27 = (__int64)v22;
            v27[1] = (__int64)v42;
            *v42 = v27;
            v22[1] = v27;
            goto LABEL_64;
          }
LABEL_102:
          __fastfail(3u);
        }
        v30 = (int *)(v29 + 184);
        if ( *(_QWORD *)(v29 + 144) > 1uLL || (*(_BYTE *)v30 & 7) != 0 )
        {
          v88 = *v30;
          BYTE1(v88) = BYTE1(v88) & 0xF9 | 2;
          *(_WORD *)v30 = v88;
          if ( *(_BYTE *)(v23 + 2) == 2
            && (*(_QWORD *)(v29 + 144) <= *(_QWORD *)(v29 + 112)
             || *(_QWORD *)(v29 + 144) - *(_QWORD *)(v29 + 112) < 0x40000uLL) )
          {
            goto LABEL_46;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
            goto LABEL_128;
          }
          _m_prefetchw(&LockHandle);
          Next = (__int64)LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
              goto LABEL_40;
            Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
            v23 = v90;
          }
          LockHandle.LockQueue.Next = 0LL;
          Lock = (unsigned __int8)LockHandle.LockQueue.Lock;
          if ( ((Lock ^ (unsigned __int8)_InterlockedExchange64(
                                           (volatile __int64 *)(Next + 8),
                                           (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
          {
            _InterlockedOr(v87, 0);
            KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(Next + 8) >> 5) & 0x7F], 0LL));
LABEL_128:
            v23 = v90;
          }
LABEL_40:
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            v74 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v74 <= 0xFu && LockHandle.OldIrql <= 0xFu && v74 >= 2u )
            {
              v75 = KeGetCurrentPrcb();
              v76 = v75->SchedulerAssist;
              v77 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v44 = (v77 & v76[5]) == 0;
              v76[5] &= v77;
              if ( v44 )
              {
                KiRemoveSystemWorkPriorityKick(v75);
                v23 = v90;
              }
            }
          }
          __writecr8(OldIrql);
          v33 = MiTrimOrAgeWorkingSet((__int64)(v27 - 3), v23, v91);
          v23 = v90;
          v24 = v33;
          if ( v33 )
            *(_BYTE *)(v90 + 4) = 2;
          LockHandle.LockQueue.Lock = &qword_140C69440;
          LockHandle.LockQueue.Next = 0LL;
          v34 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v34 <= 0xFu )
          {
            v40 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v34 == 2 )
              LODWORD(v41) = 4;
            else
              v41 = (-1LL << (v34 + 1)) & 4;
            v40[5] |= v41;
          }
          LockHandle.OldIrql = v34;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&LockHandle, &qword_140C69440);
            goto LABEL_85;
          }
          v35 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)&qword_140C69440, (__int64)&LockHandle);
          if ( v35 )
          {
            KxWaitForLockOwnerShip((signed __int64)&LockHandle, v35);
LABEL_85:
            v23 = v90;
          }
LABEL_46:
          if ( v26 && (struct _LIST_ENTRY *)*(_QWORD *)(v29 + 96) >= Event[2].Header.WaitListHead.Flink )
          {
            v36 = (__int64 *)(v29 + 104);
            if ( !*(_QWORD *)(v29 + 104) )
            {
              v88 = *v30;
              v52 = BYTE1(v88) | 6;
              *(_QWORD *)(v29 + 32) = v21;
              BYTE1(v88) = v52;
              v21 = v29 + 32;
              *(_WORD *)v30 = v88;
              goto LABEL_51;
            }
          }
          else
          {
            v36 = (__int64 *)(v29 + 104);
          }
          v88 = *v30;
          BYTE1(v88) &= 0xF9u;
          *(_WORD *)v30 = v88;
          v37 = *(unsigned __int16 *)(v29 + 174);
          v38 = *(_QWORD *)(qword_140C67048 + 8 * v37) + 16928LL;
          v39 = *(__int64 ***)(*(_QWORD *)(qword_140C67048 + 8 * v37) + 16936LL);
          if ( *v39 != (__int64 *)v38 )
            goto LABEL_102;
          *v27 = v38;
          v27[1] = (__int64)v39;
          *v39 = v27;
          *(_QWORD *)(v38 + 8) = v27;
          if ( *v36 )
          {
            KeSignalGate(*v36, 1u);
            v23 = v90;
          }
LABEL_51:
          v16 = v91;
          if ( v24 )
            goto LABEL_63;
          v25 = v92;
        }
        else if ( *(_QWORD *)(v29 + 104) )
        {
          v68 = (__int64 **)v22[1];
          if ( *v68 != (__int64 *)v22 )
            goto LABEL_102;
          v16 = v91;
          *v27 = (__int64)v22;
          v27[1] = (__int64)v68;
          *v68 = v27;
          v22[1] = v27;
        }
        else
        {
          v88 = *v30;
          BYTE1(v88) |= 6u;
          *(_WORD *)v30 = v88;
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          v69 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            v70 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v70 <= 0xFu && LockHandle.OldIrql <= 0xFu && v70 >= 2u )
            {
              v71 = KeGetCurrentPrcb();
              v72 = v71->SchedulerAssist;
              v73 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v44 = (v73 & v72[5]) == 0;
              v72[5] &= v73;
              if ( v44 )
                KiRemoveSystemWorkPriorityKick(v71);
            }
          }
          __writecr8(v69);
          KeRetryOutswapProcess(v29 - 1664);
          KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
          v88 = *v30;
          BYTE1(v88) &= 0xF9u;
          *(_WORD *)(v29 + 184) = v88;
          MiReturnWsToExpansionList(v29, 0);
          v23 = v90;
          v25 = v92;
          v16 = v91;
        }
      }
      v43 = *v22;
      if ( (__int64 **)(*v22)[1] != v22 )
        goto LABEL_102;
      v44 = v100 == 0;
      *v27 = (__int64)v43;
      v27[1] = (__int64)v22;
      v43[1] = (__int64)v27;
      *v22 = v27;
      if ( !v44 )
      {
        v4 = v98;
        v78 = MiCheckSystemTrimEndCriteria(v98, v23, &LockHandle, 0LL);
        v23 = v90;
        if ( !v78 )
        {
          v2 = Event;
          continue;
        }
      }
      break;
    }
    v26 = v16 & 0x20;
LABEL_63:
    if ( v26 )
    {
LABEL_64:
      while ( v21 )
      {
        v53 = *(_DWORD *)(v21 + 152);
        v54 = v21 - 32;
        v21 = *(_QWORD *)v21;
        v88 = v53;
        BYTE1(v88) = BYTE1(v53) & 0xF9;
        *(_WORD *)(v54 + 184) = v88;
        MiReturnWsToExpansionList(v54, 1);
      }
      v23 = v90;
    }
    v45 = v16 | v95;
    v95 |= v16;
    if ( v24 )
    {
      v83 = Event;
      BYTE1(Event[2].Header.SignalState) = 0;
      if ( (v45 & 5) != 0 )
        LOBYTE(v83[2].Header.SignalState) = 0;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v48 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        v84 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v84 <= 0xFu && LockHandle.OldIrql <= 0xFu && v84 >= 2u )
        {
          v80 = KeGetCurrentPrcb();
          v85 = v80->SchedulerAssist;
          v86 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v44 = (v86 & v85[5]) == 0;
          v85[5] &= v86;
          if ( v44 )
            goto LABEL_152;
        }
      }
    }
    else
    {
      v2 = Event;
      v46 = v16 & 0xFFFFFB9C | v96;
      v96 = v46;
      v47 = (__int64)Event[1].Header.WaitListHead.Blink & 0xFFFFFBFF;
      if ( v46 != v47 )
      {
        v16 = v47 ^ v46;
        v91 = v47 ^ v46;
        if ( (((unsigned __int8)v47 ^ (unsigned __int8)v46) & 5) != 0 )
          LOBYTE(Event[2].Header.SignalState) = 1;
        v4 = v98;
        *(_BYTE *)(v23 + 2) = 6;
        continue;
      }
      BYTE1(Event[2].Header.SignalState) = 0;
      if ( (v45 & 5) != 0 )
        LOBYTE(v2[2].Header.SignalState) = 0;
      if ( LODWORD(v2[1].Header.WaitListHead.Blink) )
      {
        LODWORD(v2[1].Header.WaitListHead.Blink) &= 0x400u;
        KeSetEvent(v2, 0, 0);
      }
      if ( (v45 & 0x43) != 0 )
      {
        v49 = (_QWORD *)v90;
        v2[100].Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(v90 + 8);
        *(_QWORD *)&v2[101].Header.Lock = v49[2];
        v2[101].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v49[3];
        v2[101].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v49[4];
        *(_QWORD *)&v2[102].Header.Lock = v49[5];
        v2[102].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v49[6];
        v50 = (struct _LIST_ENTRY *)v49[7];
        v2[102].Header.WaitListHead.Blink = v50;
        v51 = v49[8];
        *(_QWORD *)&v2[103].Header.Lock = v51;
        v2[100].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)((char *)v50 + v51);
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v48 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        v79 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v79 <= 0xFu && LockHandle.OldIrql <= 0xFu && v79 >= 2u )
        {
          v80 = KeGetCurrentPrcb();
          v81 = v80->SchedulerAssist;
          v82 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v44 = (v82 & v81[5]) == 0;
          v81[5] &= v82;
          if ( v44 )
LABEL_152:
            KiRemoveSystemWorkPriorityKick(v80);
        }
      }
    }
    break;
  }
  __writecr8(v48);
  return MiLogProcessWorkingSetsStop(v98);
}
