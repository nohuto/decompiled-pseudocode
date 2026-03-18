/*
 * XREFs of GreUnlockSprite @ 0x1C0033850
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 GreUnlockSprite()
{
  __int64 result; // rax

  result = EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    return PsLeavePriorityRegion();
  }
  return result;
}
