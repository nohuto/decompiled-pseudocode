/*
 * XREFs of CmpInvalidateSubtree @ 0x14074C208
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x1406B617C (CmpTransMgrFreeVolatileData.c)
 *     CmpPerformUnloadKey @ 0x14074A194 (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140A078D8 (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x140A08004 (CmRestoreKey.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140A1D0D0 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 * Callees:
 *     CmpEnumerateAllOpenSubKeys @ 0x14074B88C (CmpEnumerateAllOpenSubKeys.c)
 */

__int64 __fastcall CmpInvalidateSubtree(__int64 a1, int a2, int a3, __int64 a4, unsigned int *a5)
{
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+24h] [rbp-24h]
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+2Ch] [rbp-1Ch]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v7 = 0;
  v9 = 0;
  v8 = a3;
  v6 = a2;
  v10 = a4;
  result = CmpEnumerateAllOpenSubKeys(a1, a3 & 1, (__int64)CmpInvalidateSubtreeWorker, (__int64)&v6);
  if ( a5 )
  {
    result = v7;
    *a5 = v7;
  }
  return result;
}
