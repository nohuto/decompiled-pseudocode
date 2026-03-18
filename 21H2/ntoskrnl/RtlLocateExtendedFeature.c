/*
 * XREFs of RtlLocateExtendedFeature @ 0x1405E7C30
 * Callers:
 *     PspAllocateThread @ 0x1407A34A0 (PspAllocateThread.c)
 *     PspSetupUserShadowStack @ 0x1409AFB7C (PspSetupUserShadowStack.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x14025CB30 (RtlLocateExtendedFeature2.c)
 */

char *__fastcall RtlLocateExtendedFeature(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  return RtlLocateExtendedFeature2(a1, a2, 0xFFFFF780000003D8uLL, a3);
}
