/*
 * XREFs of RaidAdapterGetSystemPowerHint @ 0x1C002CCEC
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C002F9F4 (RaidAdapterStartDevice.c)
 *     RaidCoalescingCallback @ 0x1C0030790 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C00328A0 (RaidPowerSettingCallback.c)
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
