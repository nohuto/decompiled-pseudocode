/*
 * XREFs of PopPublishPowerButtonState @ 0x140993B84
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140596C60 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopPublishPowerButtonState(__int64 a1)
{
  DbgPrintEx(
    0x92u,
    3u,
    "Power button hold update (down: %d, time: %d ms, sequence: %d, InstanceGuid: %08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X)\n",
    *(_DWORD *)a1 & 1,
    *(_DWORD *)a1 >> 1,
    *(_DWORD *)(a1 + 4),
    *(_DWORD *)(a1 + 8),
    *(unsigned __int16 *)(a1 + 12),
    *(unsigned __int16 *)(a1 + 14),
    *(unsigned __int8 *)(a1 + 16),
    *(unsigned __int8 *)(a1 + 17),
    *(unsigned __int8 *)(a1 + 18),
    *(unsigned __int8 *)(a1 + 19),
    *(unsigned __int8 *)(a1 + 20),
    *(unsigned __int8 *)(a1 + 21),
    *(unsigned __int8 *)(a1 + 22),
    *(unsigned __int8 *)(a1 + 23));
  return ZwUpdateWnfStateData((__int64)&WNF_PO_POWER_BUTTON_STATE, a1);
}
