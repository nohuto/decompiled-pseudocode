/*
 * XREFs of ?StpKeyCompare@?$ST_STORE@USM_TRAITS@@@@SAHPEBX0@Z @ 0x1405C76A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StpKeyCompare(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 != *a2;
  else
    return 0xFFFFFFFFLL;
}
