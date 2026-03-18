/*
 * XREFs of VfMiscKeInitializeTimerEx_Entry @ 0x140AA4120
 * Callers:
 *     <none>
 * Callees:
 *     KeCheckForTimer @ 0x14056DBFC (KeCheckForTimer.c)
 *     ViMiscValidateSynchronizationObject @ 0x140AA59E0 (ViMiscValidateSynchronizationObject.c)
 */

int __fastcall VfMiscKeInitializeTimerEx_Entry(__int64 a1)
{
  int result; // eax

  result = ViMiscValidateSynchronizationObject(*(_QWORD *)(a1 + 16));
  if ( (VfRuleClasses & 0x400000) == 0 )
    return KeCheckForTimer(*(_QWORD *)(a1 + 16), 64LL);
  return result;
}
