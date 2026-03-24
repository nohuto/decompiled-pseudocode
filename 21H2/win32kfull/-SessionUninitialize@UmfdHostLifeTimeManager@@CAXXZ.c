/*
 * XREFs of ?SessionUninitialize@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C013277C
 * Callers:
 *     UmfdSessionUninitialize @ 0x1C01326D0 (UmfdSessionUninitialize.c)
 * Callees:
 *     <none>
 */

void UmfdHostLifeTimeManager::SessionUninitialize(void)
{
  if ( UmfdHostLifeTimeManager::s_WinlogonCallbackEvent )
  {
    Win32FreePool(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent);
    UmfdHostLifeTimeManager::s_WinlogonCallbackEvent = 0LL;
  }
  if ( UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent )
  {
    Win32FreePool(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent);
    UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent = 0LL;
  }
  if ( UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
  {
    Win32FreePool(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent);
    UmfdHostLifeTimeManager::s_InitialFontsAddedEvent = 0LL;
  }
  if ( UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent )
  {
    Win32FreePool(UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent);
    UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent = 0LL;
  }
}
