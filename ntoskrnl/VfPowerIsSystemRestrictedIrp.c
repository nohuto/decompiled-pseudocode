/*
 * XREFs of VfPowerIsSystemRestrictedIrp @ 0x140AE4740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfPowerIsSystemRestrictedIrp(__int64 a1)
{
  return !*(_BYTE *)(a1 + 1) || *(_BYTE *)(a1 + 1) != 1;
}
