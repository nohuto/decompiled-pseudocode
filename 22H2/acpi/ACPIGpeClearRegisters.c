/*
 * XREFs of ACPIGpeClearRegisters @ 0x1C0026834
 * Callers:
 *     ACPIEnableInitializeACPI @ 0x1C0010040 (ACPIEnableInitializeACPI.c)
 *     ACPIGpeClearEventMasks @ 0x1C0025C40 (ACPIGpeClearEventMasks.c)
 *     ACPILoadProcessFADT @ 0x1C00BECCC (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIWriteGpeStatusRegister @ 0x1C0026890 (ACPIWriteGpeStatusRegister.c)
 *     ACPIReadGpeStatusRegister @ 0x1C0026904 (ACPIReadGpeStatusRegister.c)
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
