/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x1801044C0
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180070050 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 */

_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *result; // rax

  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xA8uLL);
  if ( result )
    *result |= 0x400u;
  return result;
}
