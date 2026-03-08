/*
 * XREFs of CmpInvalidateAllHigherLayerKcbs @ 0x140A1D088
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x1406B617C (CmpTransMgrFreeVolatileData.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1CE0C (CmpEnumerateAllHigherLayerKcbs.c)
 */

_UNKNOWN **__fastcall CmpInvalidateAllHigherLayerKcbs(__int64 a1, int a2, int a3, __int64 a4)
{
  _DWORD v5[6]; // [rsp+40h] [rbp-18h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  return CmpEnumerateAllHigherLayerKcbs(
           a1,
           (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
           (unsigned int (__fastcall *)(ULONG_PTR, __int64, __int64))CmpInvalidateAllHigherLayerKcbsPostCallback,
           a4,
           (__int64)v5,
           1,
           1);
}
