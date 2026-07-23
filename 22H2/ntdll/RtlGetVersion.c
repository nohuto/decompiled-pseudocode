/*
 * XREFs of RtlGetVersion @ 0x18003E4E0
 * Callers:
 *     SbpUpdateCacheWithCurrentImpl @ 0x18003E2C0 (SbpUpdateCacheWithCurrentImpl.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x18003F860 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlVerifyVersionInfo @ 0x18007B0E0 (RtlVerifyVersionInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x18003BC7C (RtlStringCbCopyW.c)
 *     RtlGetNtProductType @ 0x18003CBB0 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x18003CC10 (RtlGetSuiteMask.c)
 *     ZwQueryLicenseValue @ 0x18009FF50 (ZwQueryLicenseValue.c)
 */

NTSTATUS __cdecl RtlGetVersion(PRTL_OSVERSIONINFOEXW VersionInformation)
{
  struct _PEB *v2; // rdi
  wchar_t *Buffer; // r8
  DWORD dwOSVersionInfoSize; // esi
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+80h] [rbp+38h] BYREF
  _NT_PRODUCT_TYPE NtProductType; // [rsp+88h] [rbp+40h] BYREF
  ULONG Type; // [rsp+90h] [rbp+48h] BYREF
  ULONG ResultDataSize; // [rsp+98h] [rbp+50h] BYREF

  DestinationString = 0LL;
  Data = 0;
  v2 = NtCurrentPeb();
  VersionInformation->dwMajorVersion = v2->OSMajorVersion;
  VersionInformation->dwMinorVersion = v2->OSMinorVersion;
  VersionInformation->dwBuildNumber = v2->OSBuildNumber;
  VersionInformation->dwPlatformId = v2->OSPlatformId;
  Buffer = v2->CSDVersion.Buffer;
  if ( Buffer && *Buffer )
  {
    if ( (int)RtlStringCbCopyW(VersionInformation->szCSDVersion, 0x100uLL, (__int64)Buffer) < 0 )
      VersionInformation->szCSDVersion[0] = 0;
  }
  else
  {
    VersionInformation->szCSDVersion[0] = 0;
  }
  dwOSVersionInfoSize = VersionInformation->dwOSVersionInfoSize;
  if ( ((VersionInformation->dwOSVersionInfoSize - 284) & 0xFFFFFFF7) == 0 )
  {
    VersionInformation->wServicePackMajor = HIBYTE(v2->OSCSDVersion);
    VersionInformation->wServicePackMinor = (unsigned __int8)v2->OSCSDVersion;
    VersionInformation->wSuiteMask = RtlGetSuiteMask();
    if ( dwOSVersionInfoSize == 292 )
      VersionInformation[1].dwOSVersionInfoSize = RtlGetSuiteMask() & 0x1FFFF;
    VersionInformation->wProductType = 0;
    if ( RtlGetNtProductType(&NtProductType) )
      VersionInformation->wProductType = NtProductType;
    RtlInitUnicodeString(&DestinationString, L"TerminalServices-RemoteConnectionManager-AllowAppServerMode");
    if ( ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) < 0
      || Data != 1
      || Type != 4
      || ResultDataSize != 4 )
    {
      VersionInformation->wSuiteMask &= ~0x10u;
      VersionInformation->wSuiteMask |= 0x100u;
      if ( VersionInformation->dwOSVersionInfoSize == 292 )
      {
        VersionInformation[1].dwOSVersionInfoSize &= 0xFFFDFFEF;
        VersionInformation[1].dwOSVersionInfoSize |= 0x100u;
      }
    }
  }
  return 0;
}
