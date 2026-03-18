/*
 * XREFs of ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C001C660
 * Callers:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C001C5FC (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     GreEnableEUDC @ 0x1C00991AC (GreEnableEUDC.c)
 *     GreEudcLoadLinkW @ 0x1C0295894 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C0295B94 (GreEudcUnloadLinkW.c)
 * Callees:
 *     <none>
 */

__int64 UmfdHostLifeTimeManager::GetSessionTextStackStatus(void)
{
  if ( !UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent
    || !UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
  {
    return 3221225701LL;
  }
  if ( KeReadStateEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent)
    && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized
    && KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) )
  {
    return 0LL;
  }
  return 259LL;
}
