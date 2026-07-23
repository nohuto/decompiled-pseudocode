/*
 * XREFs of VmFreePreallocationForRangeCreate @ 0x14092F180
 * Callers:
 *     <none>
 * Callees:
 *     VmpDecodePreallocationRangeHandle @ 0x14092F7A4 (VmpDecodePreallocationRangeHandle.c)
 *     VmpFreeMemoryRanges @ 0x14092F7F8 (VmpFreeMemoryRanges.c)
 */

__int64 VmFreePreallocationForRangeCreate()
{
  unsigned __int64 v0; // rcx
  void *v1; // rax

  v0 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5];
  if ( !v0 )
    NT_ASSERT("0");
  v1 = (void *)VmpDecodePreallocationRangeHandle(v0);
  return VmpFreeMemoryRanges(v1);
}
