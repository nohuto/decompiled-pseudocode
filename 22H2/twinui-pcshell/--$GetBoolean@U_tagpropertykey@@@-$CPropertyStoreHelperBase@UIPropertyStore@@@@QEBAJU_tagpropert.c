/*
 * XREFs of ??$GetBoolean@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEA_N@Z @ 0x180213228
 * Callers:
 *     ?IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180215DC0 (-IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1802132B8 (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 */

__int64 __fastcall CPropertyStoreHelperBase<IPropertyStore>::GetBoolean<_tagpropertykey>(
        __int64 a1,
        __int128 *a2,
        bool *a3)
{
  int FailIf; // ebx
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+30h] [rbp-38h]
  PROPVARIANT pvar; // [rsp+40h] [rbp-28h] BYREF
  __int16 v9; // [rsp+48h] [rbp-20h]

  *a3 = 0;
  LOWORD(pvar) = 0;
  v6 = *a2;
  v7 = *((_DWORD *)a2 + 4);
  FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(a1, &v6, &pvar);
  if ( FailIf >= 0 )
  {
    if ( (_WORD)pvar == 11 )
      *a3 = v9 == -1;
    else
      FailIf = -2147352571;
  }
  PropVariantClear(&pvar);
  return (unsigned int)FailIf;
}
