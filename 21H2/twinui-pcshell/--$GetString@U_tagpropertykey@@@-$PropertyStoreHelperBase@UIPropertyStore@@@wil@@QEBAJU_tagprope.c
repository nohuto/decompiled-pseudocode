/*
 * XREFs of ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1804D667C
 * Callers:
 *     ?CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z @ 0x1801378BC (-CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x1804DE0DC (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 *     ImmersiveIcons::GetPackageFullNameForAppsFolderItem @ 0x1804DF1A8 (ImmersiveIcons--GetPackageFullNameForAppsFolderItem.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180213468 (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 *     ?TryDetachString@PropVariant@wil@@QEAA_NPEAPEAG@Z @ 0x1804D6BF4 (-TryDetachString@PropVariant@wil@@QEAA_NPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(
        _QWORD *a1,
        __int128 *a2,
        unsigned __int16 **a3)
{
  int FailIf; // ebx
  __int128 v6; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+30h] [rbp-48h]
  PROPVARIANT pvar[3]; // [rsp+40h] [rbp-38h] BYREF

  *a3 = 0LL;
  LOWORD(pvar[0]) = 0;
  v6 = *a2;
  v7 = *((_DWORD *)a2 + 4);
  FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(a1, (__int64)&v6, pvar);
  if ( FailIf >= 0 && !wil::PropVariant::TryDetachString((wil::PropVariant *)pvar, a3) )
    FailIf = -2147352571;
  PropVariantClear(pvar);
  return (unsigned int)FailIf;
}
