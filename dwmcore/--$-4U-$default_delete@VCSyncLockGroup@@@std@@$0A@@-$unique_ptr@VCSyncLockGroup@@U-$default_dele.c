/*
 * XREFs of ??$?4U?$default_delete@VCSyncLockGroup@@@std@@$0A@@?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801E3300
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CSyncLockGroup_std::default_delete_CSyncLockGroup___________lambda_ba8dc3c680031872e33eb834ce4e6176___ @ 0x1801E3518 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CSyncLo.c)
 *     ?erase@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801E3AB4 (-erase@-$vector@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std@@@std@@V-.c)
 * Callees:
 *     ??_GCParallelModeGroup@@QEAAPEAXI@Z @ 0x1801E35B0 (--_GCParallelModeGroup@@QEAAPEAXI@Z.c)
 */

CParallelModeGroup **__fastcall std::unique_ptr<CSyncLockGroup>::operator=<std::default_delete<CSyncLockGroup>,0>(
        CParallelModeGroup **a1,
        CParallelModeGroup **a2)
{
  CParallelModeGroup *v3; // rax
  CParallelModeGroup *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      CParallelModeGroup::`scalar deleting destructor'(v4, (unsigned int)a2);
  }
  return a1;
}
