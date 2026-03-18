/*
 * XREFs of DrvSetMonitorsDimState @ 0x1C0069BFC
 * Callers:
 *     PowerUnDimMonitor @ 0x1C007D5BC (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1C007E570 (PowerDimUndimResend.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00B6868 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     PowerDimMonitor @ 0x1C0147D4C (PowerDimMonitor.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C006C2B0 (UpdateMonitorDevices.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C006CFA0 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

LONG_PTR __fastcall DrvSetMonitorsDimState(char a1, __int128 *a2)
{
  LONG_PTR result; // rax
  wchar_t *i; // rdi
  unsigned int j; // esi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rax
  __int128 v8; // xmm0
  struct _DEVICE_OBJECT *v9; // rbx
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-19h] BYREF
  PVOID Object; // [rsp+58h] [rbp-11h] BYREF
  unsigned int v12; // [rsp+60h] [rbp-9h] BYREF
  char InputBuffer; // [rsp+68h] [rbp-1h] BYREF
  __int16 v14; // [rsp+69h] [rbp+0h]
  char v15; // [rsp+6Bh] [rbp+2h]
  __int128 v16; // [rsp+6Ch] [rbp+3h]

  result = UpdateMonitorDevices(0LL);
  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    for ( j = 0; j < *((_DWORD *)i + 54); ++j )
    {
      DeviceObject = 0LL;
      Object = 0LL;
      result = ((__int64 (__fastcall *)(wchar_t *, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C0296828)(
                 i + 124,
                 *(unsigned int *)(*((_QWORD *)i + 28) + 20LL * j + 4),
                 &Object,
                 &DeviceObject);
      if ( (int)result >= 0 )
      {
        AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
        v8 = *a2;
        v9 = AttachedDeviceReference;
        v14 = 0;
        v15 = 0;
        InputBuffer = a1;
        v16 = v8;
        GreDeviceIoControlImpl(AttachedDeviceReference, 0x2324D7u, &InputBuffer, 0x14u, 0LL, 0, &v12, 1u, 0);
        ObfDereferenceObject(v9);
        result = ObfDereferenceObject(Object);
      }
    }
  }
  return result;
}
