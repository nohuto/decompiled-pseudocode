/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x140794698
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1403AD204 (RtlpMuiRegCreateKernelRegistryInfo.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v1; // rbx
  _DWORD *result; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xA8uLL, 0x72746C6Du);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag + 1, 0, 0xA4uLL);
  result = v1;
  *v1 = 1024;
  return result;
}
