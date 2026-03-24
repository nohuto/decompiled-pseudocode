/*
 * XREFs of WbAlloc @ 0x1406C69C4
 * Callers:
 *     sub_1405D6E10 @ 0x1405D6E10 (sub_1405D6E10.c)
 *     sub_1405D7380 @ 0x1405D7380 (sub_1405D7380.c)
 *     sub_1405D7C64 @ 0x1405D7C64 (sub_1405D7C64.c)
 *     WbAllocateMemoryBlock @ 0x140666584 (WbAllocateMemoryBlock.c)
 *     sub_140666A00 @ 0x140666A00 (sub_140666A00.c)
 *     WbHashData @ 0x140667840 (WbHashData.c)
 *     WbReAlloc @ 0x14066803C (WbReAlloc.c)
 *     WbProcessModuleUnload @ 0x140687400 (WbProcessModuleUnload.c)
 *     WbCreateWarbirdProcess @ 0x1406A559C (WbCreateWarbirdProcess.c)
 *     WbProcessStartup @ 0x1406A5A38 (WbProcessStartup.c)
 *     sub_1406A5FDC @ 0x1406A5FDC (sub_1406A5FDC.c)
 *     WbDispatchOperation @ 0x1406C7BE4 (WbDispatchOperation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WbAlloc(SIZE_T NumberOfBytes, _QWORD *a2)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rax

  v2 = 0;
  PoolWithTag = 0LL;
  if ( (_DWORD)NumberOfBytes
    && (PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x42524157u)) == 0LL )
  {
    return (unsigned int)-1073741801;
  }
  else
  {
    if ( a2 )
    {
      *a2 = PoolWithTag;
      PoolWithTag = 0LL;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x42524157u);
  }
  return v2;
}
