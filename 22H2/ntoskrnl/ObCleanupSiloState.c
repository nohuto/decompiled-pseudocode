/*
 * XREFs of ObCleanupSiloState @ 0x1408DC4C0
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x1409062FC (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ObfDereferenceDeviceMap @ 0x140625954 (ObfDereferenceDeviceMap.c)
 */

void __fastcall ObCleanupSiloState(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ObfDereferenceDeviceMap(v1);
}
