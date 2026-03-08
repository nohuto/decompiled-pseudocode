/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@0@@Z @ 0x1801B06FC
 * Callers:
 *     ??_ECVisualGroup@@UEAAPEAXI@Z @ 0x1801B14C0 (--_ECVisualGroup@@UEAAPEAXI@Z.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@0@@Z @ 0x180214A38 (--$_Uninitialized_move@PEAV-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVis.c)
 *     ?SetVisuals@CVisualGroup@@QEAAJV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x180214D68 (-SetVisuals@CVisualGroup@@QEAAJV-$span@PEAVCVisual@@$0-0@gsl@@@Z.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@2@_K1@Z @ 0x180214DDC (-_Change_array@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisua.c)
 * Callees:
 *     ??_GCExcludeVisualReference@@QEAAPEAXI@Z @ 0x1801B148C (--_GCExcludeVisualReference@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CExcludeVisualReference>>>(
        CExcludeVisualReference **a1,
        CExcludeVisualReference **a2)
{
  CExcludeVisualReference **v3; // rbx
  void *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = CExcludeVisualReference::`scalar deleting destructor'(*v3, (unsigned int)a2);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
