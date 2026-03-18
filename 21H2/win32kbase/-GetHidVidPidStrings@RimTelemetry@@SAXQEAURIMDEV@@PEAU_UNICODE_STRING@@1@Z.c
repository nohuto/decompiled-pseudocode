/*
 * XREFs of ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x1C017C210
 * Callers:
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1C004B44C (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x1C01DE154 (-GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01DEE38 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RimTelemetry::GetHidVidPidStrings(
        struct RIMDEV *const a1,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  if ( RtlIntegerToUnicodeString(*(unsigned __int16 *)(*((_QWORD *)a1 + 57) + 110LL), 0x10u, a2) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  if ( RtlIntegerToUnicodeString(*(unsigned __int16 *)(*((_QWORD *)a1 + 57) + 112LL), 0x10u, a3) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
}
