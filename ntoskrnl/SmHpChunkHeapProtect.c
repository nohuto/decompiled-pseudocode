/*
 * XREFs of SmHpChunkHeapProtect @ 0x1402E7198
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402E6E88 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST_STORE_EXCEPTION_SOURCE@1@@Z @ 0x1405BFF44 (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C7294 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     SmHpBufferProtectEx @ 0x1405C7E94 (SmHpBufferProtectEx.c)
 */

__int64 __fastcall SmHpChunkHeapProtect(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int i; // ebx
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // rdx

  for ( i = 1; i < *(_DWORD *)(a1 + 256); ++i )
  {
    _BitScanReverse((unsigned int *)&v7, i);
    result = i;
    v9 = (_QWORD *)(*(_QWORD *)(a1 + 8 * v7) + 16 * (i ^ (unsigned __int64)(unsigned int)(1 << v7)));
    if ( *v9 )
      result = SmHpBufferProtectEx(v7, v9, a2, a3);
  }
  return result;
}
