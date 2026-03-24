/*
 * XREFs of NVMePerfStateTransition @ 0x1C000FDC8
 * Callers:
 *     NVMeMaxOperationalPower @ 0x1C000FCC0 (NVMeMaxOperationalPower.c)
 *     NVMePowerSetPerfState @ 0x1C00106D0 (NVMePowerSetPerfState.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMePerfStateTransition(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( (*(_DWORD *)(a1 + 1664) & 2) != 0 && *(_BYTE *)(a1 + 1671) != *(_BYTE *)(a1 + 1672) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - POWER: Requesting transition to P%u\n", *(unsigned __int8 *)(a1 + 1672));
    if ( !(unsigned int)StorPortExtendedFunction(66LL, a1, 0LL, 0LL) )
      return 1;
  }
  return result;
}
