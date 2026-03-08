/*
 * XREFs of AcpiKsrPreparePersistentContext @ 0x1C008B1D0
 * Callers:
 *     AcpiKsrCallback @ 0x1C008B180 (AcpiKsrCallback.c)
 * Callees:
 *     <none>
 */

__int64 AcpiKsrPreparePersistentContext()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( (_DWORD)AcpiKsrContext != 1481917259 )
  {
    AcpiKsrContext = 0x15854434BuLL;
    *((_QWORD *)&AcpiKsrContext + 1) = *((_BYTE *)AcpiInformation + 84) & 1;
  }
  return KsrPersistMetadata(&GUID_ACPI_KSR_CONTEXT, &AcpiKsrContext, 16LL, &v1);
}
