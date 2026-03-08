/*
 * XREFs of DrvDbOpenDriverPackageRegKey @ 0x1408653CC
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x140864E40 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140864F88 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140A6924C (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A6A524 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140865658 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverPackageRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 2, a2, a3, a4, a5, a6, 0LL);
}
