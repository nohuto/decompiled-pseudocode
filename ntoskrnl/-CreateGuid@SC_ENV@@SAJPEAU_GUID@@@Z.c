/*
 * XREFs of ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x14093D4B0
 * Callers:
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14067250C (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?GenerateId@SC_DISK@@AEAAJXZ @ 0x14067305C (-GenerateId@SC_DISK@@AEAAJXZ.c)
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x140673F9C (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     ExUuidCreate @ 0x1406F7EF0 (ExUuidCreate.c)
 */

NTSTATUS __fastcall SC_ENV::CreateGuid(struct _GUID *a1)
{
  return ExUuidCreate(a1);
}
