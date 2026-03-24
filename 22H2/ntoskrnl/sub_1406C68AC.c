/*
 * XREFs of sub_1406C68AC @ 0x1406C68AC
 * Callers:
 *     WbFreeWarbirdProcess @ 0x1406667C0 (WbFreeWarbirdProcess.c)
 *     sub_140666A00 @ 0x140666A00 (sub_140666A00.c)
 *     WbHeapExecutionUnloadModule @ 0x1406875FC (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x140687700 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbHeapExecuteCall @ 0x1406C63F8 (WbHeapExecuteCall.c)
 *     sub_1406C66AC @ 0x1406C66AC (sub_1406C66AC.c)
 *     WbGetHeapExecutedBlock @ 0x1406C6744 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     sub_14068BA0C @ 0x14068BA0C (sub_14068BA0C.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

signed __int64 __fastcall sub_1406C68AC(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rdi
  __int64 v5; // rdx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 80));
    if ( !v2 )
    {
      v5 = *(_QWORD *)(a2 + 40);
      if ( v5 )
      {
        sub_14068BA0C(a1, v5);
        *(_QWORD *)(a2 + 40) = 0LL;
        *(_QWORD *)(a2 + 24) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_DWORD *)(a2 + 72) = 0;
      }
      ExFreePoolWithTag((PVOID)a2, 0x42524157u);
    }
  }
  return v2;
}
