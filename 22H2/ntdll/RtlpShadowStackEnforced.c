/*
 * XREFs of RtlpShadowStackEnforced @ 0x18010B178
 * Callers:
 *     RtlRaiseException @ 0x1800520D0 (RtlRaiseException.c)
 * Callees:
 *     <none>
 */

_BOOL8 RtlpShadowStackEnforced()
{
  return ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) == 1;
}
