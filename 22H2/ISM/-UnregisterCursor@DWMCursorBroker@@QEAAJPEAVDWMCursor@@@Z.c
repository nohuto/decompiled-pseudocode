/*
 * XREFs of ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x18019C39C
 * Callers:
 *     ??1DWMCursor@@MEAA@XZ @ 0x18019C8B4 (--1DWMCursor@@MEAA@XZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18008834C (-clear@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equa.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@@Z @ 0x180088470 (-erase@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@st.c)
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x18019C15C (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@std@@V12@@2@AEBUCursorId@@@Z @ 0x18019C6E4 (-equal_range@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCur.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@2@@Z @ 0x18019C7A4 (-erase@-$_Hash@V-$_Umap_traits@UDWMPointerMapping@@UCursorId@@V-$_Uhash_compare@UDWMPointerMappi.c)
 */

__int64 __fastcall DWMCursorBroker::UnregisterCursor(DWMCursorBroker *this, struct DWMCursor *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // r15
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 *v8; // rax
  _QWORD *v10; // [rsp+20h] [rbp-50h] BYREF
  _QWORD *v11; // [rsp+28h] [rbp-48h]
  char v12[4]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+34h] [rbp-3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v15; // [rsp+90h] [rbp+20h] BYREF
  __int64 *v16; // [rsp+98h] [rbp+28h] BYREF

  (*(void (__fastcall **)(struct DWMCursor *, __int64 *))(*(_QWORD *)a2 + 40LL))(a2, &v15);
  std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::equal_range(
    (char *)this + 48,
    &v10,
    &v15);
  v3 = v10;
  v4 = 0LL;
  v5 = v10;
  while ( v5 != v11 )
  {
    v5 = (_QWORD *)*v5;
    ++v4;
  }
  v6 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v10 == (_QWORD *)*v6 && v11 == v6 )
  {
    std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::clear((__int64)this + 48);
  }
  else
  {
    while ( v3 != v11 )
    {
      v7 = (__int64)v3;
      v3 = (_QWORD *)*v3;
      std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::erase(
        (_QWORD *)this + 6,
        (__int64)&v16,
        v7);
    }
  }
  if ( !v4 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      578LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  v8 = (__int64 *)**((_QWORD **)this + 15);
  while ( v8 != *((__int64 **)this + 15) )
  {
    if ( *((_DWORD *)v8 + 6) == (_DWORD)v15 )
    {
      std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::erase(
        (char *)this + 112,
        &v16,
        v8);
      v8 = v16;
    }
    else
    {
      v8 = (__int64 *)*v8;
    }
  }
  v13 = v15;
  v12[0] = 1;
  DWMCursorBroker::SendAndVerifyEndpoints(this, (struct CursorMessage *)v12);
  return 0LL;
}
