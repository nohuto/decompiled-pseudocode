/*
 * XREFs of DrvDbOpenDriverPackageRegKey @ 0x1406B797C
 * Callers:
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406B469C (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbDispatchDriverPackage @ 0x1406B4DB0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140727E7C (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x14097DB80 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1406B91F0 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverPackageRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 2, a2, a3, a4, a5, a6, 0LL);
}
