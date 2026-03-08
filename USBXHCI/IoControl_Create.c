/*
 * XREFs of IoControl_Create @ 0x1C006F910
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C006FA60 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00142CC (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0020700 (memset.c)
 */

__int64 __fastcall IoControl_Create(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // eax
  int v7; // edx
  unsigned int v8; // esi
  int v9; // edx
  _QWORD *v10; // rbx
  __int128 v12; // [rsp+30h] [rbp-59h] BYREF
  __int64 v13; // [rsp+40h] [rbp-49h]
  __int64 v14; // [rsp+48h] [rbp-41h]
  __int128 v15; // [rsp+50h] [rbp-39h]
  void *v16; // [rsp+60h] [rbp-29h]
  _QWORD v17[12]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v18; // [rsp+108h] [rbp+7Fh] BYREF

  v18 = 0LL;
  memset(v17, 0, sizeof(v17));
  v17[0] = 0x100000060LL;
  BYTE5(v17[1]) = 1;
  v13 = 0LL;
  v17[5] = IoControl_WdfEvtIoDeviceControl;
  v14 = 0x100000001LL;
  v16 = off_1C0063130;
  v12 = 0LL;
  LODWORD(v17[1]) = 2;
  v15 = 0LL;
  LODWORD(v12) = 56;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int128 *, __int64 *))(WdfFunctions_01023
                                                                                                + 1216))(
         WdfDriverGlobals,
         a1,
         v17,
         &v12,
         &v18);
  v8 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), v7, 5, 10, (__int64)&WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids, v6);
    }
  }
  else
  {
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WdfDriverGlobals,
                      v18,
                      off_1C0063130);
    *v10 = v18;
    v10[1] = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_q(*(_QWORD *)(a2 + 72), v9, 5, 11, (__int64)&WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids, v18);
    }
    *a3 = v10;
  }
  return v8;
}
