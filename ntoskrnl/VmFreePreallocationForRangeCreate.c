/*
 * XREFs of VmFreePreallocationForRangeCreate @ 0x1409D9980
 * Callers:
 *     <none>
 * Callees:
 *     VmpDecodePreallocationRangeHandle @ 0x1409DA368 (VmpDecodePreallocationRangeHandle.c)
 *     VmpFreeMemoryRanges @ 0x1409DA3BC (VmpFreeMemoryRanges.c)
 */

__int64 VmFreePreallocationForRangeCreate()
{
  unsigned __int64 v0; // rcx
  void *v1; // rax

  v0 = KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5];
  if ( !v0 )
    NT_ASSERT("0");
  v1 = (void *)VmpDecodePreallocationRangeHandle(v0);
  return VmpFreeMemoryRanges(v1);
}
