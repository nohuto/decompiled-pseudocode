/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@VTreeNodeBase@ComposableShell@Internal@Windows@@@Details@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802BD824
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UICoreForegroundTarget@Core@ComposableShell@Internal@Windows@@UIKeepAliveView@678@VTreeNodeBase@678@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800C8BF8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UICoreForegroundTarget@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Windows::Internal::ComposableShell::TreeNodeBase>>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _QWORD *v3; // r8
  __int64 v4; // r9
  unsigned int v5; // edx

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_2d10b4a2_7c09_4621_b36f_9a62ecbac6cb);
  v5 = 0;
  if ( IsEqualGUID )
    *v3 = v4;
  else
    return (unsigned int)-2147467262;
  return v5;
}
