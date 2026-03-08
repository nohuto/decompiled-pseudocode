/*
 * XREFs of ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z @ 0x140671D5C
 * Callers:
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAVGPT_ENTRY@@@Z @ 0x140671CC8 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAVGPT_ENTRY@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14067224C (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x1402B8B70 (RtlComputeCrc32.c)
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1406735AC (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 */

__int64 __fastcall SC_GPT::ReadEntries(SC_DISK **this, struct GPT_HEADER *a2, struct GPT_ENTRY *a3)
{
  unsigned int v4; // esi
  int Sectors; // ebx

  v4 = *((_DWORD *)a2 + 20) * *((_DWORD *)a2 + 21);
  Sectors = SC_DISK::ReadSectors(
              *this,
              (-*((_DWORD *)*this + 59) & (v4 + *((_DWORD *)*this + 59) - 1)) >> *((_DWORD *)*this + 60),
              *((_QWORD *)a2 + 9),
              a3);
  if ( Sectors >= 0 && (unsigned int)RtlComputeCrc32(0, (char *)a3, v4) != *((_DWORD *)a2 + 22) )
    return (unsigned int)-1073741774;
  return (unsigned int)Sectors;
}
