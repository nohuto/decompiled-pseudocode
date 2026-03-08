/*
 * XREFs of PfSnPrefetchSectionsCleanup @ 0x1407E196C
 * Callers:
 *     PfSnPrefetchSections @ 0x1407E16A0 (PfSnPrefetchSections.c)
 * Callees:
 *     ExInitializePushLock @ 0x140238200 (ExInitializePushLock.c)
 *     KeQueryPriorityThread @ 0x140240EA0 (KeQueryPriorityThread.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __fastcall PfSnPrefetchSectionsCleanup(unsigned __int64 a1, int a2, unsigned int a3, __int64 a4)
{
  struct _WORK_QUEUE_ITEM *v4; // r14
  __int64 v8; // r15
  KPRIORITY PriorityThread; // edi
  _QWORD *p_WorkerRoutine; // rbx
  struct _EX_RUNDOWN_REF RunRef[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+40h] [rbp-28h]

  v4 = *(struct _WORK_QUEUE_ITEM **)(a1 + 88);
  v8 = a3;
  memset(v4, 0, 48LL * a3);
  *(_OWORD *)&RunRef[0].Count = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  ExInitializePushLock(RunRef);
  RunRef[1].Count = a1;
  LODWORD(v14) = a2;
  *(_QWORD *)&v13 = a4;
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  if ( a3 )
  {
    p_WorkerRoutine = &v4->WorkerRoutine;
    do
    {
      p_WorkerRoutine[2] = RunRef;
      *(p_WorkerRoutine - 2) = 0LL;
      *p_WorkerRoutine = PfSnSectionInfoCleanupWorkItem;
      p_WorkerRoutine[1] = v4;
      ExAcquireRundownProtection_0(RunRef);
      ExQueueWorkItem(v4, (WORK_QUEUE_TYPE)(PriorityThread + 32));
      v4 = (struct _WORK_QUEUE_ITEM *)((char *)v4 + 48);
      p_WorkerRoutine += 6;
      --v8;
    }
    while ( v8 );
  }
  ExWaitForRundownProtectionRelease(RunRef);
}
