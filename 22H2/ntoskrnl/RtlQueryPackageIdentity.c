/*
 * XREFs of RtlQueryPackageIdentity @ 0x14024EE40
 * Callers:
 *     EtwpQueryTokenPackageInfo @ 0x1406023FC (EtwpQueryTokenPackageInfo.c)
 *     PfSnCheckModernApp @ 0x1406308A8 (PfSnCheckModernApp.c)
 *     ExpGetProcessInformation @ 0x14063E980 (ExpGetProcessInformation.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14067CCB4 (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpApplyPackageIdFilter @ 0x1409408CC (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageIdentityEx @ 0x14024EDE0 (RtlQueryPackageIdentityEx.c)
 */

NTSTATUS __cdecl RtlQueryPackageIdentity(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PBOOLEAN Packaged)
{
  NTSTATUS result; // eax
  GUID *v7; // [rsp+28h] [rbp-30h]
  unsigned __int64 v8[3]; // [rsp+40h] [rbp-18h] BYREF

  v8[0] = 0LL;
  result = RtlQueryPackageIdentityEx(TokenHandle, PackageFullName, PackageSize, AppId, AppIdSize, v7, v8);
  if ( result >= 0 )
  {
    if ( Packaged )
      *Packaged = v8[0] != 0;
  }
  return result;
}
