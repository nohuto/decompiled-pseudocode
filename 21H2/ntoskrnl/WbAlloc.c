/*
 * XREFs of WbAlloc @ 0x1407E3010
 * Callers:
 *     WbProcessModuleUnload @ 0x1406D5B38 (WbProcessModuleUnload.c)
 *     WbReAlloc @ 0x1406DD6DC (WbReAlloc.c)
 *     WbAllocateMemoryBlock @ 0x1406E0214 (WbAllocateMemoryBlock.c)
 *     WbProcessStartup @ 0x1406E158C (WbProcessStartup.c)
 *     WbCreateWarbirdProcess @ 0x1406E1A90 (WbCreateWarbirdProcess.c)
 *     sub_1406E73B0 @ 0x1406E73B0 (sub_1406E73B0.c)
 *     WbHashData @ 0x1407E20B8 (WbHashData.c)
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 *     WbDispatchOperation @ 0x1407E2B70 (WbDispatchOperation.c)
 *     sub_140A0F140 @ 0x140A0F140 (sub_140A0F140.c)
 *     sub_140A0FC24 @ 0x140A0FC24 (sub_140A0FC24.c)
 *     sub_140A10548 @ 0x140A10548 (sub_140A10548.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
