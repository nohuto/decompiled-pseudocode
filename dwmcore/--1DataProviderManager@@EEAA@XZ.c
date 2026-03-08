/*
 * XREFs of ??1DataProviderManager@@EEAA@XZ @ 0x1801B4734
 * Callers:
 *     ??_GDataProviderManager@@EEAAPEAXI@Z @ 0x1801B47F0 (--_GDataProviderManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801B466C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$ComPtr@VDataProviderProxy@@@WRL@Mi.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B4A60 (-InternalRelease@-$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarPrincipal@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B4A88 (-InternalRelease@-$ComPtr@VDataProviderRegistrarPrincipal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x1801B5014 (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall DataProviderManager::~DataProviderManager(DataProviderManager *this)
{
  _QWORD *v2; // rdx
  _QWORD *i; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &DataProviderManager::`vftable';
  v2 = (_QWORD *)*((_QWORD *)this + 6);
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
    *(_QWORD *)(i[3] + 72LL) = 0LL;
  std::vector<CDataSourceReader *>::_Tidy((char *)this + 104);
  std::_Deallocate<16,0>(*((void **)this + 8), (*((_QWORD *)this + 9) - *((_QWORD *)this + 8)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>,void *>>>(
    v4,
    *((_QWORD ***)this + 6));
  std::_Deallocate<16,0>(*((void **)this + 6), 0x20uLL);
  Microsoft::WRL::ComPtr<DataProviderRegistrarPrincipal>::InternalRelease((char *)this + 32);
  Microsoft::WRL::ComPtr<DataProviderRegistrarConnection>::InternalRelease((char *)this + 24);
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
