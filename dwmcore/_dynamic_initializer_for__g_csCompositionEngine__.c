/*
 * XREFs of _dynamic_initializer_for__g_csCompositionEngine__ @ 0x180001300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__g_csCompositionEngine__()
{
  InitializeCriticalSection(&g_csCompositionEngine);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_csCompositionEngine__);
}
