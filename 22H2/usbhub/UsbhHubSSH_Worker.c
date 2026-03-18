/*
 * XREFs of UsbhHubSSH_Worker @ 0x1C0014D80
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_SSH_Event @ 0x1C0012810 (Usbh_SSH_Event.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
 */

LONG __fastcall UsbhHubSSH_Worker(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  struct _KEVENT *DeviceExtension; // rbx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (struct _KEVENT *)a1->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( DeviceExtension->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  Usbh_SSH_Event(a1, 1u, a3);
  return KeSetEvent(DeviceExtension + 143, 0, 0);
}
