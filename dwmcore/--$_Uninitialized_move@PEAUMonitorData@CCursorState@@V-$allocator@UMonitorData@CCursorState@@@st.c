/*
 * XREFs of ??$_Uninitialized_move@PEAUMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@YAPEAUMonitorData@CCursorState@@QEAU12@0PEAU12@AEAV?$allocator@UMonitorData@CCursorState@@@0@@Z @ 0x180275670
 * Callers:
 *     ??$_Emplace_reallocate@UMonitorData@CCursorState@@@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@QEAAPEAUMonitorData@CCursorState@@QEAU23@$$QEAU23@@Z @ 0x180274BA4 (--$_Emplace_reallocate@UMonitorData@CCursorState@@@-$vector@UMonitorData@CCursorState@@V-$alloca.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@YAXPEAUMonitorData@CCursorState@@QEAU12@AEAV?$allocator@UMonitorData@CCursorState@@@0@@Z @ 0x180274A14 (--$_Destroy_range@V-$allocator@UMonitorData@CCursorState@@@std@@@std@@YAXPEAUMonitorData@CCursor.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<CCursorState::MonitorData *>(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r8
  char *v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 104;
    v5 = (char *)a3 - a1;
    do
    {
      *a3 = *(_QWORD *)(v4 - 104);
      a3 += 18;
      *(_DWORD *)&v5[v4 - 96] = *(_DWORD *)(v4 - 96);
      *(_OWORD *)&v5[v4 - 92] = *(_OWORD *)(v4 - 92);
      *(_OWORD *)&v5[v4 - 76] = *(_OWORD *)(v4 - 76);
      *(_OWORD *)&v5[v4 - 60] = *(_OWORD *)(v4 - 60);
      *(_OWORD *)&v5[v4 - 44] = *(_OWORD *)(v4 - 44);
      *(_DWORD *)&v5[v4 - 28] = *(_DWORD *)(v4 - 28);
      *(_OWORD *)&v5[v4 - 24] = *(_OWORD *)(v4 - 24);
      *(_QWORD *)&v5[v4 - 8] = 0LL;
      *(_QWORD *)&v5[v4] = 0LL;
      *(_QWORD *)&v5[v4 - 8] = *(_QWORD *)(v4 - 8);
      *(_QWORD *)&v5[v4] = *(_QWORD *)v4;
      *(_QWORD *)(v4 - 8) = 0LL;
      *(_QWORD *)v4 = 0LL;
      *(_DWORD *)&v5[v4 + 8] = *(_DWORD *)(v4 + 8);
      *(_DWORD *)&v5[v4 + 12] = *(_DWORD *)(v4 + 12);
      *(_DWORD *)&v5[v4 + 16] = *(_DWORD *)(v4 + 16);
      *(_DWORD *)&v5[v4 + 20] = *(_DWORD *)(v4 + 20);
      *(_DWORD *)&v5[v4 + 24] = *(_DWORD *)(v4 + 24);
      *(_DWORD *)&v5[v4 + 28] = *(_DWORD *)(v4 + 28);
      *(_DWORD *)&v5[v4 + 32] = *(_DWORD *)(v4 + 32);
      v5[v4 + 36] = *(_BYTE *)(v4 + 36);
      v4 += 144LL;
    }
    while ( v4 - 104 != a2 );
  }
  std::_Destroy_range<std::allocator<CCursorState::MonitorData>>((__int64)a3, (__int64)a3);
  return a3;
}
