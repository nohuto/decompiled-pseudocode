/*
 * XREFs of KeAbPreWakeupThread @ 0x140271FC0
 * Callers:
 *     KeSetEventBoostPriorityEx @ 0x140271E08 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseMutant @ 0x1402C2B40 (KeReleaseMutant.c)
 * Callees:
 *     KiAbApplyWakeupBoost @ 0x140271FFC (KiAbApplyWakeupBoost.c)
 *     KiAbFindWakeupLockEntry @ 0x140272208 (KiAbFindWakeupLockEntry.c)
 */

__int64 __fastcall KeAbPreWakeupThread(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = KiAbFindWakeupLockEntry(a2, a1);
  if ( result )
    return KiAbApplyWakeupBoost(a3, result, 1LL);
  return result;
}
