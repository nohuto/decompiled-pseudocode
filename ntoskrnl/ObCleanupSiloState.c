/*
 * XREFs of ObCleanupSiloState @ 0x140977DD0
 * Callers:
 *     ObShutdownSystem @ 0x140977E00 (ObShutdownSystem.c)
 *     PspDeleteExternalServerSiloState @ 0x1409A9DE8 (PspDeleteExternalServerSiloState.c)
 *     PspDeleteServerSiloGlobals @ 0x1409A9EC0 (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ObDereferenceDeviceMap @ 0x14071E5A4 (ObDereferenceDeviceMap.c)
 */

char __fastcall ObCleanupSiloState(volatile __int64 *a1)
{
  char result; // al
  __int64 v2; // rcx

  result = (char)a1;
  v2 = _InterlockedExchange64(a1, 0LL);
  if ( v2 )
    return ObDereferenceDeviceMap((volatile signed __int64 *)(v2 & 0xFFFFFFFFFFFFFFF0uLL), (v2 & 0xF) + 1);
  return result;
}
