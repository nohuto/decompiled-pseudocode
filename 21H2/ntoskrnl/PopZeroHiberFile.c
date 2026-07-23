/*
 * XREFs of PopZeroHiberFile @ 0x1408E7624
 * Callers:
 *     PopEnableHiberFile @ 0x1407926A0 (PopEnableHiberFile.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     MmZeroPageWrite @ 0x14023E0E8 (MmZeroPageWrite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1403FA7A0 (ZwQueryInformationFile.c)
 *     PopDiagTraceZeroHiberFile @ 0x1409B3404 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x1409B3420 (PopDiagTraceZeroHiberFileEnd.c)
 */

__int64 __fastcall PopZeroHiberFile(HANDLE FileHandle, __int64 a2)
{
  __int64 v4; // rcx
  signed __int64 v5; // rax
  signed __int64 v7; // [rsp+30h] [rbp-40h] BYREF
  __int64 v8; // [rsp+38h] [rbp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  __int128 FileInformation; // [rsp+50h] [rbp-20h] BYREF
  __int64 v11; // [rsp+60h] [rbp-10h]

  IoStatusBlock = 0LL;
  v11 = 0LL;
  FileInformation = 0LL;
  PopDiagTraceZeroHiberFile();
  if ( ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation) >= 0 )
  {
    v7 = 0LL;
    v4 = FileInformation;
    v5 = 0LL;
    do
    {
      v8 = v4 - v5;
      if ( (int)MmZeroPageWrite(a2, (__int64)&v7, &v8, 0x10000u) >= 0 )
        break;
      v4 = FileInformation;
      v5 = (v7 & 0xFFFFFFFFFFFF0000uLL) + 0x10000;
      v7 = v5;
    }
    while ( v5 < (__int64)FileInformation );
  }
  return PopDiagTraceZeroHiberFileEnd();
}
