/*
 * XREFs of ?DispBrokerGetCurrentMode@@YA?AW4DISPBROKER_MODE@@XZ @ 0x1C009ADB4
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C001A4C0 (DrvSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

__int64 DispBrokerGetCurrentMode()
{
  if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
    return *((unsigned int *)DispBroker::DispBrokerClient::s_pSessionBroker + 1);
  else
    return *(unsigned int *)DispBroker::DispBrokerClient::s_pSessionBroker;
}
