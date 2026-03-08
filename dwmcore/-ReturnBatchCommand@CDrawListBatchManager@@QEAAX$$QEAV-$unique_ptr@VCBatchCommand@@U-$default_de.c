/*
 * XREFs of ?ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18000D9E0
 * Callers:
 *     ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z @ 0x18000D970 (-DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV-$span@PEAVCBatchCommand@@$0-.c)
 *     ?FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z @ 0x1802020F4 (-FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z.c)
 * Callees:
 *     ?Destroy@CBatchCommand@@AEAAXXZ @ 0x18000DA44 (-Destroy@CBatchCommand@@AEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x1800C383C (-AddMultipleAndSet@-$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawListBatchManager::ReturnBatchCommand(__int64 a1, CBatchCommand **a2)
{
  CBatchCommand *v2; // rbx
  CBatchCommand *v5; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  CBatchCommand *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  CBatchCommand::Destroy(*a2);
  *(_DWORD *)v2 = 0;
  v5 = *a2;
  *a2 = 0LL;
  v8 = v5;
  result = DynArray<CBatchCommand *,0>::AddMultipleAndSet(a1 + 40, &v8, 1LL);
  if ( (int)result < 0 )
    ModuleFailFastForHRESULT((unsigned int)result, retaddr);
  return result;
}
