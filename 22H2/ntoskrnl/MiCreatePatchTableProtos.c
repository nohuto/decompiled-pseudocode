/*
 * XREFs of MiCreatePatchTableProtos @ 0x140A36740
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     memset @ 0x140435400 (memset.c)
 *     MiLockPagedRange @ 0x140748850 (MiLockPagedRange.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void *MiCreatePatchTableProtos()
{
  SIZE_T v0; // rdi
  PVOID Pool; // rax
  void *v2; // rbx

  v0 = 8LL * (((unsigned int)dword_140C6997C >> 12) + ((dword_140C6997C & 0xFFF) != 0));
  Pool = MiAllocatePool(274, v0, 0x74536D4Du);
  v2 = Pool;
  if ( !Pool )
    return 0LL;
  if ( !(unsigned int)MiLockPagedRange((__int64)Pool, v0) )
  {
    ExFreePoolWithTag(v2, 0);
    return 0LL;
  }
  memset(v2, 0, v0);
  return v2;
}
