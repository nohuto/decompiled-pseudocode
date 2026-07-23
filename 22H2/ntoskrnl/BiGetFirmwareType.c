/*
 * XREFs of BiGetFirmwareType @ 0x1407848DC
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x14077940C (BiExportStoreAlterationsToFirmware.c)
 *     BcdGetSystemStorePath @ 0x1407823B4 (BcdGetSystemStorePath.c)
 *     BiOpenSystemStore @ 0x14078371C (BiOpenSystemStore.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1407848A8 (BiIsLinkedToFirmwareVariable.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403FA0E0 (ZwQuerySystemInformation.c)
 */

__int64 BiGetFirmwareType()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  __int128 SystemInformation; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h]

  SystemInformation = 0LL;
  v3 = 0LL;
  if ( byte_140CDB155 )
    return (unsigned int)dword_140C10E5C;
  v1 = 1;
  if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, &SystemInformation, 0x20u, 0LL) >= 0 )
  {
    v1 = 0;
    if ( (int)v3 < 3 )
      v1 = v3;
  }
  dword_140C10E5C = v1;
  result = v1;
  byte_140CDB155 = 1;
  return result;
}
