/*
 * XREFs of RootHub_Create @ 0x1C006F738
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C006FA60 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qq @ 0x1C001A2FC (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0020700 (memset.c)
 */

__int64 __fastcall RootHub_Create(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdx
  int v6; // edx
  int v7; // esi
  int v8; // edx
  _QWORD *v9; // rbx
  __int128 v11; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-B0h]
  _QWORD v13[5]; // [rsp+60h] [rbp-A8h]
  _QWORD v14[20]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v15; // [rsp+148h] [rbp+40h] BYREF

  v15 = 0LL;
  memset(v14, 0, sizeof(v14));
  v14[0] = 0x1000000A0LL;
  v14[1] = RootHub_UcxEvtClearHubFeature;
  v14[2] = RootHub_UcxEvtClearPortFeature;
  v14[16] = 0x100000001LL;
  v14[3] = RootHub_UcxEvtGetHubStatus;
  v12 = 0LL;
  v14[4] = RootHub_UcxEvtGetPortStatus;
  v14[5] = RootHub_UcxEvtSetHubFeature;
  v14[6] = RootHub_UcxEvtSetPortFeature;
  v14[7] = RootHub_UcxEvtGetPortErrorCount;
  v14[9] = RootHub_UcxEvtInterruptTransfer;
  v14[10] = RootHub_UcxEvtGetInfo;
  v14[11] = RootHub_UcxEvtGet20PortInfo;
  v14[12] = RootHub_UcxEvtGet30PortInfo;
  v14[19] = off_1C0063090;
  memset(&v14[13], 0, 24);
  LODWORD(v14[13]) = 56;
  v11 = 0LL;
  LODWORD(v11) = 56;
  v13[3] = off_1C0063248;
  v13[0] = 0x100000001LL;
  v5 = *(_QWORD *)(a2 + 8);
  *(_OWORD *)&v14[17] = 0LL;
  *(_OWORD *)&v13[1] = 0LL;
  v7 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int128 *, __int64 *))qword_1C0064808)(
         UcxDriverGlobals,
         v5,
         v14,
         &v11,
         &v15);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), v6, 11, 11, (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids, v7);
    }
  }
  else
  {
    v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     v15,
                     off_1C0063248);
    *v9 = v15;
    v9[1] = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qq(
        *(_QWORD *)(a2 + 72),
        v8,
        11,
        10,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        v15,
        (char)v9);
    }
    *a3 = v9;
  }
  return (unsigned int)v7;
}
