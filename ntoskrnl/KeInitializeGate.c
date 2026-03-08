/*
 * XREFs of KeInitializeGate @ 0x1402A4FEC
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     MiInitializePartition @ 0x140837D40 (MiInitializePartition.c)
 *     MiZeroHugeRangeCore @ 0x140A2B20C (MiZeroHugeRangeCore.c)
 *     MmScrubMemory @ 0x140A43E64 (MmScrubMemory.c)
 *     KiInitializeProcessor @ 0x140A8BBD4 (KiInitializeProcessor.c)
 *     sub_140B0C838 @ 0x140B0C838 (sub_140B0C838.c)
 *     sub_140B15070 @ 0x140B15070 (sub_140B15070.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeGate(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = a2;
  result = a1 + 8;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_WORD *)a1 = 263;
  *(_BYTE *)(a1 + 2) = 6;
  return result;
}
