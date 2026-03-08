/*
 * XREFs of AcpiInitializeExternalResourceTranslation @ 0x1C0084124
 * Callers:
 *     DriverEntry @ 0x1C00A7300 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiInitializeExternalResourceTranslation(struct _DRIVER_OBJECT *a1)
{
  __int64 result; // rax

  ExInitializeResourceLite(&ExternalTranslatorInterfaceLock);
  ExternalTranslationInterface = 0LL;
  result = 0LL;
  ExternalTranslatorDriverObjectReference = a1;
  return result;
}
