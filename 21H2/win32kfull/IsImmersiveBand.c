/*
 * XREFs of IsImmersiveBand @ 0x1C00AEB40
 * Callers:
 *     ?xxxProcessTopologyChange@CRecalcProp@@AEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AF100 (-xxxProcessTopologyChange@CRecalcProp@@AEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcConte.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00AEDA4 (IsNonImmersiveBand.c)
 */

_BOOL8 __fastcall IsImmersiveBand(__int64 a1)
{
  return (unsigned int)IsNonImmersiveBand(a1) == 0;
}
