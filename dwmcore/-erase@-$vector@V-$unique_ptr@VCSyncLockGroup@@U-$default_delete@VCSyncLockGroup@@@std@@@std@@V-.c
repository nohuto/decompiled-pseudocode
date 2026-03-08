/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801E3AB4
 * Callers:
 *     ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x1801E3810 (-RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z.c)
 * Callees:
 *     ??$?4U?$default_delete@VCSyncLockGroup@@@std@@$0A@@?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801E3300 (--$-4U-$default_delete@VCSyncLockGroup@@@std@@$0A@@-$unique_ptr@VCSyncLockGroup@@U-$default_dele.c)
 *     ??_GCParallelModeGroup@@QEAAPEAXI@Z @ 0x1801E35B0 (--_GCParallelModeGroup@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall std::vector<std::unique_ptr<CSyncLockGroup>>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rdi
  CParallelModeGroup **v4; // rsi
  CParallelModeGroup *v7; // rcx
  _QWORD *result; // rax

  v3 = qword_1803E30A8;
  v4 = (CParallelModeGroup **)(a3 + 8);
  if ( a3 + 8 != qword_1803E30A8 )
  {
    do
    {
      std::unique_ptr<CSyncLockGroup>::operator=<std::default_delete<CSyncLockGroup>,0>(v4 - 1, v4);
      ++v4;
    }
    while ( v4 != (CParallelModeGroup **)v3 );
    v3 = qword_1803E30A8;
  }
  v7 = *(CParallelModeGroup **)(v3 - 8);
  if ( v7 )
  {
    CParallelModeGroup::`scalar deleting destructor'(v7);
    v3 = qword_1803E30A8;
  }
  qword_1803E30A8 = v3 - 8;
  result = a2;
  *a2 = a3;
  return result;
}
