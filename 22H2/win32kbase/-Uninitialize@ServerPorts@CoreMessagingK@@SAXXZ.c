/*
 * XREFs of ?Uninitialize@ServerPorts@CoreMessagingK@@SAXXZ @ 0x1C00B4B7C
 * Callers:
 *     CoreMsgUninitialize @ 0x1C00B4A80 (CoreMsgUninitialize.c)
 * Callees:
 *     <none>
 */

void CoreMessagingK::ServerPorts::Uninitialize(void)
{
  if ( CoreMessagingK::ServerPorts::s_CallbackRegistration )
  {
    ExUnregisterCallback(CoreMessagingK::ServerPorts::s_CallbackRegistration);
    CoreMessagingK::ServerPorts::s_CallbackRegistration = 0LL;
    ObfDereferenceObject(CoreMessagingK::ServerPorts::s_CallbackObject);
    CoreMessagingK::ServerPorts::s_CallbackObject = 0LL;
  }
}
