/*
 * XREFs of IntelPptFilter_Create @ 0x1C007A544
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C006FA60 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00142CC (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IntelPptFilter_Create(__int64 a1, __int64 a2, __int64 *a3)
{
  int v5; // edx
  int v6; // edi
  int v7; // edx
  __int64 v8; // rbx
  int v10; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11; // [rsp+34h] [rbp-3Ch]
  int v12; // [rsp+3Ch] [rbp-34h]
  void (__fastcall *v13)(__int64); // [rsp+40h] [rbp-30h]
  int v14; // [rsp+48h] [rbp-28h]
  int v15; // [rsp+4Ch] [rbp-24h]
  __int64 v16; // [rsp+50h] [rbp-20h]
  __int64 v17; // [rsp+58h] [rbp-18h]
  void *v18; // [rsp+60h] [rbp-10h]
  __int64 v19; // [rsp+90h] [rbp+20h] BYREF

  v16 = a1;
  v19 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v14 = 1;
  v15 = 1;
  v18 = off_1C00630B8;
  v13 = IntelPptFilter_EvtDestoryCallback;
  v17 = 0LL;
  v10 = 56;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, int *, __int64 *))(WdfFunctions_01023 + 1656))(
         WdfDriverGlobals,
         &v10,
         &v19);
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), v5, 16, 11, (__int64)&WPP_0f3e6ee050e235607aa5f43a2d147c91_Traceguids, v6);
    }
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
           WdfDriverGlobals,
           v19,
           off_1C00630B8);
    *(_QWORD *)v8 = v19;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v7) = 5;
      WPP_RECORDER_SF_q(
        *(_QWORD *)(a2 + 72),
        v7,
        16,
        10,
        (__int64)&WPP_0f3e6ee050e235607aa5f43a2d147c91_Traceguids,
        v19);
    }
    *(_QWORD *)(v8 + 8) = a2;
    *(_DWORD *)(v8 + 48) = 0;
    KeInitializeSpinLock((PKSPIN_LOCK)(v8 + 40));
    *a3 = v8;
    *(_QWORD *)(v8 + 24) = IntelPptFilter_FilterCommandCompletion;
    *(_QWORD *)(v8 + 16) = IntelPptFilter_FilterCommand;
    *(_QWORD *)(v8 + 32) = IntelPptFilter_ControllerResetPostReset;
    *(_QWORD *)(v8 + 56) = MmLockPagableDataSection(IntelPptFilter_FilterCommand);
  }
  return (unsigned int)v6;
}
