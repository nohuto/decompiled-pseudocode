/*
 * XREFs of Register_Create @ 0x1C006FE40
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C006FA60 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C000B0F8 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_q @ 0x1C00142CC (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Register_CreateSecureObject @ 0x1C007A1F8 (Register_CreateSecureObject.c)
 */

__int64 __fastcall Register_Create(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  int v5; // edx
  int SecureObject; // ebx
  _QWORD *v7; // rdi
  int v8; // edx
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
  v17 = off_1C0063158;
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
      WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), v5, 6, 10, (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids, v4);
    }
  }
  else
  {
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     v18,
                     off_1C0063158);
    v7[1] = a1;
    *v7 = v18;
    if ( !Controller_IsSecureDevice(a1) || (SecureObject = Register_CreateSecureObject(v7), SecureObject >= 0) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_q(
          *(_QWORD *)(a1 + 72),
          v8,
          6,
          11,
          (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
          v18);
      }
      *a2 = v7;
    }
  }
  return (unsigned int)SecureObject;
}
