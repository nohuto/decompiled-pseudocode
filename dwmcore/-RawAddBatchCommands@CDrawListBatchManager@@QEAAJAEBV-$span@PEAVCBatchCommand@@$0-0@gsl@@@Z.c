/*
 * XREFs of ?RawAddBatchCommands@CDrawListBatchManager@@QEAAJAEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z @ 0x18000DDB4
 * Callers:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x18000DB70 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18008DF10 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x1800C383C (-AddMultipleAndSet@-$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z.c)
 */

__int64 __fastcall CDrawListBatchManager::RawAddBatchCommands(__int64 a1, unsigned int *a2)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx

  v2 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(a1, *((_QWORD *)a2 + 1), *a2);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0xA2u, 0LL);
  return v4;
}
