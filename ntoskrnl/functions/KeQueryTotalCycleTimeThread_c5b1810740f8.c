ULONG64 __stdcall KeQueryTotalCycleTimeThread(PKTHREAD Thread, PULONG64 CycleTimeStamp)
{
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  char v8; // r11
  volatile unsigned __int8 State; // r12
  __int64 v10; // rsi
  volatile signed __int32 *v11; // rdi
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 NextProcessor; // r14
  __int64 v17; // rax
  volatile unsigned int v18; // r14d
  unsigned __int8 v19; // cl
  _DWORD *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  volatile unsigned __int64 CycleTime; // r14
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v26; // r9
  int v27; // edx
  bool v28; // zf
  __int64 v29; // [rsp+30h] [rbp-D0h] BYREF
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+3Ch] [rbp-C4h] BYREF
  PULONG64 v32; // [rsp+40h] [rbp-C0h]
  _DWORD v33[68]; // [rsp+50h] [rbp-B0h] BYREF

  v32 = CycleTimeStamp;
  memset(v33, 0, 0x108uLL);
  v29 = 0LL;
  if ( Thread == KeGetCurrentThread() )
    return KeUpdateTotalCyclesCurrentThread((__int64)Thread, CycleTimeStamp);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v7 = 4;
    if ( CurrentIrql != 2 )
      v7 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v7;
  }
  v30 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v30);
    while ( Thread->ThreadLock );
  }
  while ( 2 )
  {
    v8 = 1;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          State = Thread->State;
          v10 = 0LL;
          v11 = 0LL;
          v12 = (unsigned int)State - 1;
          if ( State != 1 )
            break;
          NextProcessor = Thread->NextProcessor;
          if ( (int)NextProcessor >= 0 )
          {
            v10 = KiProcessorBlock[NextProcessor];
            KiAcquirePrcbLocksForIsolationUnit(v10, 0LL, &v29);
            v8 = 1;
            if ( Thread->WaitBlockFill6[68] == 1 && Thread->NextProcessor == (_DWORD)NextProcessor )
              goto LABEL_41;
            KiReleasePrcbLocksForIsolationUnit(&v29);
          }
          else
          {
            v17 = (unsigned int)NextProcessor;
            LODWORD(v17) = NextProcessor & 0x7FFFFFFF;
            v31 = 0;
            v11 = *(volatile signed __int32 **)(KiProcessorBlock[v17] + 34888);
            while ( _interlockedbittestandset64(v11, 0LL) )
            {
              do
                KeYieldProcessorEx(&v31);
              while ( *(_QWORD *)v11 );
            }
            v8 = 1;
            if ( Thread->WaitBlockFill6[68] == 1 && Thread->NextProcessor == (_DWORD)NextProcessor )
              goto LABEL_41;
            _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
          }
        }
        if ( State == 2 )
          goto LABEL_21;
        v12 = (unsigned int)State - 3;
        if ( State == 3 )
          break;
        if ( State != 5 )
          goto LABEL_41;
        v13 = Thread->WaitRegister.Flags & 7;
        if ( v13 == v8 || (unsigned __int8)(v13 - 3) <= 3u )
          goto LABEL_41;
        State = 2;
LABEL_21:
        v14 = Thread->NextProcessor;
        if ( (int)v14 >= 0 )
        {
          v10 = KiProcessorBlock[v14];
          KiAcquirePrcbLocksForIsolationUnit(v10, 0LL, &v29);
          if ( Thread == *(PKTHREAD *)(v10 + 8) )
            goto LABEL_40;
          goto LABEL_23;
        }
      }
      v15 = Thread->NextProcessor;
    }
    while ( (int)v15 < 0 );
    v10 = KiProcessorBlock[v15];
    KiAcquirePrcbLocksForIsolationUnit(v10, 0LL, &v29);
    if ( Thread != *(PKTHREAD *)(v10 + 16) )
    {
      if ( Thread->WaitBlockFill6[68] == 3 && Thread->NextProcessor == (_DWORD)v15 )
        __fastfail(0x1Eu);
LABEL_23:
      KiReleasePrcbLocksForIsolationUnit(&v29);
      continue;
    }
    break;
  }
LABEL_40:
  v8 = 1;
LABEL_41:
  if ( State == 2 )
  {
    v18 = Thread->NextProcessor;
    if ( v10 )
      KiReleasePrcbLocksForIsolationUnit(&v29);
    if ( v11 )
      _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
    Thread->ThreadLock = 0LL;
    v33[0] = 2097153;
    memset(&v33[1], 0, 0x104uLL);
    KeAddProcessorAffinityEx(v33, v18);
    v19 = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v19 <= 0xFu )
    {
      v20 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v19 == 12 )
        LODWORD(v21) = 4096;
      else
        v21 = (-1LL << (v19 + 1)) & 0x1FFC;
      v20[5] |= v21;
    }
    KiIpiSendPacket(0, (unsigned int)v33, (unsigned int)xHalTimerWatchdogStop, 0, 0LL, 0LL);
    KiIpiStallOnPacketTargetsPrcb(v22, KeGetCurrentPrcb());
    *v32 = __rdtsc();
    CycleTime = Thread->CycleTime;
  }
  else
  {
    if ( Thread->Running )
    {
      LOBYTE(v12) = v8;
      KeFlushProcessWriteBuffers(v12);
    }
    *v32 = __rdtsc();
    CycleTime = Thread->CycleTime;
    if ( v10 )
      KiReleasePrcbLocksForIsolationUnit(&v29);
    if ( v11 )
      _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
    Thread->ThreadLock = 0LL;
  }
  if ( KiIrqlFlags )
  {
    v24 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v26 = CurrentPrcb->SchedulerAssist;
      v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v28 = (v27 & v26[5]) == 0;
      v26[5] &= v27;
      if ( v28 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return CycleTime;
}
