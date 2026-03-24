/*
 * XREFs of WbAlloc @ 0x14064DC04
 * Callers:
 *     sub_1405D6E10 @ 0x1405D6E10 (sub_1405D6E10.c)
 *     sub_1405D7380 @ 0x1405D7380 (sub_1405D7380.c)
 *     sub_1405D7C64 @ 0x1405D7C64 (sub_1405D7C64.c)
 *     WbDispatchOperation @ 0x14064EE24 (WbDispatchOperation.c)
 *     WbAllocateMemoryBlock @ 0x1406868C4 (WbAllocateMemoryBlock.c)
 *     sub_140686D40 @ 0x140686D40 (sub_140686D40.c)
 *     WbHashData @ 0x140687B80 (WbHashData.c)
 *     WbReAlloc @ 0x14068837C (WbReAlloc.c)
 *     WbProcessModuleUnload @ 0x1406A2680 (WbProcessModuleUnload.c)
 *     WbCreateWarbirdProcess @ 0x1406C2B6C (WbCreateWarbirdProcess.c)
 *     WbProcessStartup @ 0x1406C3058 (WbProcessStartup.c)
 *     sub_1406C36CC @ 0x1406C36CC (sub_1406C36CC.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
