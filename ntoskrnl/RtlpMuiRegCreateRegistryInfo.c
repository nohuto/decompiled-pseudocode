/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x140843F60
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x14039C764 (RtlpMuiRegCreateKernelRegistryInfo.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *result; // rax

  result = (_DWORD *)ExAllocatePool2(256LL, 168LL, 1920232557LL);
  if ( !result )
    return 0LL;
  *result |= 0x400u;
  return result;
}
