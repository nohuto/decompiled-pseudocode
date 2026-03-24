/*
 * XREFs of MmMapViewOfSectionEx @ 0x1403529F0
 * Callers:
 *     MiMapCfgBitMapSection @ 0x1406FBA2C (MiMapCfgBitMapSection.c)
 *     MiMapProcessExecutable @ 0x1406FC5E0 (MiMapProcessExecutable.c)
 *     PspMapSystemDll @ 0x1406FCA38 (PspMapSystemDll.c)
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x1406FCBD8 (MiMapViewOfSectionExCommon.c)
 */

__int64 __fastcall MmMapViewOfSectionEx(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        volatile void *a8,
        int a9,
        int a10,
        __int64 a11)
{
  ULONGLONG ullMultiplicand; // [rsp+48h] [rbp-30h]

  LODWORD(ullMultiplicand) = a9;
  return MiMapViewOfSectionExCommon(a1, a2, 1, a3, a4, a5, a6, a7, a8, ullMultiplicand, a10, a11, 0, 0);
}
