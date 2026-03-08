/*
 * XREFs of BiGetFirmwareType @ 0x14082D7AC
 * Callers:
 *     BcdGetSystemStorePath @ 0x14082C8E8 (BcdGetSystemStorePath.c)
 *     BiOpenSystemStore @ 0x14082CC40 (BiOpenSystemStore.c)
 *     BiIsLinkedToFirmwareVariable @ 0x14082D76C (BiIsLinkedToFirmwareVariable.c)
 *     BiExportStoreAlterationsToFirmware @ 0x140A59FB0 (BiExportStoreAlterationsToFirmware.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 */

__int64 BiGetFirmwareType()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  __int128 v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h]

  v2 = 0LL;
  v3 = 0LL;
  if ( byte_140CF7758 )
    return (unsigned int)dword_140C0B4D8;
  v1 = 1;
  if ( (int)ZwQuerySystemInformation(90LL, (__int64)&v2) >= 0 )
  {
    v1 = 0;
    if ( (int)v3 < 3 )
      v1 = v3;
  }
  dword_140C0B4D8 = v1;
  result = v1;
  byte_140CF7758 = 1;
  return result;
}
