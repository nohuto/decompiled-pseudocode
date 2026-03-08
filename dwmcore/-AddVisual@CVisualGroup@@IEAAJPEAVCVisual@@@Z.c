/*
 * XREFs of ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x180214AB4
 * Callers:
 *     ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1801B1544 (-AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1801B1614 (-AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18010A4B8 (-Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x18012A454 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ??_GCExcludeVisualReference@@QEAAPEAXI@Z @ 0x1801B148C (--_GCExcludeVisualReference@@QEAAPEAXI@Z.c)
 *     ??$emplace_back@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?A_T$$QEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@1@@Z @ 0x180214A78 (--$emplace_back@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 *     ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180214E50 (-erase@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 */

__int64 __fastcall CVisualGroup::AddVisual(CVisualGroup *this, struct CVisual *a2)
{
  __int64 *v2; // rsi
  CExcludeVisualReference **v4; // r8
  unsigned int v6; // edi
  CExcludeVisualReference *v7; // rcx
  __int64 v8; // r8
  struct CVisual *Visual; // rax
  struct CVisual *v10; // r9
  int v11; // eax
  __int64 v12; // rcx
  CExcludeVisualReference *v13; // rcx
  struct CExcludeVisualReference *v15; // [rsp+38h] [rbp-18h] BYREF
  char v16; // [rsp+40h] [rbp-10h]
  CExcludeVisualReference *v17; // [rsp+70h] [rbp+20h] BYREF

  v2 = (__int64 *)((char *)this + 64);
  v4 = (CExcludeVisualReference **)*((_QWORD *)this + 8);
  v6 = 0;
  while ( v4 != *((CExcludeVisualReference ***)this + 9) )
  {
    if ( CExcludeVisualReference::GetVisual(*v4) )
    {
      Visual = CExcludeVisualReference::GetVisual(v7);
      a2 = 0LL;
      if ( v10 != Visual )
        a2 = v10;
    }
    else
    {
      v4 = *(CExcludeVisualReference ***)std::vector<std::unique_ptr<CExcludeVisualReference>>::erase(v2, &v17, v8);
    }
  }
  if ( a2 )
  {
    v17 = 0LL;
    v15 = 0LL;
    v16 = 1;
    v11 = CExcludeVisualReference::Create(a2, (struct CWeakResourceReference ***)&v15);
    v6 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x65u, 0LL);
    if ( v16 )
    {
      v13 = v17;
      v17 = v15;
      if ( v13 )
        CExcludeVisualReference::`scalar deleting destructor'(v13);
    }
    std::vector<std::unique_ptr<CExcludeVisualReference>>::emplace_back<std::unique_ptr<CExcludeVisualReference>>(
      v2,
      (__int64 *)&v17);
    if ( v17 )
      CExcludeVisualReference::`scalar deleting destructor'(v17);
  }
  return v6;
}
