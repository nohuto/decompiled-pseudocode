int dynamic_initializer_for__g_csCompositionEngine__()
{
  InitializeCriticalSection(&g_csCompositionEngine);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_csCompositionEngine__);
}
