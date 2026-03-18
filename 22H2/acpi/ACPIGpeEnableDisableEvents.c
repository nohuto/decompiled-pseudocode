/*
 * XREFs of ACPIGpeEnableDisableEvents @ 0x1C002C2BC
 * Callers:
 *     ACPIInterruptDispatchEventDpc @ 0x1C0003670 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIInterruptServiceRoutine @ 0x1C0003D30 (ACPIInterruptServiceRoutine.c)
 *     ACPIVectorDisable @ 0x1C0004FF0 (ACPIVectorDisable.c)
 *     ACPIVectorEnable @ 0x1C00050C0 (ACPIVectorEnable.c)
 *     ACPIGpeBuildEventMasks @ 0x1C002BE64 (ACPIGpeBuildEventMasks.c)
 *     ACPIGpeClearEventMasks @ 0x1C002C0F8 (ACPIGpeClearEventMasks.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C002C320 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIEnableInitializeACPI @ 0x1C0036910 (ACPIEnableInitializeACPI.c)
 *     ACPIVectorConnect @ 0x1C0043E60 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x1C0044060 (ACPIVectorDisconnect.c)
 *     ACPILoadProcessFADT @ 0x1C00A99AC (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIWriteGpeEnableRegister @ 0x1C0038B04 (ACPIWriteGpeEnableRegister.c)
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
