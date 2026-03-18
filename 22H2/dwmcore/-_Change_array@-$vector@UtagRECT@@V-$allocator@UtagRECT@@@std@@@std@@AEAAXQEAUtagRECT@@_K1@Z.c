/*
 * XREFs of ?_Change_array@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXQEAUtagRECT@@_K1@Z @ 0x1800A7970
 * Callers:
 *     ??$_Insert_range@PEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UtagRECT@@@std@@@std@@@1@PEBUtagRECT@@1Uforward_iterator_tag@1@@Z @ 0x1800A7708 (--$_Insert_range@PEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXV-$_Ve.c)
 *     ??$_Emplace_reallocate@AEAUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEAU2@@Z @ 0x1801D2874 (--$_Emplace_reallocate@AEAUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAP.c)
 *     ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x1801D2968 (--$_Emplace_reallocate@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAPEAU.c)
 *     ??$_Emplace_reallocate@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEBU2@@Z @ 0x1802A082C (--$_Emplace_reallocate@AEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAP.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E247C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<tagRECT>::_Change_array(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    result = std::_Deallocate<16,0>(v6, (a1[2] - v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *a1 = a2;
  a1[1] = a2 + 16 * a3;
  a1[2] = a2 + 16 * a4;
  return result;
}
