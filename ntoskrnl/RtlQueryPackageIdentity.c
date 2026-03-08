/*
 * XREFs of RtlQueryPackageIdentity @ 0x140298300
 * Callers:
 *     ExpGetProcessInformation @ 0x1406A9140 (ExpGetProcessInformation.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14070364C (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpQueryTokenPackageInfo @ 0x14071DD5C (EtwpQueryTokenPackageInfo.c)
 *     PfSnCheckModernApp @ 0x1407E49F8 (PfSnCheckModernApp.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F2138 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageIdentityEx @ 0x140298350 (RtlQueryPackageIdentityEx.c)
 */

__int64 __fastcall RtlQueryPackageIdentity(int a1, int a2, int a3, int a4, __int64 a5, _BYTE *a6)
{
  __int64 result; // rax

  result = RtlQueryPackageIdentityEx(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
  {
    if ( a6 )
      *a6 = 0;
  }
  return result;
}
