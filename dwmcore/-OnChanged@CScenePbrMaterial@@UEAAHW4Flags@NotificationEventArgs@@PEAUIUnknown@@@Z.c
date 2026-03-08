/*
 * XREFs of ?OnChanged@CScenePbrMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18024D260
 * Callers:
 *     ?OnChanged@CSceneMetallicRoughnessMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18024CD70 (-OnChanged@CSceneMetallicRoughnessMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801A3B98 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ?AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z @ 0x180267E8C (-AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z.c)
 */

__int64 __fastcall CScenePbrMaterial::OnChanged(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 && (a3 == *(_QWORD *)(a1 + 120) || a3 == *(_QWORD *)(a1 + 128) || a3 == *(_QWORD *)(a1 + 136)) )
  {
    v4 = **(_QWORD **)(a1 + 72);
    v6 = v4;
    while ( v4 != *(_QWORD *)(a1 + 72) )
    {
      CSceneComponent::AddDirtySceneObject(*(CSceneComponent **)(v4 + 32), (struct CSceneObject *)a1);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v6);
      v4 = v6;
    }
  }
  return 1LL;
}
