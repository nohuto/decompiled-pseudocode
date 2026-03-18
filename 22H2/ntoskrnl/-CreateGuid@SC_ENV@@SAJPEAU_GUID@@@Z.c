/*
 * XREFs of ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x1409404D0
 * Callers:
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x140674B5C (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?GenerateId@SC_DISK@@AEAAJXZ @ 0x1406756AC (-GenerateId@SC_DISK@@AEAAJXZ.c)
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1406765EC (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     ExUuidCreate @ 0x140688920 (ExUuidCreate.c)
 */

NTSTATUS __fastcall SC_ENV::CreateGuid(struct _GUID *a1)
{
  return ExUuidCreate(a1);
}
