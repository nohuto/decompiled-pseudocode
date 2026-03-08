/*
 * XREFs of ?GetNextFrameStartTime@CPartitionVerticalBlankScheduler@@UEBA_KXZ @ 0x1800F6F10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSmoothedDuration@CPartitionVerticalBlankScheduler@@UEBA_KXZ @ 0x18004A340 (-GetSmoothedDuration@CPartitionVerticalBlankScheduler@@UEBA_KXZ.c)
 */

unsigned __int64 __fastcall CPartitionVerticalBlankScheduler::GetNextFrameStartTime(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2)
{
  return *(_QWORD *)(*((_QWORD *)this + 526) + 64LL) + CPartitionVerticalBlankScheduler::GetSmoothedDuration(this, a2);
}
