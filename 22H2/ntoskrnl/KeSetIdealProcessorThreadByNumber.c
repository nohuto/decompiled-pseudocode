/*
 * XREFs of KeSetIdealProcessorThreadByNumber @ 0x14037A2E4
 * Callers:
 *     KeSetIdealProcessorThread @ 0x14037A290 (KeSetIdealProcessorThread.c)
 *     NtQueryInformationThread @ 0x1405FB940 (NtQueryInformationThread.c)
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x14033E500 (KeGetProcessorNumberFromIndex.c)
 *     KeGetProcessorIndexFromNumber @ 0x140344E90 (KeGetProcessorIndexFromNumber.c)
 *     KeSetIdealProcessorThreadEx @ 0x14035C2A8 (KeSetIdealProcessorThreadEx.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadByNumber(struct _KTHREAD *a1, _PROCESSOR_NUMBER *a2, _PROCESSOR_NUMBER *a3)
{
  ULONG ProcessorIndexFromNumber; // eax
  _DWORD *v6; // r9
  unsigned int v7; // eax
  ULONG IdealProcessor; // ecx
  unsigned int v9; // edi
  ULONG ProcIndex; // [rsp+48h] [rbp+20h] BYREF

  ProcIndex = 0;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(a2);
  if ( ProcessorIndexFromNumber == -1 )
  {
    v9 = -1073741811;
    if ( a1 == KeGetCurrentThread() )
      IdealProcessor = a1->IdealProcessor;
    else
      IdealProcessor = a1->UserIdealProcessor;
  }
  else
  {
    v7 = KeSetIdealProcessorThreadEx((__int64)a1, ProcessorIndexFromNumber, (__int64)&ProcIndex, v6);
    IdealProcessor = ProcIndex;
    v9 = v7;
  }
  KeGetProcessorNumberFromIndex(IdealProcessor, a3);
  return v9;
}
