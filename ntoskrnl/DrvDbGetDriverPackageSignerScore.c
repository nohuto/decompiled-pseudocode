/*
 * XREFs of DrvDbGetDriverPackageSignerScore @ 0x140A69588
 * Callers:
 *     DrvDbGetDriverPackageMappedProperty @ 0x140864F88 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140A6924C (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140A6A524 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     DrvDbGetDriverPackageMappedProperty @ 0x140864F88 (DrvDbGetDriverPackageMappedProperty.c)
 */

__int64 __fastcall DrvDbGetDriverPackageSignerScore(__int64 *a1, const wchar_t *a2, void *a3, wchar_t *a4)
{
  __int64 result; // rax
  __int64 (*v5[3])[3]; // [rsp+40h] [rbp-18h] BYREF

  v5[0] = 0LL;
  result = DrvDbGetDriverPackageMappedProperty(
             a1,
             a2,
             a3,
             (__int64)&DEVPKEY_DriverPackage_SignerScore,
             v5,
             a4,
             4u,
             (unsigned int *)v5 + 1);
  if ( (int)result >= 0 && v5[0] != (__int64 (*)[3])0x400000007LL )
    return 3221225473LL;
  return result;
}
