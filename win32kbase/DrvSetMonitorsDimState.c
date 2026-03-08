/*
 * XREFs of DrvSetMonitorsDimState @ 0x1C00AF3F4
 * Callers:
 *     PowerDimUndimResend @ 0x1C00108AC (PowerDimUndimResend.c)
 *     PowerUnDimMonitor @ 0x1C0086A40 (PowerUnDimMonitor.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00BCAC8 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     PowerDimMonitor @ 0x1C015B728 (PowerDimMonitor.c)
 * Callees:
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0021010 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0021280 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x1C00AFC64 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DrvSetMonitorsDimState(__int64 a1, __int128 *a2)
{
  char v3; // r15
  __int64 i; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 DxgkWin32kInterface; // rax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rbx
  __int128 v9; // xmm0
  unsigned int j; // esi
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-39h] BYREF
  PVOID Object; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v13[8]; // [rsp+60h] [rbp-29h] BYREF
  unsigned int v14; // [rsp+68h] [rbp-21h]
  PVOID P; // [rsp+70h] [rbp-19h]
  unsigned int v16; // [rsp+78h] [rbp-11h] BYREF
  __int128 v17; // [rsp+80h] [rbp-9h] BYREF
  int v18; // [rsp+90h] [rbp+7h]
  _BYTE InputBuffer[20]; // [rsp+98h] [rbp+Fh] BYREF

  v3 = a1;
  for ( i = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 1264LL); i; i = *(_QWORD *)(i + 128) )
  {
    v14 = 0;
    P = 0LL;
    EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice(
      (EnsureMonitorDevices *)v13,
      (struct tagGRAPHICS_DEVICE *)i);
    for ( j = 0; j < v14; ++j )
    {
      v18 = 0;
      v17 = 0LL;
      EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v13, j, (struct tagVIDEO_MONITOR_DEVICE *)&v17);
      DeviceObject = 0LL;
      Object = 0LL;
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v6, v5);
      if ( (*(int (__fastcall **)(__int64, _QWORD, PVOID *, PDEVICE_OBJECT *))(DxgkWin32kInterface + 456))(
             i + 240,
             DWORD1(v17),
             &Object,
             &DeviceObject) >= 0 )
      {
        AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
        *(_OWORD *)InputBuffer = 0LL;
        v9 = *a2;
        InputBuffer[0] = v3;
        *(_OWORD *)&InputBuffer[4] = v9;
        GreDeviceIoControlImpl(AttachedDeviceReference, 0x2324D7u, InputBuffer, 0x14u, 0LL, 0, &v16, 1u, 0);
        ObfDereferenceObject(AttachedDeviceReference);
        ObfDereferenceObject(Object);
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
}
