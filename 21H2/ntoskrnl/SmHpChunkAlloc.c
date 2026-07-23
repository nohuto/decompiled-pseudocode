/*
 * XREFs of SmHpChunkAlloc @ 0x14028822C
 * Callers:
 *     ?StDmpDummyPageRecordAllocate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1402519D0 (-StDmpDummyPageRecordAllocate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14028841C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     SmHpBufferAlloc @ 0x140240754 (SmHpBufferAlloc.c)
 *     SmHpBufferUpdateFullness @ 0x1402882B8 (SmHpBufferUpdateFullness.c)
 */

_WORD *__fastcall SmHpChunkAlloc(_DWORD *a1)
{
  unsigned int v1; // eax
  _WORD *v3; // rbx
  int v5; // ecx
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx

  v1 = a1[71];
  v3 = 0LL;
  while ( !_BitScanForward((unsigned int *)&v5, v1) )
  {
    if ( !SmHpBufferAlloc(a1) )
      return v3;
    v1 = a1[71];
  }
  v6 = *(_QWORD *)&a1[4 * v5 + 72];
  v7 = *(unsigned int *)(v6 + 16);
  _BitScanReverse((unsigned int *)&v8, v7);
  v9 = *(_QWORD *)&a1[2 * v8] + 16 * (v7 ^ (unsigned int)(1 << v8));
  v3 = (_WORD *)(v6 + *(unsigned __int16 *)(v9 + 8));
  *(_WORD *)(v9 + 8) = *v3;
  SmHpBufferUpdateFullness(a1, v9, 0xFFFFFFFFLL);
  ++a1[141];
  return v3;
}
