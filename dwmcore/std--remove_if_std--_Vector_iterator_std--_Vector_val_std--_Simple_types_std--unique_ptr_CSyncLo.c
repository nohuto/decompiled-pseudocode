/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CSyncLockGroup_std::default_delete_CSyncLockGroup___________lambda_ba8dc3c680031872e33eb834ce4e6176___ @ 0x1801E3518
 * Callers:
 *     ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x1801E3810 (-RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z.c)
 * Callees:
 *     ??$?4U?$default_delete@VCSyncLockGroup@@@std@@$0A@@?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801E3300 (--$-4U-$default_delete@VCSyncLockGroup@@@std@@$0A@@-$unique_ptr@VCSyncLockGroup@@U-$default_dele.c)
 */

CParallelModeGroup ***__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CSyncLockGroup_std::default_delete_CSyncLockGroup___________lambda_ba8dc3c680031872e33eb834ce4e6176___(
        CParallelModeGroup ***a1,
        CParallelModeGroup **a2,
        CParallelModeGroup **a3)
{
  CParallelModeGroup **i; // rdi
  CParallelModeGroup **j; // rsi
  CParallelModeGroup ***result; // rax

  for ( i = a2; i != a3; ++i )
  {
    if ( ((*((_QWORD *)*i + 3) - *((_QWORD *)*i + 2)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      if ( ((*((_QWORD *)*j + 3) - *((_QWORD *)*j + 2)) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        std::unique_ptr<CSyncLockGroup>::operator=<std::default_delete<CSyncLockGroup>,0>(i++, j);
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
