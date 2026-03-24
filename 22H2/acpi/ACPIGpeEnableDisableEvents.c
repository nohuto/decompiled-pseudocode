/*
 * XREFs of ACPIGpeEnableDisableEvents @ 0x1C00265D0
 * Callers:
 *     ACPIEnableInitializeACPI @ 0x1C0010040 (ACPIEnableInitializeACPI.c)
 *     ACPIGpeBuildEventMasks @ 0x1C001718C (ACPIGpeBuildEventMasks.c)
 *     ACPIGpeClearEventMasks @ 0x1C0025C40 (ACPIGpeClearEventMasks.c)
 *     ACPIInterruptServiceRoutine @ 0x1C0025E90 (ACPIInterruptServiceRoutine.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0026060 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C0055F80 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIVectorConnect @ 0x1C0060B20 (ACPIVectorConnect.c)
 *     ACPIVectorDisable @ 0x1C0060D00 (ACPIVectorDisable.c)
 *     ACPIVectorDisconnect @ 0x1C0060DF0 (ACPIVectorDisconnect.c)
 *     ACPIVectorEnable @ 0x1C0060F30 (ACPIVectorEnable.c)
 *     ACPILoadProcessFADT @ 0x1C00BECCC (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIWriteGpeEnableRegister @ 0x1C002662C (ACPIWriteGpeEnableRegister.c)
 */

void *__fastcall ACPIGpeEnableDisableEvents(char a1, __int64 a2)
{
  void *result; // rax
  unsigned int i; // ebx

  result = AcpiInformation;
  for ( i = 0; i < *((unsigned __int16 *)AcpiInformation + 51); ++i )
  {
    LOBYTE(a2) = a1 != 0 ? *((_BYTE *)GpeCurEnable + i) : 0;
    ACPIWriteGpeEnableRegister(i, a2);
    result = AcpiInformation;
  }
  return result;
}
