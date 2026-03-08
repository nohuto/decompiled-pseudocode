/*
 * XREFs of ?StDmUpdateRegionsToCompactBitmap@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1405C5548
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x1402E74F0 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x1405C614C (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ST_STORE<SM_TRAITS>::StDmUpdateRegionsToCompactBitmap(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int result; // eax
  _BYTE *v6; // rcx
  _BYTE *v7; // rcx

  result = (unsigned int)(*(_DWORD *)(a1 + 808) + 1) >> 1;
  if ( a3 < result && a3 )
  {
    if ( a4 >= result || !a4 )
    {
      --*(_DWORD *)(a1 + 1088);
      v6 = (_BYTE *)(*(_QWORD *)(a1 + 1080) + ((unsigned __int64)a2 >> 3));
      result = (char)*v6 | (1 << (a2 & 7));
      *v6 = result;
    }
  }
  else if ( a4 < result && a4 )
  {
    v7 = (_BYTE *)(*(_QWORD *)(a1 + 1080) + ((unsigned __int64)a2 >> 3));
    result = (char)*v7 & ~(1 << (a2 & 7));
    *v7 = result;
    ++*(_DWORD *)(a1 + 1088);
  }
  return result;
}
