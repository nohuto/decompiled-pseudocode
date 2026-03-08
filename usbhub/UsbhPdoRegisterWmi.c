/*
 * XREFs of UsbhPdoRegisterWmi @ 0x1C0049BF4
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C0056570 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 */

NTSTATUS __fastcall UsbhPdoRegisterWmi(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  NTSTATUS result; // eax

  v2 = PdoExt((__int64)DeviceObject);
  v3 = v2;
  v2[334] = 3;
  if ( (v2[355] & 0x24) != 0 )
    v2[334] = 2;
  *((_QWORD *)v2 + 168) = &USB_PortWmiGuidList;
  *((_QWORD *)v2 + 169) = UsbhPdoQueryWmiRegInfo;
  *((_QWORD *)v2 + 170) = UsbhPdoQueryWmiDataBlock;
  *((_QWORD *)v2 + 171) = 0LL;
  *((_QWORD *)v2 + 172) = 0LL;
  *((_QWORD *)v2 + 173) = 0LL;
  *((_QWORD *)v2 + 174) = 0LL;
  result = IoWMIRegistrationControl(DeviceObject, 1u);
  v3[355] |= 0x80u;
  return result;
}
