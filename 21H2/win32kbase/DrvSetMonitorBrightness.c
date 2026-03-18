/*
 * XREFs of DrvSetMonitorBrightness @ 0x1C007E8AC
 * Callers:
 *     PowerUnDimMonitor @ 0x1C007D5BC (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1C007E570 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x1C0147D4C (PowerDimMonitor.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C006C2B0 (UpdateMonitorDevices.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C006CFA0 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvSetMonitorBrightness(__int64 a1, unsigned int a2, __int64 a3, char a4, _BYTE *a5, char a6)
{
  int v8; // ebx
  _BYTE *v9; // r15
  unsigned int v10; // ebx
  unsigned int v11; // esi
  __int64 v12; // r14
  __int64 v13; // rdx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r12
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-48h] BYREF
  PVOID Object[8]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v18; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int InputBuffer; // [rsp+B8h] [rbp+20h] BYREF

  LOBYTE(InputBuffer) = a4;
  v8 = -1073741823;
  if ( !gProtocolType )
  {
    WdLogSingleEntry2(4LL, a1, a2);
    UpdateMonitorDevices(0);
    v9 = a5;
    v10 = 0;
    for ( *a5 = 0; v10 < *(_DWORD *)(a1 + 20); ++v10 )
    {
      v11 = 0;
      v12 = *(_QWORD *)(*(_QWORD *)(56LL * v10 + a1 + 40) + 2552LL);
      if ( *(_DWORD *)(v12 + 216) )
      {
        do
        {
          v13 = *(_QWORD *)(v12 + 224);
          if ( (*(_DWORD *)(v13 + 20LL * v11) & 1) != 0 )
          {
            DeviceObject = 0LL;
            Object[0] = 0LL;
            InputBuffer = 0;
            if ( (!a6 || *(_BYTE *)(v13 + 20LL * v11 + 16))
              && (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C0296828)(
                        v13 + 4 * (5LL * v11 + 2),
                        *(unsigned int *)(v13 + 20LL * v11 + 4),
                        Object,
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
                          &v18,
                          1u,
                          0) >= 0
                && *(_BYTE *)(*(_QWORD *)(v12 + 224) + 20LL * v11 + 16) )
              {
                *v9 = 1;
              }
              ObfDereferenceObject(AttachedDeviceReference);
              ObfDereferenceObject(Object[0]);
            }
          }
          ++v11;
        }
        while ( v11 < *(_DWORD *)(v12 + 216) );
      }
    }
    v8 = 0;
  }
  WdLogSingleEntry1(5LL, v8);
  return (unsigned int)v8;
}
