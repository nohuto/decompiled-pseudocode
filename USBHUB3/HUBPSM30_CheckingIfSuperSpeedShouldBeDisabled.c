/*
 * XREFs of HUBPSM30_CheckingIfSuperSpeedShouldBeDisabled @ 0x1C0012F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM30_CheckingIfSuperSpeedShouldBeDisabled(__int64 a1)
{
  return (*(_DWORD *)(**(_QWORD **)(a1 + 960) + 40LL) & 0x800000) != 0 ? 3089 : 3005;
}
