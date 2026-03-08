/*
 * XREFs of ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x18012DF18
 * Callers:
 *     ?HideDDAVisuals@CComposition@@QEBAXXZ @ 0x180129CB0 (-HideDDAVisuals@CComposition@@QEBAXXZ.c)
 *     ?HideVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x1801ECF70 (-HideVisuals@CMagnifierRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x18012A454 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?Hide@CExcludeVisualReference@@QEAAXXZ @ 0x18012A46C (-Hide@CExcludeVisualReference@@QEAAXXZ.c)
 *     ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180214E50 (-erase@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 */

void __fastcall CVisualGroup::HideVisuals(CVisualGroup *this)
{
  CExcludeVisualReference **v1; // r9
  CExcludeVisualReference *v3; // rcx
  __int64 v4; // r9
  __int64 v5; // r9
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CExcludeVisualReference **)*((_QWORD *)this + 8);
  while ( v1 != *((CExcludeVisualReference ***)this + 9) )
  {
    if ( CExcludeVisualReference::GetVisual(*v1) )
    {
      CExcludeVisualReference::Hide(v3);
      v1 = (CExcludeVisualReference **)(v5 + 8);
    }
    else
    {
      v1 = *(CExcludeVisualReference ***)std::vector<std::unique_ptr<CExcludeVisualReference>>::erase(
                                           (char *)this + 64,
                                           &v6,
                                           v4);
    }
  }
}
