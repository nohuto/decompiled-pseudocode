/*
 * XREFs of sub_14064290C @ 0x14064290C
 * Callers:
 *     WbFreeWarbirdProcess @ 0x1405E5C60 (WbFreeWarbirdProcess.c)
 *     sub_1405E5EA0 @ 0x1405E5EA0 (sub_1405E5EA0.c)
 *     WbHeapExecutionUnloadModule @ 0x140605C84 (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x140605D88 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbHeapExecuteCall @ 0x140642458 (WbHeapExecuteCall.c)
 *     sub_14064270C @ 0x14064270C (sub_14064270C.c)
 *     WbGetHeapExecutedBlock @ 0x1406427A4 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     sub_1406069DC @ 0x1406069DC (sub_1406069DC.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

signed __int64 __fastcall sub_14064290C(__int64 a1, __int64 a2)
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
        sub_1406069DC(a1, v5);
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
