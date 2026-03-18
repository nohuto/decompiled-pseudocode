/*
 * XREFs of ?IsCompositionThread@CPartitionVerticalBlankScheduler@@UEBA_NXZ @ 0x1800F9760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CPartitionVerticalBlankScheduler::IsCompositionThread(CPartitionVerticalBlankScheduler *this)
{
  return GetCurrentThreadId() == *((_DWORD *)this + 2326);
}
