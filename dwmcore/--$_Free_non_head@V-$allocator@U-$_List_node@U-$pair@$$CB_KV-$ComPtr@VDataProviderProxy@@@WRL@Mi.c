/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801B466C
 * Callers:
 *     ??1DataProviderManager@@EEAA@XZ @ 0x1801B4734 (--1DataProviderManager@@EEAA@XZ.c)
 *     ??1DataProviderProxy@@UEAA@XZ @ 0x1801E102C (--1DataProviderProxy@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rdi

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = v2[3];
      v4 = (_QWORD *)*v2;
      if ( v3 )
      {
        v2[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      }
      std::_Deallocate<16,0>(v2, 0x20uLL);
      v2 = v4;
    }
    while ( v4 );
  }
}
