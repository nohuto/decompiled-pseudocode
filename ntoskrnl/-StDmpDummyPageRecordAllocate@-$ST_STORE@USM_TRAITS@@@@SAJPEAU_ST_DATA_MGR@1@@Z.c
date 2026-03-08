/*
 * XREFs of ?StDmpDummyPageRecordAllocate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405C55BC
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x1405C5638 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     SmHpChunkAlloc @ 0x1405C811C (SmHpChunkAlloc.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpDummyPageRecordAllocate(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // r9d

  v2 = SmHpChunkAlloc(a1 + 192);
  v3 = 0;
  *(_QWORD *)(a1 + 760) = v2;
  if ( v2 )
  {
    *(_QWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(a1 + 768) = (*(_DWORD *)((*(_QWORD *)(a1 + 760) & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *(_DWORD *)(a1 + 456))
                          + ((unsigned int)*(_QWORD *)(a1 + 760)
                           - *(_DWORD *)(a1 + 472)
                           - (*(_QWORD *)(a1 + 760) & 0xFFFFF000))
                          / *(_DWORD *)(a1 + 464);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
