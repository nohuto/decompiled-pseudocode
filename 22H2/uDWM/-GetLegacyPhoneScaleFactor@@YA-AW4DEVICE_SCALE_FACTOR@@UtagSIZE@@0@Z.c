/*
 * XREFs of ?GetLegacyPhoneScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z @ 0x1800C1548
 * Callers:
 *     ?InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z @ 0x18000C7F8 (-InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z.c)
 * Callees:
 *     ?LoadScalingOverrides@@YAXXZ @ 0x1800407C4 (-LoadScalingOverrides@@YAXXZ.c)
 *     ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x1800C12BC (--$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTe.c)
 *     ?CalcBucketedScaleFactor@@YAIUtagSIZE@@0@Z @ 0x1800C13DC (-CalcBucketedScaleFactor@@YAIUtagSIZE@@0@Z.c)
 */

__int64 __fastcall GetLegacyPhoneScaleFactor(struct tagSIZE a1, struct tagSIZE a2)
{
  enum DEVICE_SCALE_FACTOR v4; // esi
  unsigned int v6[6]; // [rsp+20h] [rbp-18h] BYREF
  enum DEVICE_SCALE_FACTOR v7; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  LoadScalingOverrides();
  v4 = g_legacyCompatScalingOverride;
  if ( g_legacyCompatScalingOverride == DEVICE_SCALE_FACTOR_INVALID )
    v4 = (unsigned int)CalcBucketedScaleFactor(a1, a2);
  v7 = v4;
  v6[0] = 0;
  v8 = CalcBucketedScaleFactor(a1, a2);
  if ( !byte_1800E3F50 )
  {
    ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked<enum ScalingCompatTelemetry::AppType &,unsigned int &,unsigned int &>(
      v6,
      &v8,
      (unsigned int *)&v7);
    byte_1800E3F50 = 1;
  }
  return (unsigned int)v4;
}
