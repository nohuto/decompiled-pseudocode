/*
 * XREFs of RtlLocateExtendedFeature @ 0x14058F520
 * Callers:
 *     PspAllocateThread @ 0x14064B048 (PspAllocateThread.c)
 *     PspSetupUserShadowStack @ 0x14090A5DC (PspSetupUserShadowStack.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x140381600 (RtlLocateExtendedFeature2.c)
 */

char *__fastcall RtlLocateExtendedFeature(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  return RtlLocateExtendedFeature2(a1, a2, 0xFFFFF780000003D8uLL, a3);
}
