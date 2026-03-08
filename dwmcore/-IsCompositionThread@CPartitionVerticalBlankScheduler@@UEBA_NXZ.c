/*
 * XREFs of ?IsCompositionThread@CPartitionVerticalBlankScheduler@@UEBA_NXZ @ 0x1800F8B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CPartitionVerticalBlankScheduler::IsCompositionThread(CPartitionVerticalBlankScheduler *this)
{
  return GetCurrentThreadId() == *((_DWORD *)this + 2326);
}
