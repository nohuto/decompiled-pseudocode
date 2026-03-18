/*
 * XREFs of GreWaitForTextReady @ 0x1C0122D20
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C001C5FC (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 */

NTSTATUS GreWaitForTextReady()
{
  return UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization();
}
