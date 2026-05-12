/*
 * XREFs of RaidAdapterGetSystemPowerHint @ 0x1C002CCCC
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C002F9D4 (RaidAdapterStartDevice.c)
 *     RaidCoalescingCallback @ 0x1C0030770 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C0032880 (RaidPowerSettingCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterGetSystemPowerHint(__int64 a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
    return (unsigned int)(*(_BYTE *)(a1 + 108) >= 0) + 2;
  return result;
}
