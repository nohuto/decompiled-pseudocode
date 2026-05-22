/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@Uhstring_insensitive_less@wil@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@6@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAX@2@@Z @ 0x180167248
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@Uhstring_insensitive_less@wil@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@6@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAX@1@AEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@1@1@Z @ 0x180152AA0 (--$_Insert_at@AEAU-$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V-$weak_ptr@VSpatialGraphDriverHan.c)
 *     _std::_Tree_std::_Tmap_traits_Microsoft::WRL::Wrappers::HString_std::weak_ptr_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper__wil::hstring_insensitive_less_std::allocator_std::pair_Microsoft::WRL::Wrappers::HString_const__std::weak_ptr_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper______0___::_Insert_nohint_std::pair_Microsoft::WRL::Wrappers::HString_const__std::weak_ptr_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper____&_std::_Tree_node_std::pair_Microsoft::WRL::Wrappers::HString_const__std::weak_ptr_Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper____void_______::_1_::catch$19 @ 0x18015548F (_std--_Tree_std--_Tmap_traits_Microsoft--WRL--Wrappers--HString_std--weak_ptr_Windows--Internal-.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B060 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 a2)
{
  std::_Ref_count_base *v2; // rcx

  v2 = *(std::_Ref_count_base **)(a2 + 48);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  WindowsDeleteString(*(HSTRING *)(a2 + 32));
  *(_QWORD *)(a2 + 32) = 0LL;
  std::_Deallocate<16,0>((void *)a2, (const struct std::nothrow_t *)0x38);
}
