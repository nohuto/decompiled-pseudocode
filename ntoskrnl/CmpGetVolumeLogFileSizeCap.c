/*
 * XREFs of CmpGetVolumeLogFileSizeCap @ 0x14079227C
 * Callers:
 *     CmpOpenHiveFile @ 0x1406C05C4 (CmpOpenHiveFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQueryVolumeInformationFile @ 0x140412C30 (ZwQueryVolumeInformationFile.c)
 */

__int64 __fastcall CmpGetVolumeLogFileSizeCap(void *a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  __int128 FsInformation; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]

  v5 = 0LL;
  FsInformation = 0LL;
  IoStatusBlock = 0LL;
  if ( ZwQueryVolumeInformationFile(a1, &IoStatusBlock, &FsInformation, 0x18u, FileFsSizeInformation) < 0 )
    return 0x2000000LL;
  result = 0x2000000LL;
  v2 = ((unsigned __int64)FsInformation * (unsigned int)v5 * (unsigned __int64)HIDWORD(v5)) >> 11;
  if ( (unsigned int)v2 < 0x2000000 )
  {
    result = (unsigned int)v2;
    if ( (unsigned int)v2 <= 0x80000 )
      return 0x80000LL;
  }
  return result;
}
