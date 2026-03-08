/*
 * XREFs of KeSetIdealProcessorThreadByNumber @ 0x1403C91E4
 * Callers:
 *     KeSetIdealProcessorThread @ 0x1403C9190 (KeSetIdealProcessorThread.c)
 *     NtQueryInformationThread @ 0x1406A7BF0 (NtQueryInformationThread.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140236BF0 (KeGetProcessorIndexFromNumber.c)
 *     KeGetProcessorNumberFromIndex @ 0x1403644D0 (KeGetProcessorNumberFromIndex.c)
 *     KeSetIdealProcessorThreadEx @ 0x1403C9248 (KeSetIdealProcessorThreadEx.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadByNumber(
        struct _KTHREAD *a1,
        struct _PROCESSOR_NUMBER *a2,
        struct _PROCESSOR_NUMBER *a3)
{
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v6; // eax
  ULONG IdealProcessor; // ecx
  unsigned int v8; // edi
  ULONG ProcIndex; // [rsp+48h] [rbp+20h] BYREF

  ProcIndex = 0;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(a2);
  if ( ProcessorIndexFromNumber == -1 )
  {
    v8 = -1073741811;
    if ( a1 == KeGetCurrentThread() )
      IdealProcessor = a1->IdealProcessor;
    else
      IdealProcessor = a1->UserIdealProcessor;
  }
  else
  {
    v6 = KeSetIdealProcessorThreadEx(a1, ProcessorIndexFromNumber, &ProcIndex);
    IdealProcessor = ProcIndex;
    v8 = v6;
  }
  KeGetProcessorNumberFromIndex(IdealProcessor, a3);
  return v8;
}
