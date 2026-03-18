/*
 * XREFs of CmpGetFileSize @ 0x140751640
 * Callers:
 *     CmpInitializeActualFileSizes @ 0x140751538 (CmpInitializeActualFileSizes.c)
 *     CmpLoadHiveThread @ 0x1408283D0 (CmpLoadHiveThread.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x14041A8C0 (ZwQueryInformationFile.c)
 */

NTSTATUS __fastcall CmpGetFileSize(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  __int128 FileInformation; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]

  v6 = 0LL;
  FileInformation = 0LL;
  IoStatusBlock = 0LL;
  result = ZwQueryInformationFile(a1, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  if ( result >= 0 )
  {
    *a2 = *((_QWORD *)&FileInformation + 1);
    return 0;
  }
  return result;
}
