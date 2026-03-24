/*
 * XREFs of RtlQueryPackageIdentity @ 0x14024F4D0
 * Callers:
 *     EtwpQueryTokenPackageInfo @ 0x1406023FC (EtwpQueryTokenPackageInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x140698894 (PopEtGetProcessSidAndPackageIdentity.c)
 *     PfSnCheckModernApp @ 0x1406CB998 (PfSnCheckModernApp.c)
 *     ExpGetProcessInformation @ 0x1406F1260 (ExpGetProcessInformation.c)
 *     EtwpApplyPackageIdFilter @ 0x14094087C (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageIdentityEx @ 0x14024F470 (RtlQueryPackageIdentityEx.c)
 */

int __fastcall RtlQueryPackageIdentity(int a1, wchar_t *a2, size_t *a3, wchar_t *a4, size_t *a5, bool *a6)
{
  int result; // eax
  __int64 v7; // [rsp+28h] [rbp-30h]
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF

  v8[0] = 0LL;
  result = RtlQueryPackageIdentityEx(a1, a2, a3, a4, a5, v7, v8);
  if ( result >= 0 )
  {
    if ( a6 )
      *a6 = v8[0] != 0LL;
  }
  return result;
}
