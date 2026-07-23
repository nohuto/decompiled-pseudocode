/*
 * XREFs of WbAlloc @ 0x140642A24
 * Callers:
 *     sub_1405D6E10 @ 0x1405D6E10 (sub_1405D6E10.c)
 *     sub_1405D7380 @ 0x1405D7380 (sub_1405D7380.c)
 *     sub_1405D7C64 @ 0x1405D7C64 (sub_1405D7C64.c)
 *     WbAllocateMemoryBlock @ 0x1405E5A24 (WbAllocateMemoryBlock.c)
 *     sub_1405E5EA0 @ 0x1405E5EA0 (sub_1405E5EA0.c)
 *     WbHashData @ 0x1405E6CE0 (WbHashData.c)
 *     WbReAlloc @ 0x1405E74DC (WbReAlloc.c)
 *     WbProcessModuleUnload @ 0x140605A88 (WbProcessModuleUnload.c)
 *     WbCreateWarbirdProcess @ 0x14062186C (WbCreateWarbirdProcess.c)
 *     WbProcessStartup @ 0x140621D08 (WbProcessStartup.c)
 *     sub_1406222AC @ 0x1406222AC (sub_1406222AC.c)
 *     WbDispatchOperation @ 0x140643C44 (WbDispatchOperation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
