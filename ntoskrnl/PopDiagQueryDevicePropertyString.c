/*
 * XREFs of PopDiagQueryDevicePropertyString @ 0x140989088
 * Callers:
 *     PopDiagTraceFxDeviceAccounting @ 0x140590CC4 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxComponentAccounting @ 0x14098C04C (PopDiagTraceFxComponentAccounting.c)
 *     PopDirectedDripsDiagCreateDeviceDescription @ 0x14099AFC8 (PopDirectedDripsDiagCreateDeviceDescription.c)
 * Callees:
 *     IoGetDeviceProperty @ 0x1406C5B00 (IoGetDeviceProperty.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopDiagQueryDevicePropertyString(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        __int64 a3)
{
  NTSTATUS v6; // ebx
  void *Pool2; // rdi
  ULONG ResultLength[10]; // [rsp+30h] [rbp-28h] BYREF
  ULONG BufferLength; // [rsp+78h] [rbp+20h] BYREF

  BufferLength = 0;
  ResultLength[0] = 0;
  v6 = IoGetDeviceProperty(DeviceObject, DeviceProperty, 0, 0LL, &BufferLength);
  if ( v6 == -1073741789 )
  {
    if ( BufferLength <= 0xFFFF )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, BufferLength, 1734960208LL);
      if ( Pool2 )
      {
        v6 = IoGetDeviceProperty(DeviceObject, DeviceProperty, BufferLength, Pool2, ResultLength);
        if ( v6 < 0 )
        {
          ExFreePoolWithTag(Pool2, 0x67696450u);
        }
        else
        {
          *(_WORD *)a3 = ResultLength[0];
          *(_WORD *)(a3 + 2) = BufferLength;
          *(_QWORD *)(a3 + 8) = Pool2;
        }
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-2147483643;
    }
  }
  return (unsigned int)v6;
}
