__int64 __fastcall MiAllocatePartitionId(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rdi
  ULONG ClearBitsAndSet; // eax
  unsigned __int16 v7; // di
  bool v8; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140C67008, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C67008, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140C67008, v3, (__int64)&qword_140C67008);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  do
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140C67028, 1u, 0);
    v7 = ClearBitsAndSet;
    if ( ClearBitsAndSet != 0xFFFFFFFFLL )
    {
      byte_140C67A54 = 1;
      *(_QWORD *)(qword_140C67048 + 8LL * (unsigned __int16)ClearBitsAndSet) = a1;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C67008, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C67008);
      KeAbPostRelease((ULONG_PTR)&qword_140C67008);
      v8 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v8
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      return v7;
    }
  }
  while ( (unsigned int)MiExpandPartitionIds() );
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C67008, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C67008);
  KeAbPostRelease((ULONG_PTR)&qword_140C67008);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return 0LL;
}
