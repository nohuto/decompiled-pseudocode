/*
 * XREFs of EtwEventUnregister @ 0x1800514E0
 * Callers:
 *     LdrShutdownProcess @ 0x18005EFA0 (LdrShutdownProcess.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl EtwEventUnregister(REGHANDLE RegHandle)
{
  return EtwNotificationUnregister(RegHandle, 0LL);
}
