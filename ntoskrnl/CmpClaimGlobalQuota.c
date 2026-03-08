/*
 * XREFs of CmpClaimGlobalQuota @ 0x14072C8EC
 * Callers:
 *     CmpAllocateForNonPagedHive @ 0x1406140E0 (CmpAllocateForNonPagedHive.c)
 *     CmpAllocate @ 0x14072C880 (CmpAllocate.c)
 *     HvpAddBin @ 0x14072F9F0 (HvpAddBin.c)
 *     HvpMapHiveImageFromViewMap @ 0x14073051C (HvpMapHiveImageFromViewMap.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407FF548 (HvpBuildMapForMemoryBackedHive.c)
 *     HvpAllocateNonPagedBin @ 0x140A274CC (HvpAllocateNonPagedBin.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     CmpUpdateGlobalQuotaAllowed @ 0x14072C940 (CmpUpdateGlobalQuotaAllowed.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

char __fastcall CmpClaimGlobalQuota(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  CmpUpdateGlobalQuotaAllowed(a1, a2, (unsigned int)a1);
  if ( !(_DWORD)v2 || v2 >= CmpGlobalQuotaAllowed - CmpGlobalQuotaUsed )
    return 0;
  _InterlockedExchangeAdd((volatile signed __int32 *)&CmpGlobalQuotaUsed, v2);
  if ( CmpGlobalQuotaUsed > (unsigned __int64)CmpGlobalQuotaWarning
    && !CmpQuotaWarningPopupDisplayed
    && ExReadyForErrors )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 538987843LL);
    if ( Pool2 )
    {
      Pool2->List.Flink = 0LL;
      Pool2->WorkerRoutine = (void (__fastcall *)(void *))CmpQuotaWarningWorker;
      CmpQuotaWarningPopupDisplayed = 1;
      Pool2->Parameter = Pool2;
      ExQueueWorkItem(Pool2, DelayedWorkQueue);
    }
  }
  return 1;
}
