/*
 * XREFs of RIMGetDeviceParent @ 0x1C006CE50
 * Callers:
 *     RIMCreateDev @ 0x1C0054530 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C014FD68 (RIMVirtCreateDev.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C015C02C (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0160150 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0161020 (RIMAllocateHidConfigDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00571B0 (RIMGetDeviceObjectPointer.c)
 *     RIMGetPointerDevicePDO @ 0x1C006D284 (RIMGetPointerDevicePDO.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMGetDeviceParent(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  struct _DEVICE_OBJECT *v4; // rbx
  PVOID v5; // rsi
  HANDLE v6; // r14
  unsigned int v7; // r12d
  int v8; // eax
  int v9; // edx
  int v10; // eax
  ULONG v11; // eax
  void *Data; // rax
  NTSTATUS DevicePropertyData; // eax
  char v14; // r13
  int v16; // edx
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  ULONG RequiredSize; // [rsp+A0h] [rbp+40h] BYREF
  PVOID v20; // [rsp+B0h] [rbp+50h] BYREF
  ULONG Type; // [rsp+B8h] [rbp+58h] BYREF

  v20 = 0LL;
  v4 = 0LL;
  Object = 0LL;
  v5 = 0LL;
  Handle = 0LL;
  v6 = 0LL;
  Type = 0;
  v7 = 0;
  RequiredSize = 0;
  if ( a1 )
  {
    v10 = RIMGetPointerDevicePDO(a1);
LABEL_8:
    if ( v10 >= 0
      && IoGetDevicePropertyData(0LL, &DEVPKEY_Device_Parent, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
    {
      v11 = RequiredSize;
      if ( !RequiredSize )
      {
        LODWORD(v20) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1132LL);
        v11 = RequiredSize;
      }
      Data = (void *)Win32AllocPool(v11, 0x70707352u);
      *(_QWORD *)(a2 + 320) = Data;
      if ( Data )
      {
        DevicePropertyData = IoGetDevicePropertyData(
                               0LL,
                               &DEVPKEY_Device_Parent,
                               0,
                               0,
                               RequiredSize,
                               Data,
                               &RequiredSize,
                               &Type);
        v14 = DevicePropertyData;
        if ( DevicePropertyData < 0 )
        {
          Win32FreePool(*(_QWORD *)(a2 + 320));
          *(_QWORD *)(a2 + 320) = 0LL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v16) = 3;
            WPP_RECORDER_SF_d(
              (_DWORD)gRimLog,
              v16,
              1,
              55,
              (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
              v14);
          }
        }
        else
        {
          v7 = 1;
          *(_DWORD *)(a2 + 328) = RequiredSize;
        }
      }
    }
    if ( v6 )
    {
      ZwClose(v6);
      ObfDereferenceObject(v5);
      ObfDereferenceObject(v4);
    }
    return v7;
  }
  v8 = RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)(a2 + 208), a2, a3, &Handle, &v20, (PDEVICE_OBJECT *)&Object);
  if ( v8 >= 0 )
  {
    v5 = v20;
    if ( !v20 )
    {
      LODWORD(v20) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1108LL);
    }
    v4 = (struct _DEVICE_OBJECT *)Object;
    if ( !Object )
    {
      LODWORD(v20) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1109LL);
    }
    ObfReferenceObject(v4);
    v10 = RIMGetPointerDevicePDO(v4);
    v6 = Handle;
    goto LABEL_8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 3;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v9, 1, 54, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v8);
  }
  return 0LL;
}
