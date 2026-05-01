/*
 * XREFs of ??$GetAsString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x18012A2F4
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1801433AC (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1802132B8 (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 *     ?TryDetachString@PropVariant@wil@@QEAA_NPEAPEAG@Z @ 0x1804D6864 (-TryDetachString@PropVariant@wil@@QEAA_NPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::PropertyStoreHelperBase<IPropertyStore>::GetAsString<_tagpropertykey>(
        __int64 a1,
        __int128 *a2,
        PWSTR *a3)
{
  HRESULT FailIf; // ebx
  __int128 v6; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+30h] [rbp-48h]
  PROPVARIANT propvar[3]; // [rsp+40h] [rbp-38h] BYREF

  *a3 = 0LL;
  LOWORD(propvar[0]) = 0;
  v6 = *a2;
  v7 = *((_DWORD *)a2 + 4);
  FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(a1, &v6, propvar);
  if ( FailIf >= 0 )
  {
    if ( wil::PropVariant::TryDetachString((wil::PropVariant *)propvar, a3) )
    {
      FailIf = 0;
    }
    else
    {
      *a3 = 0LL;
      if ( LOWORD(propvar[0]) )
        FailIf = PropVariantToStringAlloc(propvar, a3);
      else
        FailIf = -2147023728;
    }
  }
  PropVariantClear(propvar);
  return (unsigned int)FailIf;
}
