void __fastcall CiThreadNotification(HANDLE ProcessId, HANDLE ThreadId, BOOLEAN Create)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx

  if ( Create )
    return;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = KeGetCurrentThread();
  v5 = *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
  if ( ((__int64)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink & 1) != 0 )
  {
    if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
    {
      *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 0);
      return;
    }
    v5 = (unsigned __int64)&WPP_MAIN_CB.DeviceQueue ^ *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
  }
  if ( !v5 )
    goto LABEL_6;
  do
  {
    if ( (unsigned __int64)CurrentThread >= *(_QWORD *)(v5 + 56) )
    {
      if ( (unsigned __int64)CurrentThread <= *(_QWORD *)(v5 + 56) )
        break;
      v6 = *(_QWORD *)(v5 + 8);
      if ( ((__int64)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink & 1) != 0 && v6 )
      {
LABEL_14:
        v5 ^= v6;
        continue;
      }
    }
    else
    {
      v6 = *(_QWORD *)v5;
      if ( ((__int64)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink & 1) != 0 && v6 )
        goto LABEL_14;
    }
    v5 = v6;
  }
  while ( v5 );
  if ( v5 )
  {
    v4 = v5 - 40;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 - 40 + 32)) <= 1 )
      __fastfail(0xEu);
  }
LABEL_6:
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 0);
  if ( v4 )
  {
    CiThreadCleanup(v4);
    CiThreadDereference(v4);
  }
}
