/*
 * XREFs of ?UmfdEscHostUnhandledException@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00F42C0
 * Callers:
 *     UmfdDispatchEscape @ 0x1C00A76B0 (UmfdDispatchEscape.c)
 * Callees:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00F42D8 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 */

void __fastcall UmfdEscHostUnhandledException(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  UmfdHostLifeTimeManager::UninitializeThread();
}
