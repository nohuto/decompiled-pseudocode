/*
 * XREFs of ACPIGpeClearRegisters @ 0x1C002C240
 * Callers:
 *     ACPIGpeClearEventMasks @ 0x1C002C0D8 (ACPIGpeClearEventMasks.c)
 *     ACPIEnableInitializeACPI @ 0x1C00368F0 (ACPIEnableInitializeACPI.c)
 *     ACPILoadProcessFADT @ 0x1C00A999C (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIReadGpeStatusRegister @ 0x1C0038A4C (ACPIReadGpeStatusRegister.c)
 *     ACPIWriteGpeStatusRegister @ 0x1C0038B84 (ACPIWriteGpeStatusRegister.c)
 */

void *ACPIGpeClearRegisters()
{
  void *result; // rax
  unsigned int i; // ebx

  result = AcpiInformation;
  for ( i = 0; i < *((unsigned __int16 *)AcpiInformation + 51); ++i )
  {
    ACPIReadGpeStatusRegister(i);
    ACPIWriteGpeStatusRegister(i);
    result = AcpiInformation;
  }
  return result;
}
