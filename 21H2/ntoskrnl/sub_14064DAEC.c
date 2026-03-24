/*
 * XREFs of sub_14064DAEC @ 0x14064DAEC
 * Callers:
 *     WbHeapExecuteCall @ 0x14064D638 (WbHeapExecuteCall.c)
 *     sub_14064D8EC @ 0x14064D8EC (sub_14064D8EC.c)
 *     WbGetHeapExecutedBlock @ 0x14064D984 (WbGetHeapExecutedBlock.c)
 *     WbFreeWarbirdProcess @ 0x140686B00 (WbFreeWarbirdProcess.c)
 *     sub_140686D40 @ 0x140686D40 (sub_140686D40.c)
 *     WbHeapExecutionUnloadModule @ 0x1406A287C (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406A2980 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 * Callees:
 *     sub_1406A8A5C @ 0x1406A8A5C (sub_1406A8A5C.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

signed __int64 __fastcall sub_14064DAEC(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rdi

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 80));
    if ( !v2 )
    {
      if ( *(_QWORD *)(a2 + 40) )
      {
        sub_1406A8A5C();
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
