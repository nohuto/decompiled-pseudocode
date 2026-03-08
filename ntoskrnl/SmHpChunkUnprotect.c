/*
 * XREFs of SmHpChunkUnprotect @ 0x1405C8234
 * Callers:
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1405C3B64 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x1405C4608 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 * Callees:
 *     SmHpBufferProtectEx @ 0x1405C7E94 (SmHpBufferProtectEx.c)
 */

__int64 __fastcall SmHpChunkUnprotect(__int64 a1, __int64 a2, char a3, unsigned __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rcx

  v5 = *(unsigned int *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  _BitScanReverse((unsigned int *)&v6, v5);
  return SmHpBufferProtectEx(v6, *(_QWORD *)(a1 + 8 * v6) + 16 * (v5 ^ (unsigned int)(1 << v6)), a3, a4);
}
