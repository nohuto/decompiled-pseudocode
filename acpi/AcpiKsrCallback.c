/*
 * XREFs of AcpiKsrCallback @ 0x1C008B180
 * Callers:
 *     <none>
 * Callees:
 *     AcpiKsrPreparePersistentContext @ 0x1C008B1D0 (AcpiKsrPreparePersistentContext.c)
 */

void __fastcall AcpiKsrCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v3; // eax

  if ( Argument1 )
  {
    if ( Argument1 == (PVOID)1 )
    {
      KsrFreePersistedMemory(&GUID_ACPI_KSR_CONTEXT, 0LL, Argument2);
      AcpiKsrInProgress = 0;
    }
  }
  else
  {
    v3 = AcpiKsrPreparePersistentContext(CallbackContext, 0LL, Argument2);
    AcpiKsrInProgress = 1;
    AcpiKsrUseFallback = v3 < 0;
  }
}
