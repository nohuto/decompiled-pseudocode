/*
 * XREFs of RtlQueryPackageIdentityEx @ 0x14024F470
 * Callers:
 *     RtlQueryPackageIdentity @ 0x14024F4D0 (RtlQueryPackageIdentity.c)
 *     PspIdentityBasedJobBreakaway @ 0x1405D9294 (PspIdentityBasedJobBreakaway.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x14024F0F0 (RtlQueryPackageClaims.c)
 */

int __fastcall RtlQueryPackageIdentityEx(
        int a1,
        wchar_t *a2,
        size_t *a3,
        wchar_t *a4,
        size_t *a5,
        __int64 a6,
        _QWORD *a7)
{
  _QWORD *v7; // rbx
  int result; // eax

  a6 = 0LL;
  v7 = a7;
  result = RtlQueryPackageClaims(
             a1,
             a2,
             a3,
             a4,
             a5,
             0LL,
             (_QWORD *)((unsigned __int64)&a6 & -(__int64)(a7 != 0LL)),
             0LL);
  if ( result >= 0 )
  {
    if ( v7 )
      *v7 = (unsigned int)a6;
  }
  return result;
}
