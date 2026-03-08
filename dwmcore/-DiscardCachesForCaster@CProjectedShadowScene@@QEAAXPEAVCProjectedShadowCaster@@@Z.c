/*
 * XREFs of ?DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x180004CBC
 * Callers:
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x180005500 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x180008E5C (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18009A61C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?FindCasterEntry@CProjectedShadowScene@@AEBAPEAUCasterEntry@1@PEBVCProjectedShadowCaster@@@Z @ 0x180004D08 (-FindCasterEntry@CProjectedShadowScene@@AEBAPEAUCasterEntry@1@PEBVCProjectedShadowCaster@@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAVCProjectedShadowCaster@@@Z @ 0x1800051A0 (-erase@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 */

void __fastcall CProjectedShadowScene::DiscardCachesForCaster(
        CProjectedShadowScene *this,
        struct CProjectedShadowCaster *a2)
{
  __int64 v2; // rcx
  _QWORD **v3; // rdi
  _QWORD *i; // rbx
  struct CProjectedShadowCaster *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  *((_QWORD *)CProjectedShadowScene::FindCasterEntry(this, a2) + 1) = 0LL;
  v3 = *(_QWORD ***)(v2 + 80);
  for ( i = *v3; i != v3; i = (_QWORD *)*i )
    std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::erase(
      i + 3,
      &v5);
}
