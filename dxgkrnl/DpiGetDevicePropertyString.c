/*
 * XREFs of DpiGetDevicePropertyString @ 0x1C02163CC
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C005F540 (DpiMiracastInterfaceChange.c)
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C01F38A0 (DpiAddDevice.c)
 *     DpiFdoInitializeFdo @ 0x1C01F5A64 (DpiFdoInitializeFdo.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C01F8548 (DpiFdoInitializeAdapterUniqueString.c)
 *     DpiSetDriverVersion @ 0x1C0395104 (DpiSetDriverVersion.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall DpiGetDevicePropertyString(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        __int64 a3,
        _QWORD *a4,
        _DWORD *a5)
{
  _DWORD *v9; // rsi
  NTSTATUS v10; // eax
  unsigned int v11; // ebx
  void *Pool2; // rax
  void *v13; // rdi
  NTSTATUS v14; // eax
  int v15; // eax
  size_t Size; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(Size) = 0;
  if ( DeviceObject )
  {
    if ( a4 )
    {
      v9 = a5;
      if ( a5 )
      {
        v10 = IoGetDeviceProperty(DeviceObject, DeviceProperty, 0, 0LL, (PULONG)&Size);
        v11 = v10;
        if ( v10 == -1073741789 )
        {
          LODWORD(Size) = Size + 2;
          Pool2 = (void *)ExAllocatePool2(a3, (unsigned int)Size, 1953656900LL);
          v13 = Pool2;
          if ( !Pool2 )
          {
            v11 = -1073741670;
            WdLogSingleEntry1(6LL, -1073741670LL);
            return v11;
          }
          memset(Pool2, 0, (unsigned int)Size);
          v14 = IoGetDeviceProperty(DeviceObject, DeviceProperty, Size, v13, (PULONG)&Size);
          v11 = v14;
          if ( v14 < 0 )
          {
            WdLogSingleEntry1(2LL, v14);
            ExFreePoolWithTag(v13, 0);
            return v11;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v10);
          v13 = 0LL;
          if ( (v11 & 0x80000000) != 0 )
            return v11;
        }
        v15 = Size;
        *a4 = v13;
        *v9 = v15;
        return v11;
      }
    }
  }
  return 3221225485LL;
}
