/*
 * XREFs of KeDoesSystemHaveHeterogeneousCoreTypes @ 0x1403F2180
 * Callers:
 *     KiConfigureSchedulingInformation @ 0x14099F9F0 (KiConfigureSchedulingInformation.c)
 * Callees:
 *     <none>
 */

ULONG_PTR KeDoesSystemHaveHeterogeneousCoreTypes()
{
  return (KeFeatureBits >> 53) & 1;
}
