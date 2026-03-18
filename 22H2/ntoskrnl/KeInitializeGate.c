/*
 * XREFs of KeInitializeGate @ 0x140293114
 * Callers:
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 *     MiInitializePartition @ 0x140838DF0 (MiInitializePartition.c)
 *     MiZeroHugeRangeCore @ 0x140A2DF6C (MiZeroHugeRangeCore.c)
 *     MmScrubMemory @ 0x140A46B34 (MmScrubMemory.c)
 *     KiInitializeProcessor @ 0x140A8F178 (KiInitializeProcessor.c)
 *     sub_140B10838 @ 0x140B10838 (sub_140B10838.c)
 *     sub_140B19070 @ 0x140B19070 (sub_140B19070.c)
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
