/*
 * XREFs of ?_Change_array@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@AEAAXQEAUMonitorData@CCursorState@@_K1@Z @ 0x180278818
 * Callers:
 *     ??$_Emplace_reallocate@UMonitorData@CCursorState@@@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@QEAAPEAUMonitorData@CCursorState@@QEAU23@$$QEAU23@@Z @ 0x180274BA4 (--$_Emplace_reallocate@UMonitorData@CCursorState@@@-$vector@UMonitorData@CCursorState@@V-$alloca.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@YAXPEAUMonitorData@CCursorState@@QEAU12@AEAV?$allocator@UMonitorData@CCursorState@@@0@@Z @ 0x180274A14 (--$_Destroy_range@V-$allocator@UMonitorData@CCursorState@@@std@@@std@@YAXPEAUMonitorData@CCursor.c)
 */

__int64 __fastcall std::vector<CCursorState::MonitorData>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CCursorState::MonitorData>>((__int64)v6, *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 144 * a3;
  result = a2 + 144 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
