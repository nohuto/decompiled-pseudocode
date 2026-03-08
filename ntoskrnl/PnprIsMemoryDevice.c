/*
 * XREFs of PnprIsMemoryDevice @ 0x1409633D0
 * Callers:
 *     PnprAddDeviceResources @ 0x1409625E0 (PnprAddDeviceResources.c)
 * Callees:
 *     IoGetDeviceInterfaces @ 0x1406C3A60 (IoGetDeviceInterfaces.c)
 *     IoGetDevicePropertyData @ 0x1406F7380 (IoGetDevicePropertyData.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char __fastcall PnprIsMemoryDevice(PDEVICE_OBJECT PhysicalDeviceObject, char a2)
{
  PZZWSTR v2; // rbx
  char v3; // di
  NTSTATUS DeviceInterfaces; // eax
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp-10h] BYREF
  char Data; // [rsp+78h] [rbp+28h] BYREF
  ULONG Type; // [rsp+80h] [rbp+30h] BYREF
  ULONG RequiredSize; // [rsp+88h] [rbp+38h] BYREF

  RequiredSize = 0;
  v2 = 0LL;
  SymbolicLinkList = 0LL;
  v3 = 0;
  Data = 0;
  Type = 0;
  if ( !a2 )
  {
    if ( IoGetDevicePropertyData(PhysicalDeviceObject, &DEVPKEY_Spare_Memory, 0, 0, 1u, &Data, &RequiredSize, &Type) < 0
      || Type != 17
      || !Data )
    {
      return v3;
    }
    goto LABEL_8;
  }
  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVICE_MEMORY, PhysicalDeviceObject, 0, &SymbolicLinkList);
  v2 = SymbolicLinkList;
  if ( DeviceInterfaces >= 0 && *SymbolicLinkList )
LABEL_8:
    v3 = 1;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return v3;
}
