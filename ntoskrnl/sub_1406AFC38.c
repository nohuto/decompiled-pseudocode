/*
 * XREFs of sub_1406AFC38 @ 0x1406AFC38
 * Callers:
 *     WbHeapExecuteCall @ 0x1406AF56C (WbHeapExecuteCall.c)
 *     WbGetHeapExecutedBlock @ 0x1406AFAAC (WbGetHeapExecutedBlock.c)
 *     sub_1406B0060 @ 0x1406B0060 (sub_1406B0060.c)
 *     WbFreeWarbirdProcess @ 0x140752CDC (WbFreeWarbirdProcess.c)
 *     sub_140753BB4 @ 0x140753BB4 (sub_140753BB4.c)
 *     WbHeapExecutionUnloadModule @ 0x140770C2C (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x140770D60 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 * Callees:
 *     sub_140773AA8 @ 0x140773AA8 (sub_140773AA8.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

signed __int64 __fastcall sub_1406AFC38(__int64 a1, __int64 a2)
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
        sub_140773AA8();
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
