/*
 * XREFs of ?GetPropertyFromIDList@?$CItemIDFactory@UAPPITEM@@$0FDFAFAEB@@@SAJPEFBU_ITEMIDLIST@@AEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180156F50
 * Callers:
 *     ?GetPropertyFromPidl@Impl@TaskbarPinHelper@@YAJPEFBU_ITEMIDLIST@@AEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180157004 (-GetPropertyFromPidl@Impl@TaskbarPinHelper@@YAJPEFBU_ITEMIDLIST@@AEBU_tagpropertykey@@PEAUtagPRO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CItemIDFactory<APPITEM,1397772353>::GetPropertyFromIDList(
        unsigned __int16 *a1,
        DWORD a2,
        __int64 a3)
{
  unsigned __int16 *v4; // rdx
  HRESULT v5; // r9d
  DWORD v6; // eax
  const SERIALIZEDPROPSTORAGE *v7; // rcx

  v4 = a1;
  v5 = -2147024809;
  *(_OWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  if ( a1 && *a1 >= 0x16u )
  {
    if ( *(_DWORD *)(a1 + 3) != 1397772353 || *a1 < (unsigned __int64)a1[5] + 22 )
      goto LABEL_5;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 && v4[5] )
  {
    v6 = v4[5];
    v7 = (const SERIALIZEDPROPSTORAGE *)(v4 + 11);
    goto LABEL_6;
  }
LABEL_5:
  v6 = a2;
  v7 = 0LL;
LABEL_6:
  if ( v7 )
  {
    v5 = PSGetPropertyFromPropertyStorage(v7, v6, &rpkey, (PROPVARIANT *)a3);
    if ( v5 >= 0 && !*(_WORD *)a3 )
      return (unsigned int)-2147023288;
  }
  return (unsigned int)v5;
}
