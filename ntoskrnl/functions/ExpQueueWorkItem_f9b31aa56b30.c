__int64 __fastcall ExpQueueWorkItem(__int64 a1, _QWORD *a2, int a3, unsigned int a4, int a5)
{
  unsigned __int8 v5; // di
  _QWORD *v7; // r14
  __int64 v8; // r10
  __int64 CurrentIrql; // rsi
  __int64 v10; // rbp
  unsigned __int16 v11; // cx
  __int64 v12; // rsi
  unsigned __int16 *v13; // r12
  __int64 v14; // r10
  __int64 v15; // r15
  _QWORD *v16; // r10
  __int64 v17; // rcx
  struct _KPRCB *CurrentPrcb; // r13
  unsigned int v19; // ebx
  _KTHREAD *CurrentThread; // rdi
  int v21; // r11d
  __int64 v22; // r8
  unsigned int v23; // edx
  __int64 v24; // rax
  int v25; // ecx
  unsigned int v26; // ecx
  _QWORD *v27; // r14
  _QWORD *v28; // rax
  _QWORD *v29; // rsi
  _QWORD *v30; // rcx
  char v31; // bp
  ULONG_PTR v32; // rdi
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  _DWORD *SchedulerAssist; // r8
  __int64 v38; // r9
  _DWORD *v39; // r8
  __int64 v40; // rdx
  int v41; // edx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  unsigned int NextNode; // eax
  __int64 v45; // rcx
  unsigned __int8 v46; // cl
  struct _KPRCB *v47; // rax
  _DWORD *v48; // r9
  int v49; // edx
  bool v50; // zf
  int v51; // [rsp+30h] [rbp-78h] BYREF
  int v52[4]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v53; // [rsp+48h] [rbp-60h]
  __int64 v54; // [rsp+50h] [rbp-58h]
  int v58; // [rsp+C8h] [rbp+20h] BYREF

  v5 = 0;
  v7 = a2;
  v58 = 0;
  v8 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v53 = CurrentIrql;
  __writecr8(2uLL);
  LODWORD(v10) = 4;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql == 2 )
      LODWORD(v38) = 4;
    else
      v38 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v38;
  }
  if ( a4 >= (unsigned __int16)KeNumberNodes )
    a4 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v11 = a4;
  if ( a4 < (unsigned __int16)KeNumberNodes )
  {
    v12 = a5;
    while ( 1 )
    {
      v13 = (unsigned __int16 *)KeNodeBlock[v11];
      if ( v13 == (unsigned __int16 *)((char *)&KiNodeInit + 304 * v11) )
        v13 = 0LL;
      if ( (unsigned __int8)ExpIsPoolReadyForWork(v8, v13, (unsigned int)v12) )
        break;
      NextNode = MmGetNextNode(a4, &v58);
      v8 = a1;
      v11 = NextNode;
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_32;
    }
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL * *v13) + 8 * v12);
    if ( (v15 & 1) != 0 )
      v15 = 0LL;
    v16 = (_QWORD *)(v15 + 8);
    v17 = KeGetCurrentIrql();
    v54 = v17;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v17 <= 0xFu )
    {
      v39 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( (_BYTE)v17 != 2 )
      {
        v17 = (unsigned int)(unsigned __int8)v17 + 1;
        v10 = (-1LL << v17) & 4;
      }
      v39[5] |= v10;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v19 = 0;
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( _interlockedbittestandset((volatile signed __int32 *)v15, 7u) )
    {
      do
      {
        if ( (++v19 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v17) )
        {
          HvlNotifyLongSpinWait(v19);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)v15 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v15, 7u) );
      v16 = (_QWORD *)(v15 + 8);
    }
    if ( (_QWORD *)*v16 == v16
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v15 && CurrentThread->WaitReason == 15 )
    {
      v21 = a3;
      goto LABEL_53;
    }
    v21 = a3;
    v22 = v15 + 664;
    v23 = 0;
    v24 = 32LL;
    do
    {
      v25 = *(_DWORD *)(v22 - 4);
      v22 -= 4LL;
      v23 += v25;
      --v24;
      v26 = *(_DWORD *)(v15 + 664);
      if ( v23 >= v26 )
        goto LABEL_53;
    }
    while ( v24 > a3 );
    if ( v23 < v26 )
    {
      v27 = (_QWORD *)*v16;
      while ( 1 )
      {
        v28 = (_QWORD *)*v27;
        v29 = v27;
        v27 = v28;
        v30 = (_QWORD *)v29[1];
        if ( (_QWORD *)v28[1] != v29 || (_QWORD *)*v30 != v29 )
          goto LABEL_71;
        *v30 = v28;
        v31 = 0;
        v28[1] = v30;
        v32 = v29[3];
        v52[0] = v21;
        v51 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v51);
          while ( *(_QWORD *)(v32 + 64) );
        }
        v21 = a3;
        if ( *(_BYTE *)(v32 + 388) != 5 )
          goto LABEL_28;
        v33 = (unsigned __int8)*(_DWORD *)(v32 + 540);
        if ( (_DWORD)v33 != a3 )
        {
          v41 = *(_DWORD *)(v32 + 540) & 0x100;
          if ( !v41 )
          {
            v45 = *(_QWORD *)(v32 + 232);
            _InterlockedDecrement((volatile signed __int32 *)(v45 + 4 * v33 + 536));
            _InterlockedIncrement((volatile signed __int32 *)(v45 + 4LL * a3 + 536));
          }
          *(_DWORD *)(v32 + 540) = (unsigned __int8)a3 | v41;
        }
        v31 = KiSignalThread(CurrentPrcb, v32, a2, v29);
        if ( !v31 )
          goto LABEL_47;
        *(_BYTE *)(v32 + 645) = 0;
        KiSetBasePriorityAndClearDecrement(v32, v52, 0LL);
        KiAdjustRealtimePriorityFloor(v32);
        v21 = a3;
        if ( a3 != *(char *)(v32 + 195) )
          break;
LABEL_28:
        *(_QWORD *)(v32 + 64) = 0LL;
        ++*((_BYTE *)v29 + 17);
        if ( v31 )
          goto LABEL_29;
        if ( v27 == (_QWORD *)(v15 + 8) )
        {
          v7 = a2;
          goto LABEL_53;
        }
      }
      v40 = *(_QWORD *)(v32 + 72) + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v32 + 651);
      if ( (*(_DWORD *)(v32 + 120) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(v32 + 120), 5u);
      *(_QWORD *)(v32 + 32) = v40;
      KiSetPriorityThread(v32, 0LL, a3);
LABEL_47:
      v21 = a3;
      goto LABEL_28;
    }
LABEL_53:
    ++*(_DWORD *)(v15 + 4);
    v42 = v15 + 16LL * v21 + 24;
    v43 = *(_QWORD **)(v42 + 8);
    if ( *v43 != v42 )
LABEL_71:
      __fastfail(3u);
    *v7 = v42;
    v7[1] = v43;
    *v43 = v7;
    *(_QWORD *)(v42 + 8) = v7;
LABEL_29:
    _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
    KiExitDispatcher((__int64)CurrentPrcb, 0, (struct _PROCESSOR_NUMBER)1, 0, v54);
    if ( (unsigned __int8)ExpNewThreadNecessary(v15, *(unsigned int *)(v15 + 720), v34, v35) )
      KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *v13) + 16LL), 0, 0);
    v5 = 1;
LABEL_32:
    LOBYTE(CurrentIrql) = v53;
  }
  if ( KiIrqlFlags )
  {
    v46 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v46 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v46 >= 2u )
    {
      v47 = KeGetCurrentPrcb();
      v48 = v47->SchedulerAssist;
      v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
      v50 = (v49 & v48[5]) == 0;
      v48[5] &= v49;
      if ( v50 )
        KiRemoveSystemWorkPriorityKick(v47);
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return v5;
}
