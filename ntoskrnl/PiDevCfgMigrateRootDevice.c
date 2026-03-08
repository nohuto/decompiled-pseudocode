/*
 * XREFs of PiDevCfgMigrateRootDevice @ 0x14095BC74
 * Callers:
 *     PiDevCfgProcessDevice @ 0x140873308 (PiDevCfgProcessDevice.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1403C0C9C (PnpValidateRegistryDword.c)
 *     PnpRegistryValueExists @ 0x1403D0AF8 (PnpRegistryValueExists.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     PiDevCfgMigrateDevice @ 0x1408758B8 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x14095BD68 (PiDevCfgOpenDeviceMigrationKey.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgMigrateRootDevice(int a1, __int64 a2, _DWORD *a3)
{
  const WCHAR *v5; // rcx
  int v7; // edi
  int v8; // ebx
  unsigned int *v9; // rcx
  UNICODE_STRING v11; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+88h] [rbp+48h] BYREF

  v12 = 0LL;
  v5 = *(const WCHAR **)(a2 + 8);
  v11 = 0LL;
  LOBYTE(v7) = 0;
  v8 = PiDevCfgOpenDeviceMigrationKey(v5);
  if ( v8 >= 0 )
  {
    if ( IopGetRegistryValue(0LL, L"ConfigFlags", 0, &v12) < 0 )
      return (unsigned int)-1073741823;
    if ( PnpValidateRegistryDword(v12) )
      v7 = *(unsigned int *)((char *)v9 + v9[2]);
    ExFreePoolWithTag(v9, 0);
    if ( (v7 & 1) == 0 )
      return (unsigned int)-1073741823;
    v11.Buffer = L"DriverInfName";
    *(_DWORD *)&v11.Length = 1835034;
    if ( PnpRegistryValueExists(0LL, &v11) )
      return (unsigned int)-1073741823;
    else
      return (unsigned int)PiDevCfgMigrateDevice(a1, a2, 0LL, 0LL, a3, 0LL);
  }
  return (unsigned int)v8;
}
