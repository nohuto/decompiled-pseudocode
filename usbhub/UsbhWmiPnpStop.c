/*
 * XREFs of UsbhWmiPnpStop @ 0x1C004A5E0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 */

int __fastcall UsbhWmiPnpStop(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = FdoExt((__int64)DeviceObject);
  v3 = v2;
  if ( (v2[640] & 2) != 0 )
  {
    LODWORD(v2) = IoWMIRegistrationControl(DeviceObject, 2u);
    v3[640] &= ~2u;
  }
  return (int)v2;
}
