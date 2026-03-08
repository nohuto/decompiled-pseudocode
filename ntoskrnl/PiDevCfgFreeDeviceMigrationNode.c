/*
 * XREFs of PiDevCfgFreeDeviceMigrationNode @ 0x14095B4F0
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x1408758B8 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095AB1C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14095BE90 (PiDevCfgQueryDeviceMigrationNode.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiDevCfgFreeDeviceMigrationNode(char *P)
{
  void *v2; // rcx
  UNICODE_STRING *v3; // rdi
  __int64 v4; // rsi

  v2 = (void *)*((_QWORD *)P + 5);
  if ( v2 )
    ZwClose(v2);
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 24));
  v3 = (UNICODE_STRING *)(P + 48);
  v4 = 2LL;
  do
  {
    RtlFreeUnicodeString(v3++);
    --v4;
  }
  while ( v4 );
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 104));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 120));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 136));
  RtlFreeUnicodeString((PUNICODE_STRING)P + 10);
  ExFreePoolWithTag(P, 0);
}
