/*
 * XREFs of WbAlloc @ 0x140763E98
 * Callers:
 *     WbHashData @ 0x1407622D0 (WbHashData.c)
 *     sub_140762650 @ 0x140762650 (sub_140762650.c)
 *     WbDispatchOperation @ 0x140763928 (WbDispatchOperation.c)
 *     WbAllocateMemoryBlock @ 0x1407A564C (WbAllocateMemoryBlock.c)
 *     sub_1407D2624 @ 0x1407D2624 (sub_1407D2624.c)
 *     WbValidateEncryptionSegmentArguments @ 0x1407D2B8C (WbValidateEncryptionSegmentArguments.c)
 *     WbInitializeEncryptionSegment @ 0x1407D2E78 (WbInitializeEncryptionSegment.c)
 *     WbProcessModuleUnload @ 0x1407E0A3C (WbProcessModuleUnload.c)
 *     WbReAlloc @ 0x1407E568C (WbReAlloc.c)
 *     WbCreateWarbirdProcess @ 0x1407E7C1C (WbCreateWarbirdProcess.c)
 *     WbProcessStartup @ 0x1407E7D60 (WbProcessStartup.c)
 *     sub_1407E9E3C @ 0x1407E9E3C (sub_1407E9E3C.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
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
