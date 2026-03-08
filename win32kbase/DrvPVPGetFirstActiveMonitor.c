/*
 * XREFs of DrvPVPGetFirstActiveMonitor @ 0x1C0194628
 * Callers:
 *     GetCertificateLengthAndMonitorPDO @ 0x1C018873C (GetCertificateLengthAndMonitorPDO.c)
 * Callees:
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0021010 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00AFAD4 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x1C00AFC64 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvPVPGetFirstActiveMonitor(struct _UNICODE_STRING *a1, __int64 a2, PVOID *a3)
{
  __int64 result; // rax
  unsigned int v5; // edi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 DxgkWin32kInterface; // rax
  unsigned int v10; // ebx
  PVOID Object; // [rsp+30h] [rbp-40h] BYREF
  char v12[8]; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+40h] [rbp-30h]
  PVOID P; // [rsp+48h] [rbp-28h]
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF
  int v16; // [rsp+60h] [rbp-10h]

  Object = 0LL;
  result = DrvGetDeviceFromNameAndValidateDevice(a1, UserMode, (struct tagGRAPHICS_DEVICE **)&Object);
  if ( (int)result < 0 )
    return result;
  v13 = 0;
  P = 0LL;
  EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice(
    (EnsureMonitorDevices *)v12,
    (struct tagGRAPHICS_DEVICE *)Object);
  v5 = v13;
  v6 = 0;
  if ( !v13 )
  {
LABEL_7:
    v10 = -1071774235;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v16 = 0;
    v15 = 0LL;
    EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v12, v6, (struct tagVIDEO_MONITOR_DEVICE *)&v15);
    if ( (v15 & 1) != 0 )
      break;
LABEL_6:
    if ( ++v6 >= v5 )
      goto LABEL_7;
  }
  Object = 0LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v8, v7);
  if ( (*(int (__fastcall **)(char *, _QWORD, PVOID *, PVOID *))(DxgkWin32kInterface + 456))(
         (char *)&v15 + 8,
         DWORD1(v15),
         &Object,
         a3) < 0 )
  {
    v5 = v13;
    goto LABEL_6;
  }
  ObfReferenceObject(*a3);
  ObfDereferenceObject(Object);
  v10 = 0;
LABEL_8:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v10;
}
