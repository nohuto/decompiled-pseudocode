__int64 __fastcall KeInsertQueueApc(__int64 a1, __int64 a2, _DWORD *SchedulerAssist, unsigned int a4)
{
  _DWORD *v5; // r12
  __int64 v8; // rax
  bool v9; // r10
  char v10; // cl
  __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rdx
  bool v13; // al
  char v14; // r14
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int8 v17; // bl
  __int64 v19; // r9
  int v20; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+48h] [rbp-40h]
  __int64 v22; // [rsp+50h] [rbp-38h]
  char v23; // [rsp+90h] [rbp+8h]

  v5 = SchedulerAssist;
  v9 = 0;
  if ( EtwThreatIntProvRegHandle )
  {
    if ( (v8 = *(_QWORD *)(EtwThreatIntProvRegHandle + 32), *(_DWORD *)(v8 + 96))
      && (*(_DWORD *)(v8 + 112) & 0x3000LL) != 0
      && (*(_QWORD *)(v8 + 120) & 0x3000LL) == *(_QWORD *)(v8 + 120)
      || *(_BYTE *)(EtwThreatIntProvRegHandle + 101)
      && EtwpLevelKeywordEnabled(*(_QWORD *)(EtwThreatIntProvRegHandle + 40) + 96LL, 0, 12288LL) )
    {
      v9 = 1;
    }
  }
  v10 = *(_BYTE *)(a1 + 81);
  v21 = *(_QWORD *)(a1 + 56);
  v22 = *(_QWORD *)(a1 + 48);
  v23 = v10 != 0;
  if ( *(__int64 (__fastcall **)(int, int, int, int, __int64))(a1 + 32) != KeSpecialUserApcKernelRoutine || v10 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    LOBYTE(SchedulerAssist) = 0;
    CurrentThread = KeGetCurrentThread();
    if ( v10 )
    {
      v13 = CurrentThread->Process != *(_KPROCESS **)(v11 + 544);
      goto LABEL_9;
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 8);
    LOBYTE(SchedulerAssist) = 1;
    CurrentThread = KeGetCurrentThread();
  }
  v13 = CurrentThread->ApcState.Process != *(_KPROCESS **)(v11 + 544);
LABEL_9:
  if ( v9 && v13 && (v10 || (_BYTE)SchedulerAssist) )
  {
    v14 = 1;
    ObfReferenceObjectWithTag((PVOID)v11, 0x5149654Bu);
  }
  else
  {
    v14 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v19) = 4;
    else
      v19 = (-1LL << (CurrentIrql + 1)) & 4;
    CurrentThread = (struct _KTHREAD *)((unsigned int)v19 | SchedulerAssist[5]);
    SchedulerAssist[5] = (_DWORD)CurrentThread;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v20 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v20);
    while ( *(_QWORD *)(v11 + 64) );
  }
  if ( (*(_DWORD *)(v11 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v17 = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_QWORD *)(a1 + 72) = v5;
    KiInsertQueueApc(a1, CurrentThread, SchedulerAssist);
    KiSignalThreadForApc(CurrentPrcb, a1, CurrentIrql);
    v17 = 1;
  }
  *(_QWORD *)(v11 + 64) = 0LL;
  KiExitDispatcher((__int64)CurrentPrcb, 0, (struct _PROCESSOR_NUMBER)1, a4, CurrentIrql);
  if ( v14 )
  {
    if ( v17 )
      EtwTiLogInsertQueueUserApc((unsigned __int8)KeGetCurrentThread()->PreviousMode, v11, v22, v21, a2, (char)v5, v23);
    ObfDereferenceObjectWithTag((PVOID)v11, 0x5149654Bu);
  }
  return v17;
}
