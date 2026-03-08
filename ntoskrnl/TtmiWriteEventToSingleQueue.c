/*
 * XREFs of TtmiWriteEventToSingleQueue @ 0x1409A92D8
 * Callers:
 *     TtmpPublishDeviceEvent @ 0x1409A0904 (TtmpPublishDeviceEvent.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1409A1E3C (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x1409A1ED8 (TtmiWriteEventToAllQueues.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1409A2F00 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     TtmiLogQueueEnqueueEvent @ 0x1409A5F50 (TtmiLogQueueEnqueueEvent.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall TtmiWriteEventToSingleQueue(__int64 a1, _OWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  int v6; // edx
  __int64 Pool2; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  _QWORD *v12; // rcx

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
  Pool2 = ExAllocatePool2(256LL, 560LL, 1902998612LL);
  v8 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    v5 = -1073741670;
    v6 = 425;
    goto LABEL_3;
  }
  v9 = 4LL;
  v10 = (_OWORD *)(Pool2 + 16);
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
  KeLeaveCriticalRegion();
  return v5;
}
