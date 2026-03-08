/*
 * XREFs of PiDevCfgFreeMigrationContext @ 0x140877348
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x1408758B8 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgInitMigrationContext @ 0x140875994 (PiDevCfgInitMigrationContext.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 */

NTSTATUS __fastcall PiDevCfgFreeMigrationContext(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  NTSTATUS result; // eax

  if ( *(_QWORD *)a1 )
  {
    v2 = *(void **)(a1 + 24);
    if ( v2 )
      ZwClose(v2);
    v3 = *(void **)(a1 + 16);
    if ( v3 )
      ZwClose(v3);
    v4 = *(void **)(a1 + 32);
    if ( v4 )
      ZwClose(v4);
    v5 = *(void **)(a1 + 8);
    if ( v5 )
      ZwClose(v5);
    return ZwClose(*(HANDLE *)a1);
  }
  return result;
}
