/*
 * XREFs of RtlQueryPackageIdentity @ 0x1402F3D20
 * Callers:
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1405F758C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PfSnCheckModernApp @ 0x14067A288 (PfSnCheckModernApp.c)
 *     EtwpQueryTokenPackageInfo @ 0x1406F1B5C (EtwpQueryTokenPackageInfo.c)
 *     ExpGetProcessInformation @ 0x140708640 (ExpGetProcessInformation.c)
 *     EtwpApplyPackageIdFilter @ 0x140940A4C (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageIdentityEx @ 0x1402F3CC0 (RtlQueryPackageIdentityEx.c)
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
