/*
 * XREFs of ?OnIsDoubleSidedChanged@CScenePbrMaterial@@QEAAXXZ @ 0x18024D334
 * Callers:
 *     ?SetIsDoubleSided@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJ_N@Z @ 0x1801C3F34 (-SetIsDoubleSided@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJ_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801A3B98 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 */

void __fastcall CScenePbrMaterial::OnIsDoubleSidedChanged(CScenePbrMaterial *this, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = **((_QWORD **)this + 9);
  v5 = v3;
  while ( v3 != *((_QWORD *)this + 9) )
  {
    v4 = *(_QWORD *)(v3 + 40);
    if ( v4 )
    {
      LOBYTE(a2) = *((_BYTE *)this + 108);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 56LL))(v4, a2);
      (*(void (__fastcall **)(CScenePbrMaterial *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v5);
    v3 = v5;
  }
}
