/*
 * XREFs of IvtBuildScalableModePasidDirectoryEntry @ 0x1405298D4
 * Callers:
 *     IvtInitializeScalableModePasidTables @ 0x14052AE74 (IvtInitializeScalableModePasidTables.c)
 *     IvtUpdateScalableModePasidTablesForPasid @ 0x14052BA10 (IvtUpdateScalableModePasidTablesForPasid.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 */

PHYSICAL_ADDRESS __fastcall IvtBuildScalableModePasidDirectoryEntry(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        LONGLONG *a5)
{
  PHYSICAL_ADDRESS result; // rax

  *a5 = 1LL;
  result = MmGetPhysicalAddress(*(PVOID *)(a2 + 8LL * ((a3 >> 6) & 0x3FFF) + 56));
  *a5 = result.QuadPart ^ (*(_DWORD *)a5 ^ result.LowPart) & 0xFFF;
  return result;
}
