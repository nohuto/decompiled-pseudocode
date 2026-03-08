/*
 * XREFs of ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x180004C78
 * Callers:
 *     ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x1800044B8 (-ClearCasters@CProjectedShadowScene@@AEAAXXZ.c)
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x1800047D4 (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x180004850 (-ClearReceivers@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180004F04 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180005244 (-clear@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x180005B3C (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowScene::ClearShadows(CProjectedShadowScene *this, char a2)
{
  _QWORD **v3; // rdi
  _QWORD *i; // rbx

  if ( !a2 )
    CProjectedShadowScene::RequestRedrawAll(this);
  v3 = (_QWORD **)*((_QWORD *)this + 10);
  for ( i = *v3; i != v3; i = (_QWORD *)*i )
    std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::clear(i + 3);
}
