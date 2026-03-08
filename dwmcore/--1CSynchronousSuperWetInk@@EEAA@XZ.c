/*
 * XREFs of ??1CSynchronousSuperWetInk@@EEAA@XZ @ 0x18024FC68
 * Callers:
 *     ??_GCSynchronousSuperWetInk@@EEAAPEAXI@Z @ 0x18024FE80 (--_GCSynchronousSuperWetInk@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800EF9A8 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012BB3A (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x18019F364 (McTemplateU0p_EventWriteTransfer.c)
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801C926C (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@1@@Z @ 0x18024F898 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@PEAX@s.c)
 *     ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ @ 0x180250444 (-IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ.c)
 */

void __fastcall CSynchronousSuperWetInk::~CSynchronousSuperWetInk(CSynchronousSuperWetInk *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  std::_Ref_count_base *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &CSynchronousSuperWetInk::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CSynchronousSuperWetInk::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CSynchronousSuperWetInk::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 232;
  v3 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 248;
  if ( CSynchronousSuperWetInk::IsSuperWetCompatible(this) )
    CSuperWetInkManager::RemoveSource(*(CSuperWetInkManager **)(*((_QWORD *)this + 2) + 256LL), this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0p_EventWriteTransfer(v4, &EVTDESC_SYNCHRONOUSSUPERWETINK_DESTROYED, (__int64)this);
  std::vector<unsigned char>::_Tidy((__int64)this + 264);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 32);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>,void *>>>(
    (__int64)this + 224,
    (__int64)this + 224,
    *(__int64 **)(*((_QWORD *)this + 28) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 28), 0x38uLL);
  v6 = (void *)*((_QWORD *)this + 27);
  if ( v6 )
    operator delete(v6);
  v7 = *((_QWORD *)this + 26);
  if ( v7 )
  {
    *((_QWORD *)this + 26) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CSuperWetSource>::~CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CSuperWetSource>((struct CResource **)this);
}
