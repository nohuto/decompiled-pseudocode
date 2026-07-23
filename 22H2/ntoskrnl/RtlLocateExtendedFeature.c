/*
 * XREFs of RtlLocateExtendedFeature @ 0x14058F460
 * Callers:
 *     PspAllocateThread @ 0x1406C3E08 (PspAllocateThread.c)
 *     PspSetupUserShadowStack @ 0x14090A62C (PspSetupUserShadowStack.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x140380F40 (RtlLocateExtendedFeature2.c)
 */

PVOID __cdecl RtlLocateExtendedFeature(PCONTEXT_EX ContextEx, ULONG FeatureId, PULONG Length)
{
  return RtlLocateExtendedFeature2(ContextEx, FeatureId, 0xFFFFF780000003D8uLL, Length);
}
