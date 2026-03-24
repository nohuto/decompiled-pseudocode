/*
 * XREFs of ?GetCurrentQPCTime@CPartitionVerticalBlankScheduler@@UEBA_KXZ @ 0x1800E1B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CPartitionVerticalBlankScheduler::GetCurrentQPCTime(CPartitionVerticalBlankScheduler *this)
{
  return *((_QWORD *)this + 1990);
}
