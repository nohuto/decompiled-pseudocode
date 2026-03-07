NTSTATUS McGenEventUnregister_EtwUnregister()
{
  NTSTATUS result; // eax

  if ( !MS_USBXHCI_ETW_PROVIDER_Context )
    return 0;
  result = EtwUnregister(MS_USBXHCI_ETW_PROVIDER_Context);
  MS_USBXHCI_ETW_PROVIDER_Context = 0LL;
  return result;
}
