/*
 * XREFs of RtlQueryPackageIdentity @ 0x140204280
 * Callers:
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406745EC (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpQueryTokenPackageInfo @ 0x14070B934 (EtwpQueryTokenPackageInfo.c)
 *     ExpGetProcessInformation @ 0x1407B6CA0 (ExpGetProcessInformation.c)
 *     PfSnCheckModernApp @ 0x1407DCA0C (PfSnCheckModernApp.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F4DA0 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageIdentityEx @ 0x1402042D0 (RtlQueryPackageIdentityEx.c)
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
