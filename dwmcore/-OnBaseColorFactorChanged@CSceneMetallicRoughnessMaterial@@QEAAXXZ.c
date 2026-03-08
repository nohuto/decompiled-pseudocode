/*
 * XREFs of ?OnBaseColorFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ @ 0x18024CCFC
 * Callers:
 *     ?SetBaseColorFactor@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@QEAAJUD2D_VECTOR_4F@@@Z @ 0x1801C3188 (-SetBaseColorFactor@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial.c)
 *     ?SetProperty@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801C6170 (-SetProperty@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCSce.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801A3B98 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ?ApplyBaseColorFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x18024CC24 (-ApplyBaseColorFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMateria.c)
 */

void __fastcall CSceneMetallicRoughnessMaterial::OnBaseColorFactorChanged(CSceneMetallicRoughnessMaterial *this)
{
  __int64 v2; // rax
  struct ISpectreMaterial *v3; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = **((_QWORD **)this + 9);
  v4 = v2;
  while ( v2 != *((_QWORD *)this + 9) )
  {
    v3 = *(struct ISpectreMaterial **)(v2 + 40);
    if ( v3 )
    {
      CSceneMetallicRoughnessMaterial::ApplyBaseColorFactorToSpectreResource(this, v3);
      (*(void (__fastcall **)(CSceneMetallicRoughnessMaterial *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(
        this,
        0LL,
        0LL);
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v4);
    v2 = v4;
  }
}
