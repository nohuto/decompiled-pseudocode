/*
 * XREFs of DrvSetMonitorBrightness @ 0x1C00AF20C
 * Callers:
 *     PowerDimUndimResend @ 0x1C00108AC (PowerDimUndimResend.c)
 *     PowerUnDimMonitor @ 0x1C0086A40 (PowerUnDimMonitor.c)
 *     PowerDimMonitor @ 0x1C015B728 (PowerDimMonitor.c)
 * Callees:
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0021010 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0021280 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x1C00AFC64 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvSetMonitorBrightness(__int64 a1, int a2, __int64 a3, __int64 a4, _BYTE *a5, char a6)
{
  int v8; // ebx
  unsigned int i; // edi
  struct tagGRAPHICS_DEVICE *v10; // rdx
  unsigned int j; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 DxgkWin32kInterface; // rax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r14
  int InputBuffer; // [rsp+50h] [rbp-49h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-41h] BYREF
  PVOID Object; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v20[8]; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v21; // [rsp+70h] [rbp-29h]
  PVOID P; // [rsp+78h] [rbp-21h]
  unsigned int v23; // [rsp+80h] [rbp-19h] BYREF
  __int128 v24; // [rsp+88h] [rbp-11h] BYREF
  int v25; // [rsp+98h] [rbp-1h]

  v8 = -1073741823;
  if ( !gProtocolType )
  {
    WdLogSingleEntry2(4LL, a1);
    *a5 = 0;
    for ( i = 0; i < *(_DWORD *)(a1 + 20); ++i )
    {
      v10 = *(struct tagGRAPHICS_DEVICE **)(*(_QWORD *)(56LL * i + a1 + 40) + 2552LL);
      v21 = 0;
      P = 0LL;
      EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v20, v10);
      for ( j = 0; j < v21; ++j )
      {
        v25 = 0;
        v24 = 0LL;
        EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v20, j, (struct tagVIDEO_MONITOR_DEVICE *)&v24);
        if ( (v24 & 1) != 0 )
        {
          DeviceObject = 0LL;
          Object = 0LL;
          InputBuffer = 0;
          if ( !a6 || (_BYTE)v25 )
          {
            DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v13, v12);
            if ( (*(int (__fastcall **)(char *, _QWORD, PVOID *, PDEVICE_OBJECT *))(DxgkWin32kInterface + 456))(
                   (char *)&v24 + 8,
                   DWORD1(v24),
                   &Object,
                   &DeviceObject) >= 0 )
            {
              InputBuffer = a2;
              AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
              if ( (int)GreDeviceIoControlImpl(
                          AttachedDeviceReference,
                          0x232433u,
                          &InputBuffer,
                          4u,
                          0LL,
                          0,
                          &v23,
                          1u,
                          0) >= 0
                && (_BYTE)v25 )
              {
                *a5 = 1;
              }
              ObfDereferenceObject(AttachedDeviceReference);
              ObfDereferenceObject(Object);
            }
          }
        }
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    v8 = 0;
  }
  WdLogSingleEntry1(5LL, v8);
  return (unsigned int)v8;
}
