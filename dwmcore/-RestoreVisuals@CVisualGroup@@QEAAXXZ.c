/*
 * XREFs of ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x180214CF4
 * Callers:
 *     ?RestoreDDAVisuals@CComposition@@QEBAXXZ @ 0x180129CEC (-RestoreDDAVisuals@CComposition@@QEBAXXZ.c)
 *     ?RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x1801ED8C0 (-RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x18012A454 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180214E50 (-erase@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 */

void __fastcall CVisualGroup::RestoreVisuals(CVisualGroup *this)
{
  CExcludeVisualReference **v1; // rbx
  __int64 v3; // rcx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CExcludeVisualReference **)*((_QWORD *)this + 8);
  while ( v1 != *((CExcludeVisualReference ***)this + 9) )
  {
    if ( CExcludeVisualReference::GetVisual(*v1) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      ++v1;
    }
    else
    {
      v1 = *(CExcludeVisualReference ***)std::vector<std::unique_ptr<CExcludeVisualReference>>::erase(
                                           (char *)this + 64,
                                           &v4,
                                           v1);
    }
  }
}
