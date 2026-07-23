/*
 * XREFs of RtlLocateExtendedFeature @ 0x14058F750
 * Callers:
 *     PspAllocateThread @ 0x14063FE68 (PspAllocateThread.c)
 *     PspSetupUserShadowStack @ 0x14090A73C (PspSetupUserShadowStack.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x140381150 (RtlLocateExtendedFeature2.c)
 */

PVOID __cdecl RtlLocateExtendedFeature(PCONTEXT_EX ContextEx, ULONG FeatureId, PULONG Length)
{
  return RtlLocateExtendedFeature2(ContextEx, FeatureId, 0xFFFFF780000003D8uLL, Length);
}
