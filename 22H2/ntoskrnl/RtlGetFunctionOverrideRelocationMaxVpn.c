/*
 * XREFs of RtlGetFunctionOverrideRelocationMaxVpn @ 0x14067BDF4
 * Callers:
 *     MiRelocateImage @ 0x1406A9460 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetFunctionOverrideRelocationMaxVpn(__int64 a1)
{
  return *(unsigned int *)(a1 + 28);
}
