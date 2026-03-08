/*
 * XREFs of KeAbPreWakeupThread @ 0x1402398AC
 * Callers:
 *     KeSetEventBoostPriorityEx @ 0x1402396C0 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseMutantEx @ 0x14040A86C (KeReleaseMutantEx.c)
 * Callees:
 *     KiAbFindWakeupLockEntry @ 0x1402398E8 (KiAbFindWakeupLockEntry.c)
 *     KiAbApplyWakeupBoost @ 0x140239F90 (KiAbApplyWakeupBoost.c)
 */

__int64 __fastcall KeAbPreWakeupThread(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = KiAbFindWakeupLockEntry(a2, a1);
  if ( result )
    return KiAbApplyWakeupBoost(a3, result);
  return result;
}
