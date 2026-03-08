/*
 * XREFs of GreWaitForTextReady @ 0x1C00F64F0
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C011C60C (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 */

__int64 GreWaitForTextReady()
{
  return UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization();
}
