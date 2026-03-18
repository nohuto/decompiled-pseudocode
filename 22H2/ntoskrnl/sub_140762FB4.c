/*
 * XREFs of sub_140762FB4 @ 0x140762FB4
 * Callers:
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x140761CE0 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     sub_140762650 @ 0x140762650 (sub_140762650.c)
 *     sub_140762CE8 @ 0x140762CE8 (sub_140762CE8.c)
 *     WbGetHeapExecutedBlock @ 0x140762E28 (WbGetHeapExecutedBlock.c)
 *     WbHeapExecuteCall @ 0x140763120 (WbHeapExecuteCall.c)
 *     WbHeapExecutionUnloadModule @ 0x1407E0C38 (WbHeapExecutionUnloadModule.c)
 *     WbFreeWarbirdProcess @ 0x1407E1440 (WbFreeWarbirdProcess.c)
 * Callees:
 *     sub_140761F0C @ 0x140761F0C (sub_140761F0C.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

signed __int64 __fastcall sub_140762FB4(__int64 a1, __int64 a2)
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
        sub_140761F0C(a1, v5);
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
