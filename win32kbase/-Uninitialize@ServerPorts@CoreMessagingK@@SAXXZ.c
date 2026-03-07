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
