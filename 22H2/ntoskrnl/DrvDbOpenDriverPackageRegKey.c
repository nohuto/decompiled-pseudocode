/*
 * XREFs of DrvDbOpenDriverPackageRegKey @ 0x140876DFC
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x140876870 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1408769B8 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140A6BF4C (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A6D224 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140877088 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverPackageRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 2, a2, a3, a4, a5, a6, 0LL);
}
