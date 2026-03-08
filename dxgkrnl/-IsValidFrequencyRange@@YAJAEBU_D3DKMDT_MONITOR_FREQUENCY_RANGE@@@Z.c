/*
 * XREFs of ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C001F6AC
 * Callers:
 *     ?ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C001F3F0 (-ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@.c)
 *     ?_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C01FE8CC (-_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidFrequencyRange(const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *a1)
{
  __int64 Denominator; // r8
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rcx
  unsigned __int64 Numerator; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx

  Denominator = a1->RangeLimits.MinVSyncFreq.Denominator;
  v3 = (-(__int64)DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates & 0x1F4) + 500;
  v4 = (-(__int64)DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates & 0xF4240) + 1000000;
  if ( !(_DWORD)Denominator )
    return 3223192330LL;
  v5 = a1->RangeLimits.MinVSyncFreq.Denominator;
  Numerator = a1->RangeLimits.MinVSyncFreq.Numerator;
  if ( Numerator > v3 * (unsigned __int64)(unsigned int)v5 )
    return 3223192330LL;
  if ( Numerator < 5 * v5 )
  {
    if ( a1->Origin != D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE )
      return 3223192330LL;
    WdLogSingleEntry3(3LL, Numerator, Denominator, 5LL);
  }
  v7 = a1->RangeLimits.MinHSyncFreq.Denominator;
  if ( !(_DWORD)v7 )
    return 3223192330LL;
  v8 = a1->RangeLimits.MinHSyncFreq.Numerator;
  if ( v8 > v4 * (unsigned __int64)a1->RangeLimits.MinHSyncFreq.Denominator )
    return 3223192330LL;
  if ( v8 < 1000 * (unsigned __int64)a1->RangeLimits.MinHSyncFreq.Denominator )
  {
    if ( a1->Origin == D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE )
    {
      WdLogSingleEntry3(3LL, v8, v7, 1000LL);
      goto LABEL_7;
    }
    return 3223192330LL;
  }
LABEL_7:
  if ( !a1->RangeLimits.MaxVSyncFreq.Denominator )
    return 3223192330LL;
  v9 = a1->RangeLimits.MaxVSyncFreq.Denominator;
  v10 = a1->RangeLimits.MaxVSyncFreq.Numerator;
  if ( v10 < 5 * v9 )
    return 3223192330LL;
  if ( v10 > v3 * v9 )
    return 3223192330LL;
  if ( !a1->RangeLimits.MaxHSyncFreq.Denominator )
    return 3223192330LL;
  v11 = a1->RangeLimits.MaxHSyncFreq.Denominator;
  v12 = a1->RangeLimits.MaxHSyncFreq.Numerator;
  if ( v12 < 1000 * v11 || v12 > v4 * v11 )
    return 3223192330LL;
  if ( a1->ConstraintType != D3DKMDT_MFRC_ACTIVESIZE )
  {
    if ( a1->ConstraintType != D3DKMDT_MFRC_MAXPIXELRATE )
      return 3223192408LL;
    if ( a1->Constraint.MaxPixelRate - 1 <= 0x2540BE3FFLL )
      return 0LL;
    return 3223192330LL;
  }
  if ( a1->Constraint.ActiveSize.cx < 0x64 )
    return 3223192331LL;
  else
    return a1->Constraint.ActiveSize.cy < 0x64 ? 0xC01E030B : 0;
}
