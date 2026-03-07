__int64 __fastcall EtwpStopLoggerInstance(unsigned __int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  unsigned int v5; // ebp
  __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r14
  ULONG_PTR v9; // rcx
  _OWORD v10[2]; // [rsp+20h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 1096);
  _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x40u);
  if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 )
  {
    memset(v10, 0, sizeof(v10));
    EtwpUpdateGroupMasks(a1, v10);
  }
  if ( (*(_DWORD *)(a1 + 816) & 0x20) == 0 )
    EtwpDisableTraceProviders(v1, *(_DWORD *)a1);
  if ( (*(_DWORD *)(a1 + 816) & 0x4000) != 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = v1 + 2LL * v5;
      if ( *(unsigned __int16 *)(v6 + 4048) == *(_DWORD *)a1 )
        break;
      if ( ++v5 >= 8 )
        goto LABEL_6;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1 + 432, 0LL);
    v8 = 32LL * v5;
    *(_BYTE *)(v1 + 4064) &= ~(1 << v5);
    *(_OWORD *)(v8 + v1 + 152) = 0LL;
    *(_OWORD *)(v8 + v1 + 168) = 0LL;
    *(_WORD *)(v6 + 4048) = 0;
    *(_QWORD *)(v1 + 440) = 0LL;
    ExReleasePushLockEx((__int64 *)(v1 + 432), 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
LABEL_6:
  if ( (*(_DWORD *)(a1 + 12) & 0x400) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 816) & 0x800) != 0 )
      EtwpLogPmcCounterRundown(a1, *(unsigned int *)a1);
    if ( (*(_DWORD *)(a1 + 816) & 0x1000000) != 0 )
      EtwpStackRundown(*(_QWORD *)(a1 + 1008), v1, *(_DWORD *)a1);
  }
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 320), 0) )
    return 2147483685LL;
  v3 = *(_QWORD *)(a1 + 1080);
  if ( v3 )
  {
    v9 = *(_QWORD *)(v3 + 8);
    if ( v9 )
      ExCancelTimer(v9, 0LL);
  }
  *(_QWORD *)(*(_QWORD *)(v1 + 456) + 8LL * *(unsigned int *)a1) = a1 | 1;
  if ( ObGetCurrentIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 8u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)(a1 + 480), 0, 0);
  }
  EtwpSendSessionNotification(a1, 2LL, 0LL);
  return 0LL;
}
