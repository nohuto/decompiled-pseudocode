/*
 * XREFs of VfPowerIsSystemRestrictedIrp @ 0x1409E42D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfPowerIsSystemRestrictedIrp(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) != 1;
}
