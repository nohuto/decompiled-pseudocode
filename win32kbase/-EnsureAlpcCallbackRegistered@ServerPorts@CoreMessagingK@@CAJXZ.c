/*
 * XREFs of ?EnsureAlpcCallbackRegistered@ServerPorts@CoreMessagingK@@CAJXZ @ 0x1C00C0944
 * Callers:
 *     ?CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z @ 0x1C00C0834 (-CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 CoreMessagingK::ServerPorts::EnsureAlpcCallbackRegistered(void)
{
  NTSTATUS v0; // ebx
  struct _OBJECT_ATTRIBUTES v2; // [rsp+20h] [rbp-38h] BYREF

  *(&v2.Length + 1) = 0;
  *(&v2.Attributes + 1) = 0;
  if ( CoreMessagingK::ServerPorts::s_CallbackObject )
    return 0LL;
  v2.RootDirectory = 0LL;
  v2.ObjectName = 0LL;
  v2.Length = 48;
  v2.Attributes = 512;
  *(_OWORD *)&v2.SecurityDescriptor = 0LL;
  v0 = ExCreateCallback(&CoreMessagingK::ServerPorts::s_CallbackObject, &v2, 1u, 0);
  if ( v0 >= 0 )
  {
    CoreMessagingK::ServerPorts::s_CallbackRegistration = ExRegisterCallback(
                                                            CoreMessagingK::ServerPorts::s_CallbackObject,
                                                            CoreMessagingK::ServerPorts::PortSignaledCallback,
                                                            0LL);
    if ( !CoreMessagingK::ServerPorts::s_CallbackRegistration )
    {
      ObfDereferenceObject(CoreMessagingK::ServerPorts::s_CallbackObject);
      CoreMessagingK::ServerPorts::s_CallbackObject = 0LL;
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v0;
}
