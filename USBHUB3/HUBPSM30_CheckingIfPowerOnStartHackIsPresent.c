/*
 * XREFs of HUBPSM30_CheckingIfPowerOnStartHackIsPresent @ 0x1C0013B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM30_CheckingIfPowerOnStartHackIsPresent(__int64 a1)
{
  return (*(_DWORD *)(**(_QWORD **)(a1 + 960) + 40LL) & 0x2000) != 0 ? 3089 : 3005;
}
