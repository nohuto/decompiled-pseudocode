/*
 * XREFs of ??_GCExcludeVisualReference@@QEAAPEAXI@Z @ 0x1801B468C
 * Callers:
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18001D500 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180021FCC (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18010AF30 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18010AFF8 (-Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@0@@Z @ 0x1801B38FC (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExclu.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801B3CEC (--1CComposition@@MEAA@XZ.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1801B5178 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x180218014 (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 *     ?AppendVisuals@CVisualGroup@@QEAAJV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x180218114 (-AppendVisuals@CVisualGroup@@QEAAJV-$span@PEAVCVisual@@$0-0@gsl@@@Z.c)
 *     ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1802183B0 (-erase@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 *     ??1CExcludeVisualReference@@QEAA@XZ @ 0x1801B42B8 (--1CExcludeVisualReference@@QEAA@XZ.c)
 */

CExcludeVisualReference *__fastcall CExcludeVisualReference::`scalar deleting destructor'(
        CExcludeVisualReference *this)
{
  CExcludeVisualReference::~CExcludeVisualReference(this);
  operator delete(this);
  return this;
}
