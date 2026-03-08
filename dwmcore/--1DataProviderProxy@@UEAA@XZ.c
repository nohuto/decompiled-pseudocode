/*
 * XREFs of ??1DataProviderProxy@@UEAA@XZ @ 0x1801E102C
 * Callers:
 *     ??_EDataProviderProxy@@UEAAPEAXI@Z @ 0x1801E10F0 (--_EDataProviderProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801B466C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$ComPtr@VDataProviderProxy@@@WRL@Mi.c)
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x1801B5014 (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall DataProviderProxy::~DataProviderProxy(DataProviderProxy *this)
{
  _QWORD *v2; // rdx
  _QWORD *i; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)this = &DataProviderProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &DataProviderProxy::`vftable'{for `IDataProviderProxy'};
  v2 = (_QWORD *)*((_QWORD *)this + 11);
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
    *(_QWORD *)(i[3] + 192LL) = 0LL;
  std::vector<CDataSourceReader *>::_Tidy((__int64)this + 144);
  std::_Deallocate<16,0>(
    *((void **)this + 13),
    (*((_QWORD *)this + 14) - *((_QWORD *)this + 13)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>,void *>>>(
    v4,
    *((_QWORD ***)this + 11));
  std::_Deallocate<16,0>(*((void **)this + 11), 0x20uLL);
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
}
