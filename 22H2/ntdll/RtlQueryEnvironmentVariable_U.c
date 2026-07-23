/*
 * XREFs of RtlQueryEnvironmentVariable_U @ 0x18004B140
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x18001B430 (RtlGetFullPathName_Ustr.c)
 *     RtlpCheckRelativeDrive @ 0x18004A4B8 (RtlpCheckRelativeDrive.c)
 *     IsProgramFilesPath @ 0x18004A744 (IsProgramFilesPath.c)
 *     RtlpWow64ThunkEnvironment32To64 @ 0x18004B06C (RtlpWow64ThunkEnvironment32To64.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D0F1C (LdrpInitializeExecutionOptions.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DEECC (RtlpLookupSafeCurDirList.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x1800157E0 (RtlQueryEnvironmentVariable.c)
 */

NTSTATUS __cdecl RtlQueryEnvironmentVariable_U(PVOID Environment, PUNICODE_STRING Name, PUNICODE_STRING Value)
{
  NTSTATUS result; // eax
  __int16 v5; // cx
  ULONG_PTR ReturnLength; // [rsp+48h] [rbp+10h] BYREF

  result = RtlQueryEnvironmentVariable(
             Environment,
             Name->Buffer,
             (unsigned __int64)Name->Length >> 1,
             Value->Buffer,
             (unsigned __int64)Value->MaximumLength >> 1,
             &ReturnLength);
  v5 = ReturnLength;
  if ( ReturnLength > 0x7FFF )
    return -1073741801;
  if ( result == -1073741789 )
    v5 = ReturnLength - 1;
  Value->Length = 2 * v5;
  return result;
}
