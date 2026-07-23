/*
 * XREFs of LdrAppxHandleIntegrityFailure @ 0x1800CB520
 * Callers:
 *     LdrpMapDllNtFileName @ 0x1800610A4 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlQueryPackageIdentity @ 0x18006A9F0 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtQueryValueKey @ 0x18009D7C0 (NtQueryValueKey.c)
 *     ZwTerminateProcess @ 0x18009DA60 (ZwTerminateProcess.c)
 *     RtlCaptureContext @ 0x1800A1640 (RtlCaptureContext.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CB730 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CB7B8 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800CB8B0 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800CBA04 (LdrpAppxGetRemediationRegistryKey.c)
 *     RtlReportException @ 0x1800DC930 (RtlReportException.c)
 */

__int64 __fastcall LdrAppxHandleIntegrityFailure(unsigned int a1)
{
  NTSTATUS RemediationRegistryKey; // ebx
  _WORD *v3; // rdi
  __int64 v4; // rcx
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  ULONG_PTR PackageSize; // [rsp+40h] [rbp-C0h] BYREF
  _WORD *v9; // [rsp+48h] [rbp-B8h]
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h]
  _UNICODE_STRING ValueName; // [rsp+58h] [rbp-A8h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+70h] [rbp-90h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+110h] [rbp+10h] BYREF
  _DWORD KeyValueInformation[20]; // [rsp+5E0h] [rbp+4E0h] BYREF
  WCHAR PackageFullName[128]; // [rsp+630h] [rbp+530h] BYREF

  PackageSize = 256LL;
  *(_DWORD *)&ValueName.Length = 1441812;
  ValueName.Buffer = L"BinaryHash";
  RemediationRegistryKey = RtlQueryPackageIdentity(
                             (HANDLE)0xFFFFFFFFFFFFFFFCLL,
                             PackageFullName,
                             &PackageSize,
                             0LL,
                             0LL,
                             0LL);
  if ( RemediationRegistryKey < 0 )
    goto LABEL_14;
  RemediationRegistryKey = LdrpAppxGetRemediationRegistryKey(a1, PackageFullName, &KeyHandle);
  if ( RemediationRegistryKey < 0 )
    goto LABEL_14;
  RemediationRegistryKey = LdrpAppxGetBinaryNameKeyInformation(KeyHandle);
  if ( RemediationRegistryKey >= 0 )
  {
    v3 = v9;
    LODWORD(v4) = 0;
    if ( *v9 )
    {
      do
        v4 = (unsigned int)(v4 + 1);
      while ( v9[v4] );
    }
    memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
    RemediationRegistryKey = NtQueryValueKey(
                               KeyHandle,
                               &ValueName,
                               KeyValuePartialInformation,
                               KeyValueInformation,
                               0x50u,
                               &ResultLength);
    if ( RemediationRegistryKey >= 0 )
    {
      if ( KeyValueInformation[1] != 3 || !KeyValueInformation[2] )
        RemediationRegistryKey = -1073739509;
      if ( RemediationRegistryKey >= 0 )
        LdrpAppxEtwIntegrityFailure(a1, PackageFullName, v3);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  NtClose(KeyHandle);
  if ( RemediationRegistryKey < 0 )
LABEL_14:
    LdrpAppxEtwGenericIntegrityFailure((unsigned int)RemediationRegistryKey);
  if ( a1 != -1073740673 )
  {
    memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
    ExceptionRecord.ExceptionCode = 101457950;
    ExceptionRecord.ExceptionAddress = LdrAppxHandleIntegrityFailure;
    ExceptionRecord.ExceptionFlags = 1;
    memset(&ContextRecord, 0, sizeof(ContextRecord));
    RtlCaptureContext(&ContextRecord);
    RtlReportException(&ExceptionRecord, &ContextRecord, 2u);
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord.ExceptionCode);
  }
  return 3221225781LL;
}
