/*
 * XREFs of TtmiWriteEventToSingleQueue @ 0x14090585C
 * Callers:
 *     TtmpPublishDeviceEvent @ 0x1408FD0D0 (TtmpPublishDeviceEvent.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1408FF63C (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x1408FF6D8 (TtmiWriteEventToAllQueues.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x140900748 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     memset @ 0x140414300 (memset.c)
 *     TtmiLogError @ 0x140902C24 (TtmiLogError.c)
 *     TtmiLogQueueEnqueueEvent @ 0x140903668 (TtmiLogQueueEnqueueEvent.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall TtmiWriteEventToSingleQueue(__int64 a1, _OWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  int v6; // edx
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
  v5 = 0;
  if ( !*(_BYTE *)(a1 + 168) )
  {
    v5 = -1073740032;
    v6 = 412;
LABEL_3:
    TtmiLogError("TtmiWriteEventToSingleQueue", v6, -1, v5);
    goto LABEL_11;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x230uLL, 0x716D7454u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v5 = -1073741670;
    v6 = 425;
    goto LABEL_3;
  }
  memset(PoolWithTag, 0, 0x230uLL);
  v9 = 4LL;
  v10 = v8 + 2;
  do
  {
    *v10 = *a2;
    v10[1] = a2[1];
    v10[2] = a2[2];
    v10[3] = a2[3];
    v10[4] = a2[4];
    v10[5] = a2[5];
    v10[6] = a2[6];
    v10 += 8;
    v11 = a2[7];
    a2 += 8;
    *(v10 - 1) = v11;
    --v9;
  }
  while ( v9 );
  *v10 = *a2;
  v10[1] = a2[1];
  TtmiLogQueueEnqueueEvent();
  v12 = *(_QWORD **)(a1 + 160);
  if ( *v12 != a1 + 152 )
    __fastfail(3u);
  v8[1] = v12;
  *v8 = a1 + 152;
  *v12 = v8;
  *(_QWORD *)(a1 + 160) = v8;
  KeSetEvent((PRKEVENT)(a1 + 128), 0, 0);
LABEL_11:
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  return v5;
}
