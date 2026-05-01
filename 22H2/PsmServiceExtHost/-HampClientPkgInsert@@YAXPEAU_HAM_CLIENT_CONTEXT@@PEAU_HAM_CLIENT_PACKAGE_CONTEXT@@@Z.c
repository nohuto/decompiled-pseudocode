/*
 * XREFs of ?HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180081304
 * Callers:
 *     ?HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z @ 0x180080FCC (-HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z.c)
 * Callees:
 *     CemRcTableFindOrInsertEx @ 0x1800320F0 (CemRcTableFindOrInsertEx.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1559592251@@@details@wil@@QEAA_NXZ @ 0x1800475C4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1559592251@@@details@wil@@QEAA_NX.c)
 *     ?HampClientPkgReference@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU1@@Z @ 0x180081378 (-HampClientPkgReference@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU1@@Z.c)
 */

void __fastcall HampClientPkgInsert(struct _HAM_CLIENT_CONTEXT *a1, struct _HAM_CLIENT_PACKAGE_CONTEXT *a2)
{
  __int64 v4; // [rsp+20h] [rbp-18h]
  unsigned __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_1559592251>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1559592251>::GetImpl'::`2'::impl) )
    HampClientPkgReference(a2);
  CemRcTableFindOrInsertEx(
    (__int64)a1 + 56,
    (__int64)a2 + 48,
    (int (__fastcall *)(__int64, unsigned __int64, __int64))HampClientPkgCompareByHandle,
    (unsigned __int64)a2,
    v4,
    &v5);
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_1559592251>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1559592251>::GetImpl'::`2'::impl) )
    HampClientPkgReference(a2);
}
