/*
 * XREFs of sub_1407E3B7C @ 0x1407E3B7C
 * Callers:
 *     WbHeapExecutionUnloadModule @ 0x1406D5CF8 (WbHeapExecutionUnloadModule.c)
 *     WbPopStackEntries @ 0x1406E62FC (WbPopStackEntries.c)
 *     WbFreeWarbirdProcess @ 0x1407E17A4 (WbFreeWarbirdProcess.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1407E1968 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 *     WbHeapExecuteCall @ 0x1407E3070 (WbHeapExecuteCall.c)
 *     WbGetHeapExecutedBlock @ 0x1407E3260 (WbGetHeapExecutedBlock.c)
 *     sub_1407E3F30 @ 0x1407E3F30 (sub_1407E3F30.c)
 * Callees:
 *     sub_1407E1B90 @ 0x1407E1B90 (sub_1407E1B90.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

signed __int64 __fastcall sub_1407E3B7C(__int64 a1, __int64 a2)
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
        sub_1407E1B90(a1, v5);
        *(_QWORD *)(a2 + 40) = 0LL;
        *(_QWORD *)(a2 + 24) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_DWORD *)(a2 + 72) = 0;
      }
      ExFreePoolWithTag((PVOID)a2, 0);
    }
  }
  return v2;
}
