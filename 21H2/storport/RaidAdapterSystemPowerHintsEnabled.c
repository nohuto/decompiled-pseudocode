/*
 * XREFs of RaidAdapterSystemPowerHintsEnabled @ 0x1C00304B0
 * Callers:
 *     RaidCoalescingCallback @ 0x1C0030790 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C00328A0 (RaidPowerSettingCallback.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidAdapterSystemPowerHintsEnabled(_QWORD *a1)
{
  char result; // al

  result = 0;
  if ( a1[637] && a1[639] || a1[739] )
    return 1;
  return result;
}
