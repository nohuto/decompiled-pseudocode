/*
 * XREFs of PopDiagQueryDevicePropertyString @ 0x1408E8148
 * Callers:
 *     PopDiagTraceFxDeviceAccounting @ 0x140571E54 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxComponentAccounting @ 0x1408EA1A0 (PopDiagTraceFxComponentAccounting.c)
 *     PopDirectedDripsDiagCreateDeviceDescription @ 0x1408F6E80 (PopDirectedDripsDiagCreateDeviceDescription.c)
 * Callees:
 *     IoGetDeviceProperty @ 0x1406B8A70 (IoGetDeviceProperty.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopDiagQueryDevicePropertyString(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        __int64 a3)
{
  NTSTATUS v6; // ebx
  PVOID PoolWithTag; // rdi
  __int16 v8; // ax
  ULONG ResultLength[10]; // [rsp+30h] [rbp-28h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(NumberOfBytes) = 0;
  ResultLength[0] = 0;
  v6 = IoGetDeviceProperty(DeviceObject, DeviceProperty, 0, 0LL, (PULONG)&NumberOfBytes);
  if ( v6 == -1073741789 )
  {
    if ( (unsigned int)NumberOfBytes <= 0xFFFF )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x67696450u);
      if ( PoolWithTag )
      {
        v6 = IoGetDeviceProperty(DeviceObject, DeviceProperty, NumberOfBytes, PoolWithTag, ResultLength);
        if ( v6 >= 0 )
        {
          *(_WORD *)a3 = ResultLength[0];
          v8 = NumberOfBytes;
          *(_QWORD *)(a3 + 8) = PoolWithTag;
          PoolWithTag = 0LL;
          *(_WORD *)(a3 + 2) = v8;
        }
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0x67696450u);
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
