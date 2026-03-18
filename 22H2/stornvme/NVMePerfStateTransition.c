/*
 * XREFs of NVMePerfStateTransition @ 0x1C000364C
 * Callers:
 *     NVMePowerActive @ 0x1C00035C0 (NVMePowerActive.c)
 *     NVMeMaxOperationalPower @ 0x1C000FBC4 (NVMeMaxOperationalPower.c)
 *     NVMePowerSetPerfState @ 0x1C0010420 (NVMePowerSetPerfState.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMePerfStateTransition(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1880) & 2) != 0
      && *(_BYTE *)(a1 + 1887) != *(_BYTE *)(a1 + 1888)
      && (unsigned int)StorPortExtendedFunction(66LL, a1, 0LL) == 0;
}
