/*
 * XREFs of ?_Change_array@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@AEAAXQEAUProperty@CTreeDumpNodeData@@_K1@Z @ 0x180155D28
 * Callers:
 *     ??$_Emplace_reallocate@UProperty@CTreeDumpNodeData@@@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@QEAAPEAUProperty@CTreeDumpNodeData@@QEAU23@$$QEAU23@@Z @ 0x1801546B8 (--$_Emplace_reallocate@UProperty@CTreeDumpNodeData@@@-$vector@UProperty@CTreeDumpNodeData@@V-$al.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@YAXPEAUProperty@CTreeDumpNodeData@@0AEAV?$allocator@UProperty@CTreeDumpNodeData@@@0@@Z @ 0x1801545F0 (--$_Destroy_range@V-$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@YAXPEAUProperty@CTreeDum.c)
 */

void __fastcall std::vector<CTreeDumpNodeData::Property>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CTreeDumpNodeData::Property>>((__int64)v6, *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFC0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + (a3 << 6);
  *(_QWORD *)(a1 + 16) = a2 + (a4 << 6);
}
