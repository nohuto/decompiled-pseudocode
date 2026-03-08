/*
 * XREFs of Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C00725A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsSecureDevice @ 0x1C000B0F8 (Controller_IsSecureDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Endpoint_Create @ 0x1C006D624 (Endpoint_Create.c)
 */

__int64 __fastcall Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rax
  int v12; // edi
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // edx
  int v17; // [rsp+40h] [rbp-40h] BYREF
  __int16 v18; // [rsp+44h] [rbp-3Ch]
  char v19; // [rsp+46h] [rbp-3Ah]
  _QWORD v20[6]; // [rsp+48h] [rbp-38h] BYREF
  __int64 (__fastcall *v21)(__int64, unsigned int); // [rsp+78h] [rbp-8h]

  HIDWORD(v20[0]) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
           WdfDriverGlobals,
           a2,
           off_1C00632C0);
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
           WdfDriverGlobals,
           a1,
           off_1C0063428);
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v9 + 72),
      v10,
      13,
      11,
      (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
      *(_BYTE *)(v8 + 135),
      a3);
  }
  v17 = 1287;
  v19 = 0;
  v18 = a3;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          a1,
          off_1C0063428);
  v20[0] = 56LL;
  v20[1] = Endpoint_UcxEvtEndpointPurge;
  v20[2] = Endpoint_UcxEvtEndpointStart;
  v20[3] = Endpoint_UcxEvtEndpointAbort;
  v20[4] = Endpoint_UcxEvtEndpointOkToCancelTransfers;
  v20[5] = Endpoint_UcxEvtDefaultEndpointUpdate;
  if ( Controller_IsSecureDevice(v11) )
    v21 = 0LL;
  else
    v21 = Endpoint_UcxEvtEndpointEnableForwardProgress;
  ((void (__fastcall *)(__int64, __int64, _QWORD *))qword_1C0064850)(UcxDriverGlobals, a4, v20);
  v12 = Endpoint_Create(a1, a2, a4, &v17, 0LL, 0LL);
  if ( v12 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a2,
            off_1C00632C0);
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            a1,
            off_1C0063428);
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v15 + 72),
      v16,
      13,
      12,
      (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
      *(_BYTE *)(v14 + 135),
      v12);
  }
  return (unsigned int)v12;
}
