/*
 * XREFs of KeInitializeGate @ 0x14032BE90
 * Callers:
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     PspSetContextThreadInternal @ 0x1406C0A5C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1406C0C14 (PspGetContextThreadInternal.c)
 *     MiInitializePartition @ 0x1407974EC (MiInitializePartition.c)
 *     MmScrubMemory @ 0x1408DC16C (MmScrubMemory.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090EC1C (PspRundownUmsThreadForApcDelivery.c)
 *     KiInitializeProcessor @ 0x14099EE3C (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeGate(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = 0;
  result = a1 + 8;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_WORD *)a1 = 263;
  *(_BYTE *)(a1 + 2) = 6;
  return result;
}
