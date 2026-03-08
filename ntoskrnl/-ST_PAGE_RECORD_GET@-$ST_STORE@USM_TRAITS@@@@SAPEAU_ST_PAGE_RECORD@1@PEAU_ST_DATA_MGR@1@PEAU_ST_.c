/*
 * XREFs of ?ST_PAGE_RECORD_GET@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14045C554
 * Callers:
 *     ?StDmEtwPageRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405C369C (-StDmEtwPageRundown@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1405C3B64 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 *     ?StDmpSinglePageLookup@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAPEAU_ST_PAGE_RECORD@1@@Z @ 0x1405C5DEC (-StDmpSinglePageLookup@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@P.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall ST_STORE<SM_TRAITS>::ST_PAGE_RECORD_GET(_DWORD *a1, __int64 a2)
{
  int v3; // r11d
  __int64 v4; // r8
  unsigned int v5; // ebx
  int v6; // edi
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 i; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  _DWORD *v12; // r8

  v3 = a1[114];
  v4 = (unsigned int)(*(_DWORD *)(a2 + 4) >> v3);
  v5 = a1[115];
  v6 = a1[116];
  v7 = (unsigned int)a1[118];
  _BitScanReverse((unsigned int *)&v8, v4);
  for ( i = v6 * (*(_DWORD *)(a2 + 4) & v5)
          + *(_QWORD *)(*(_QWORD *)&a1[2 * v8 + 48] + 16 * (v4 ^ (unsigned int)(1 << v8)));
        ;
        i = v6 * (v12[1] & v5) + *(_QWORD *)(*(_QWORD *)&a1[2 * v11 + 48] + 16 * (v10 ^ (unsigned int)(1 << v11))) )
  {
    v12 = (_DWORD *)(v7 + i);
    if ( *v12 != -1 )
      break;
    v10 = (unsigned int)(v12[1] >> v3);
    _BitScanReverse((unsigned int *)&v11, v10);
  }
  return v12;
}
