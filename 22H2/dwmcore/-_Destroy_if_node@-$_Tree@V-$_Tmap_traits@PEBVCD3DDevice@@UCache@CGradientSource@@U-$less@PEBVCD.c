/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@PEBVCD3DDevice@@UCache@CGradientSource@@U?$less@PEBVCD3DDevice@@@std@@V?$allocator@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x18020A0E0
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAU?$_Tree_node@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDevice@@UCache@CGradientSource@@U?$less@PEBVCD3DDevice@@@std@@V?$allocator@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAX@1@AEAU?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@1@1@Z @ 0x180209784 (--$_Insert_at@AEAU-$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAU-$_Tree_node@U-$pair@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CB254 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<CD3DDevice const *,CGradientSource::Cache,std::less<CD3DDevice const *>,std::allocator<std::pair<CD3DDevice const * const,CGradientSource::Cache>>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2 + 6);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2 + 5);
  std::_Deallocate<16,0>(a2, 0x38uLL);
}
