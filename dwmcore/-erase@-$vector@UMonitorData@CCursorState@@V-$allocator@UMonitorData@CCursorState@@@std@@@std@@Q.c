/*
 * XREFs of ?erase@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMonitorData@CCursorState@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMonitorData@CCursorState@@@std@@@std@@@2@@Z @ 0x180278964
 * Callers:
 *     ?DisableHardwareCursor@CCursorState@@QEAAXU_LUID@@I@Z @ 0x180276828 (-DisableHardwareCursor@CCursorState@@QEAAXU_LUID@@I@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012BB3A (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4MonitorData@CCursorState@@QEAAAEAU01@$$QEAU01@@Z @ 0x180275CBC (--4MonitorData@CCursorState@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

_QWORD *__fastcall std::vector<CCursorState::MonitorData>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 i; // rdi
  std::_Ref_count_base *v8; // rcx
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  for ( i = a3 + 144; i != v3; i += 144LL )
    CCursorState::MonitorData::operator=(i - 144, i);
  v8 = *(std::_Ref_count_base **)(*(_QWORD *)(a1 + 8) - 40LL);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  *(_QWORD *)(a1 + 8) -= 144LL;
  result = a2;
  *a2 = a3;
  return result;
}
