/*
 * XREFs of ExInitLicenseCallback @ 0x14086174C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     ExCreateCallback @ 0x14078D4A0 (ExCreateCallback.c)
 */

NTSTATUS ExInitLicenseCallback()
{
  struct _LIST_ENTRY *Blink; // rbx
  NTSTATUS result; // eax

  Blink = PsGetCurrentServerSiloGlobals()[56].Blink;
  result = ExCreateCallback((PCALLBACK_OBJECT *)&Blink[2928], (POBJECT_ATTRIBUTES)&stru_140A76200, 1u, 1u);
  if ( result < 0 )
    Blink[2928].Flink = 0LL;
  return result;
}
