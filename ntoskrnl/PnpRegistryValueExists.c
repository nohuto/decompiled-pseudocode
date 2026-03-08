/*
 * XREFs of PnpRegistryValueExists @ 0x1403D0AF8
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x140877A34 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgQueryDriverNode @ 0x140878BA8 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgMigrateRootDevice @ 0x14095BC74 (PiDevCfgMigrateRootDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 */

char __fastcall PnpRegistryValueExists(void *a1, UNICODE_STRING *a2)
{
  char v2; // bl
  NTSTATUS v3; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  __int128 KeyValueInformation; // [rsp+38h] [rbp-20h] BYREF

  v2 = 0;
  ResultLength = 0;
  KeyValueInformation = 0LL;
  v3 = ZwQueryValueKey(a1, a2, KeyValueBasicInformation, &KeyValueInformation, 0x10u, &ResultLength);
  if ( (int)(v3 + 0x80000000) < 0 || v3 == -2147483643 )
    return 1;
  return v2;
}
