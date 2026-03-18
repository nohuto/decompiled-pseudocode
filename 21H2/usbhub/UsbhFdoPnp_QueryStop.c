/*
 * XREFs of UsbhFdoPnp_QueryStop @ 0x1C00426A0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C0002F00 (UsbhFdoCheckUpstreamConnectionState.c)
 *     Usbh_SSH_Event @ 0x1C0004D80 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhDisableHardReset @ 0x1C003C718 (UsbhDisableHardReset.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_QueryStop(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v4; // rbp
  _DWORD *v5; // rsi
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0;
  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  v5 = FdoExt(a1) + 346;
  Log(a1, 2, 1903784820, (__int64)v5, (__int64)a2);
  UsbhDisableHardReset(*((_QWORD *)v5 + 1));
  if ( (int)UsbhFdoCheckUpstreamConnectionState(*((_QWORD *)v5 + 1), &v7) >= 0 )
    Usbh_SSH_Event(*((_QWORD *)v5 + 1), 6u, (__int64)v5);
  a2->IoStatus.Status = 0;
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(v4[151], a2);
}
