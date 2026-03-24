/*
 * XREFs of DrvSetMonitorBrightness @ 0x1C00783BC
 * Callers:
 *     PowerUnDimMonitor @ 0x1C00778C0 (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1C0077A40 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x1C011A020 (PowerDimMonitor.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C001CE40 (UpdateMonitorDevices.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C001D00C (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     Feature_OemPanelDriverSupport__private_ReportDeviceUsage @ 0x1C00CAE50 (Feature_OemPanelDriverSupport__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvSetMonitorBrightness(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4,
        _BYTE *a5,
        char a6)
{
  __int64 v8; // r13
  __int64 v9; // rdi
  int v10; // ebx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned int v16; // esi
  unsigned int v17; // r15d
  __int64 v18; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r12
  __int64 v20; // rax
  int InputBuffer; // [rsp+54h] [rbp-25h] BYREF
  unsigned int i; // [rsp+58h] [rbp-21h]
  unsigned int v25; // [rsp+5Ch] [rbp-1Dh] BYREF
  _DWORD v26[2]; // [rsp+60h] [rbp-19h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-11h] BYREF
  _BYTE *v28; // [rsp+70h] [rbp-9h]
  PVOID Object; // [rsp+78h] [rbp-1h] BYREF
  int v30; // [rsp+80h] [rbp+7h]

  v8 = (unsigned int)a2;
  v9 = a1;
  v28 = a5;
  v10 = -1073741823;
  if ( !gProtocolType )
  {
    v11 = WdLogNewEntry5_WdEvent(a1);
    *(_QWORD *)(v11 + 24) = v9;
    *(_QWORD *)(v11 + 32) = v8;
    WdLogEvent5_WdEvent(v11);
    UpdateMonitorDevices();
    if ( a3 != -1 )
    {
      if ( qword_1C0251B20 )
      {
        Object = (PVOID)__PAIR64__(a3, v8);
        v30 = a4;
        v12 = qword_1C0251B20(&Object);
        v14 = v12;
        if ( v12 < 0 )
        {
          v15 = WdLogNewEntry5_WdWarning(a1, a2, v13);
          *(_QWORD *)(v15 + 24) = v14;
          WdLogEvent5_WdWarning(v15);
        }
      }
    }
    *a5 = 0;
    v16 = 0;
    for ( i = 0; v16 < *(_DWORD *)(v9 + 20); i = v16 )
    {
      v17 = 0;
      a1 = 56LL * v16;
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + v9 + 40) + 2576LL);
      if ( *(_DWORD *)(v18 + 216) )
      {
        do
        {
          a2 = *(_QWORD *)(v18 + 224);
          if ( (*(_DWORD *)(a2 + 20LL * v17) & 1) != 0 )
          {
            DeviceObject = 0LL;
            Object = 0LL;
            InputBuffer = 0;
            if ( (!a6 || *(_BYTE *)(a2 + 20LL * v17 + 16))
              && (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C0251A38)(
                        a2 + 4 * (5LL * v17 + 2),
                        *(unsigned int *)(a2 + 20LL * v17 + 4),
                        &Object,
                        &DeviceObject) >= 0 )
            {
              InputBuffer = v8;
              AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
              GreDeviceIoControlImpl(AttachedDeviceReference, 0x232433u, &InputBuffer, 4u, 0LL, 0, &v25, 1u, 0);
              if ( *(_BYTE *)(*(_QWORD *)(v18 + 224) + 20LL * v17 + 16) )
              {
                *v28 = 1;
                if ( *(_QWORD *)(v18 + 144) )
                {
                  if ( (*(_DWORD *)(v18 + 160) & 0x800000) != 0
                    && *(_QWORD *)(v18 + 240)
                    && (*(_DWORD *)(v9 + 20) == 1 && *(_DWORD *)(v18 + 216) == 1 || !a4) )
                  {
                    Feature_OemPanelDriverSupport__private_ReportDeviceUsage();
                    v26[0] = 1;
                    v26[1] = a4;
                    GreDeviceIoControlImpl(AttachedDeviceReference, 0x2324CFu, v26, 8u, 0LL, 0, &v25, 1u, 0);
                  }
                }
              }
              ObfDereferenceObject(AttachedDeviceReference);
              ObfDereferenceObject(Object);
            }
          }
          ++v17;
        }
        while ( v17 < *(_DWORD *)(v18 + 216) );
        v16 = i;
      }
      ++v16;
    }
    v10 = 0;
  }
  v20 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v20 + 24) = v10;
  WdLogEvent5_WdTrace(v20);
  return (unsigned int)v10;
}
