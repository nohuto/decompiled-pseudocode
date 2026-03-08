/*
 * XREFs of RtlLocateExtendedFeature @ 0x14045BC10
 * Callers:
 *     PspAllocateThread @ 0x1406B00F4 (PspAllocateThread.c)
 *     PspSetupUserShadowStack @ 0x1409AEB6C (PspSetupUserShadowStack.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x14045BC40 (RtlLocateExtendedFeature2.c)
 */

__int64 __fastcall RtlLocateExtendedFeature(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlLocateExtendedFeature2(a1, a2, 0xFFFFF780000003D8uLL, a3);
}
