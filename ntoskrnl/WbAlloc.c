/*
 * XREFs of WbAlloc @ 0x1406AF510
 * Callers:
 *     WbDispatchOperation @ 0x1406AECD0 (WbDispatchOperation.c)
 *     WbInitializeEncryptionSegment @ 0x140752A00 (WbInitializeEncryptionSegment.c)
 *     WbAllocateMemoryBlock @ 0x140753534 (WbAllocateMemoryBlock.c)
 *     sub_140753BB4 @ 0x140753BB4 (sub_140753BB4.c)
 *     WbHashData @ 0x1407544E8 (WbHashData.c)
 *     WbReAlloc @ 0x14075521C (WbReAlloc.c)
 *     sub_1407554B8 @ 0x1407554B8 (sub_1407554B8.c)
 *     WbValidateEncryptionSegmentArguments @ 0x140755A20 (WbValidateEncryptionSegmentArguments.c)
 *     WbProcessModuleUnload @ 0x140770A30 (WbProcessModuleUnload.c)
 *     WbCreateWarbirdProcess @ 0x1407987BC (WbCreateWarbirdProcess.c)
 *     WbProcessStartup @ 0x140798900 (WbProcessStartup.c)
 *     sub_14079ADCC @ 0x14079ADCC (sub_14079ADCC.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbAlloc(unsigned int a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  void *Pool2; // rax

  v2 = 0;
  Pool2 = 0LL;
  if ( a1 && (Pool2 = (void *)ExAllocatePool2(256LL, a1, 1112686935LL)) == 0LL )
  {
    return (unsigned int)-1073741801;
  }
  else if ( a2 )
  {
    *a2 = Pool2;
  }
  else if ( Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0);
  }
  return v2;
}
