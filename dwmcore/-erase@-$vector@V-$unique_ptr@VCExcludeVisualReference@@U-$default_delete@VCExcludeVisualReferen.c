/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180214E50
 * Callers:
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x18012DF18 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x180214AB4 (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z @ 0x180214C8C (-RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z.c)
 *     ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x180214CF4 (-RestoreVisuals@CVisualGroup@@QEAAXXZ.c)
 * Callees:
 *     ??_GCExcludeVisualReference@@QEAAPEAXI@Z @ 0x1801B148C (--_GCExcludeVisualReference@@QEAAPEAXI@Z.c)
 */

CExcludeVisualReference ***__fastcall std::vector<std::unique_ptr<CExcludeVisualReference>>::erase(
        __int64 a1,
        CExcludeVisualReference ***a2,
        CExcludeVisualReference **a3)
{
  CExcludeVisualReference **v3; // r15
  CExcludeVisualReference **v4; // rdi
  CExcludeVisualReference **v8; // rsi
  CExcludeVisualReference *v9; // rax
  CExcludeVisualReference *v10; // rcx
  CExcludeVisualReference *v11; // rcx
  CExcludeVisualReference ***result; // rax

  v3 = *(CExcludeVisualReference ***)(a1 + 8);
  v4 = a3 + 1;
  if ( a3 + 1 != v3 )
  {
    v8 = a3;
    do
    {
      if ( v8 != v4 )
      {
        v9 = *v4;
        *v4 = 0LL;
        v10 = *v8;
        *v8 = v9;
        if ( v10 )
          CExcludeVisualReference::`scalar deleting destructor'(v10);
      }
      ++v4;
      ++v8;
    }
    while ( v4 != v3 );
  }
  v11 = *(CExcludeVisualReference **)(*(_QWORD *)(a1 + 8) - 8LL);
  if ( v11 )
    CExcludeVisualReference::`scalar deleting destructor'(v11);
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
