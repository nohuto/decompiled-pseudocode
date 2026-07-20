/*
 * XREFs of SmpQueryFileSize @ 0x140015B48
 * Callers:
 *     SmpCopyFile @ 0x1400152DC (SmpCopyFile.c)
 *     SmpGetDumpDestination @ 0x1400157C8 (SmpGetDumpDestination.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmpQueryFileSize(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  _QWORD FileInformation[3]; // [rsp+40h] [rbp-28h] BYREF

  result = NtQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  if ( result >= 0 )
    *a2 = FileInformation[0];
  return result;
}
