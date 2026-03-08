/*
 * XREFs of MiSplitPfnBitMapsForPartitionHierarchy @ 0x140658FCC
 * Callers:
 *     MiActOnPartitionNodePages @ 0x140655AB0 (MiActOnPartitionNodePages.c)
 *     MiAddPhysicalMemory @ 0x140A289D8 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiSplitPfnBitMaps @ 0x140809F08 (MiSplitPfnBitMaps.c)
 */

__int64 __fastcall MiSplitPfnBitMapsForPartitionHierarchy(__int64 a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = MiSplitPfnBitMaps();
    if ( !(_DWORD)result )
      break;
    if ( (unsigned __int16 *)a1 == MiSystemPartition )
      return 1LL;
    a1 = **(_QWORD **)(*(_QWORD *)(a1 + 200) + 64LL);
  }
  return result;
}
