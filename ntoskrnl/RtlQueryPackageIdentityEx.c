/*
 * XREFs of RtlQueryPackageIdentityEx @ 0x140298350
 * Callers:
 *     RtlQueryPackageIdentity @ 0x140298300 (RtlQueryPackageIdentity.c)
 *     PspIdentityBasedJobBreakaway @ 0x14079BB70 (PspIdentityBasedJobBreakaway.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x1402983B0 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall RtlQueryPackageIdentityEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  _QWORD *v7; // rbx
  __int64 result; // rax

  a6 = 0LL;
  v7 = a7;
  result = RtlQueryPackageClaims(a1, a2, a3, a4, a5, 0LL, (unsigned __int64)&a6 & -(__int64)(a7 != 0LL), 0LL);
  if ( (int)result >= 0 )
  {
    if ( v7 )
      *v7 = (unsigned int)a6;
  }
  return result;
}
