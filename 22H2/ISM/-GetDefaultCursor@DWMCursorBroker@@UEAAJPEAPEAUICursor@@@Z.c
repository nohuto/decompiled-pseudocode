/*
 * XREFs of ?GetDefaultCursor@DWMCursorBroker@@UEAAJPEAPEAUICursor@@@Z @ 0x18003A1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KPEAULegacyDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@2@_K@Z @ 0x180024020 (-_End@-$_Hash@V-$_Umap_traits@KPEAULegacyDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::GetDefaultCursor(DWMCursorBroker *this, struct ICursor **a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r10
  struct ICursor *v7; // rbx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 1LL;
  v4 = *((_QWORD *)this + 12) & std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v10, 4uLL);
  while ( 1 )
  {
    v5 = std::_Hash<std::_Umap_traits<unsigned long,LegacyDeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,LegacyDeviceInfo *>>,0>>::_End(
           (__int64)this + 48,
           &v10,
           v4);
    if ( v6 == *v5 )
      break;
    if ( *(_DWORD *)(v6 + 16) == 1 )
      goto LABEL_4;
  }
  v6 = *((_QWORD *)this + 7);
LABEL_4:
  if ( v6 == *((_QWORD *)this + 7) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  else
  {
    v7 = *(struct ICursor **)(v6 + 24);
    (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v7 + 8LL))(v7);
    result = 0LL;
    *a2 = v7;
  }
  return result;
}
