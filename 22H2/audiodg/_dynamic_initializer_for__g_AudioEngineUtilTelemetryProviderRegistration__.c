/*
 * XREFs of _dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__ @ 0x140001250
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x14001B93C (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

int dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__()
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_14008F0D0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_AudioEngineUtilTelemetryProviderRegistration__);
}
