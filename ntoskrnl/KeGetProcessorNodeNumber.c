/*
 * XREFs of KeGetProcessorNodeNumber @ 0x1402FC5A0
 * Callers:
 *     PspAllocateThread @ 0x1406B00F4 (PspAllocateThread.c)
 *     HvlInitializeProcessor @ 0x14080AFA0 (HvlInitializeProcessor.c)
 *     MmInitializeProcessor @ 0x140A86740 (MmInitializeProcessor.c)
 *     KiInitializeThreadCycleTable @ 0x140A89F10 (KiInitializeThreadCycleTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNodeNumber(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL);
}
