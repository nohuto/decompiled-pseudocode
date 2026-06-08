/*
 * XREFs of InitPepIdleStates @ 0x1C003262C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0028EB0 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C001D3CC (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C001E8E8 (ProcLibTraceGetProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C00330C8 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C003338C (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C00337F8 (PepNotifyReportCStates.c)
 */

__int64 __fastcall InitPepIdleStates(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  if ( (*(_DWORD *)(a1 + 272) & 0x300LL) != 0 )
  {
    v2 = PepNotifyReportCStates(a1);
    if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = v2;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xAu,
        (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids,
        v9);
    }
  }
  v11 = 0LL;
  v10 = 0LL;
  v3 = -1073741823;
  v4 = *(_QWORD *)(a1 + 272);
  if ( (v4 & 0x200000200LL) != 0 )
  {
    v5 = PepNotifyQueryProcessorIdleStatesV2(a1, &v10);
    v3 = v5;
    if ( v5 >= 0 )
      goto LABEL_15;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v8) = v5;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xBu,
        (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids,
        v8);
    }
    *(_QWORD *)(a1 + 272) &= 0xFFFFFFFDFFFFFDFFuLL;
    v4 = *(_QWORD *)(a1 + 272);
  }
  if ( (v4 & 0x100000100LL) != 0 )
  {
    v6 = PepNotifyQueryProcessorIdleStates(a1, &v11);
    v3 = v6;
    if ( v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v8) = v6;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xCu,
          (__int64)&WPP_30f3a4644f7d37ea99a2cc96fc5420f3_Traceguids,
          v8);
      }
      *(_QWORD *)(a1 + 272) &= 0xFFFFFFFEFFFFFEFFuLL;
    }
  }
LABEL_15:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0013408,
    0LL);
  *(_QWORD *)(a1 + 1136) = v10;
  *(_QWORD *)(a1 + 1128) = v11;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0013408);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  ProcLibTraceGetProcessorIdleStatesV2(a1, 0);
  ProcLibTraceGetProcessorIdleStates(a1, 0);
  return v3;
}
