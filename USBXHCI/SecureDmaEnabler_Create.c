/*
 * XREFs of SecureDmaEnabler_Create @ 0x1C007A8F4
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0072A30 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00142CC (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x1C007AA70 (SecureDmaEnabler_CreateSecureObject.c)
 */

__int64 __fastcall SecureDmaEnabler_Create(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  int v5; // edx
  int SecureObject; // ebx
  _QWORD *v8; // rdi
  int v9; // edx
  int v10; // [rsp+30h] [rbp-40h] BYREF
  __int128 v11; // [rsp+34h] [rbp-3Ch]
  int v12; // [rsp+44h] [rbp-2Ch]
  int v13; // [rsp+48h] [rbp-28h]
  int v14; // [rsp+4Ch] [rbp-24h]
  __int64 v15; // [rsp+50h] [rbp-20h]
  __int64 v16; // [rsp+58h] [rbp-18h]
  void *v17; // [rsp+60h] [rbp-10h]
  __int64 v18; // [rsp+90h] [rbp+20h] BYREF

  v18 = 0LL;
  v12 = 0;
  v16 = 0LL;
  v13 = 1;
  v14 = 1;
  v17 = off_1C0063360;
  v15 = *(_QWORD *)(a1 + 8);
  v11 = 0LL;
  v10 = 56;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, int *, __int64 *))(WdfFunctions_01023 + 1656))(
         WdfDriverGlobals,
         &v10,
         &v18);
  SecureObject = v4;
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), v5, 18, 10, (__int64)&WPP_bc1ad2459c543d2ca8270d8dd36787fb_Traceguids, v4);
    }
    goto LABEL_4;
  }
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   v18,
                   off_1C0063360);
  *v8 = v18;
  v8[1] = a1;
  SecureObject = SecureDmaEnabler_CreateSecureObject(v8);
  if ( SecureObject < 0 )
  {
LABEL_4:
    if ( v18 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
    return (unsigned int)SecureObject;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(*(_QWORD *)(a1 + 72), v9, 18, 11, (__int64)&WPP_bc1ad2459c543d2ca8270d8dd36787fb_Traceguids, v18);
  }
  *a2 = v8;
  return (unsigned int)SecureObject;
}
