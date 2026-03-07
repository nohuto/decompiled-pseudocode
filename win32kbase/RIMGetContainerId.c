__int64 __fastcall RIMGetContainerId(struct _DEVICE_OBJECT *a1, void *a2, _DWORD *a3)
{
  int v4; // ebx
  NTSTATUS DevicePropertyData; // edi
  struct _DEVICE_OBJECT *v7; // r14
  PVOID Data; // [rsp+28h] [rbp-28h]
  ULONG Type; // [rsp+40h] [rbp-10h] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-Ch] BYREF
  PDEVICE_OBJECT Pdo; // [rsp+48h] [rbp-8h]
  char v13; // [rsp+88h] [rbp+38h] BYREF

  v4 = 0;
  Pdo = 0LL;
  DevicePropertyData = RIMGetPointerDevicePDO(a1);
  if ( DevicePropertyData >= 0 )
  {
    v13 = 0;
    Type = 0;
    Data = a2;
    v7 = Pdo;
    RequiredSize = 0;
    DevicePropertyData = IoGetDevicePropertyData(
                           Pdo,
                           &DEVPKEY_Device_ContainerId,
                           0,
                           0,
                           0x10u,
                           Data,
                           &RequiredSize,
                           &Type);
    if ( DevicePropertyData >= 0 )
    {
      if ( a3 )
      {
        DevicePropertyData = IoGetDevicePropertyData(
                               v7,
                               &DEVPKEY_Device_InLocalMachineContainer,
                               0,
                               0,
                               1u,
                               &v13,
                               &RequiredSize,
                               &Type);
        if ( DevicePropertyData >= 0 )
        {
          LOBYTE(v4) = v13 != -1;
          *a3 = v4;
        }
      }
    }
    ObfDereferenceObject(v7);
  }
  return (unsigned int)DevicePropertyData;
}
