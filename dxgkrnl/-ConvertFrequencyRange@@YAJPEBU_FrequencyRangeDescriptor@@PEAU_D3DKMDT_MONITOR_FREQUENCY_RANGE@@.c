/*
 * XREFs of ?ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C001F3F0
 * Callers:
 *     ?ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z @ 0x1C01FF808 (-ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z.c)
 * Callees:
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C001F4B8 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C001F6AC (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 */

__int64 __fastcall ConvertFrequencyRange(
        const struct _FrequencyRangeDescriptor *a1,
        struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *a2)
{
  __int64 ConstraintType; // rdx
  ULONG v5; // ecx
  D3DKMDT_MONITOR_FREQUENCY_RANGE_CONSTRAINT v6; // eax
  __int64 result; // rax
  D3DKMDT_MONITOR_FREQUENCY_RANGE_CONSTRAINT v8; // ecx
  __int32 v9; // ecx

  if ( !a1 || !a2 )
    return 3221225485LL;
  *(_OWORD *)&a2->Origin = 0LL;
  *(_OWORD *)&a2->RangeLimits.MaxVSyncFreq.Denominator = 0LL;
  *(_OWORD *)&a2->RangeLimits.MaxHSyncFreq.Denominator = 0LL;
  ConstraintType = (int)a1->ConstraintType;
  v5 = a1->ConstraintType - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
    {
      WdLogSingleEntry1(2LL, ConstraintType);
      a2->ConstraintType = D3DKMDT_MFRC_UNINITIALIZED;
      return 3223192408LL;
    }
    v6 = D3DKMDT_MFRC_MAXPIXELRATE;
  }
  else
  {
    v6 = D3DKMDT_MFRC_ACTIVESIZE;
  }
  a2->ConstraintType = v6;
  result = ConvertMonitorCapablitiesOrigin(a1->Origin, a2);
  if ( (int)result < 0 )
    return result;
  v8 = a2->ConstraintType;
  a2->RangeLimits.MinVSyncFreq.Numerator = a1->MinVSyncNumerator;
  a2->RangeLimits.MinVSyncFreq.Denominator = a1->MinVSyncDenominator;
  a2->RangeLimits.MaxVSyncFreq.Numerator = a1->MaxVSyncNumerator;
  a2->RangeLimits.MaxVSyncFreq.Denominator = a1->MaxVSyncDenominator;
  a2->RangeLimits.MinHSyncFreq.Numerator = a1->MinHSyncNumerator;
  a2->RangeLimits.MinHSyncFreq.Denominator = a1->MinHSyncDenominator;
  a2->RangeLimits.MaxHSyncFreq.Numerator = a1->MaxHSyncNumerator;
  a2->RangeLimits.MaxHSyncFreq.Denominator = a1->MaxHSyncDenominator;
  v9 = v8 - 1;
  if ( !v9 )
  {
    a2->Constraint.ActiveSize.cx = a1->ActiveWidth;
    a2->Constraint.ActiveSize.cy = a1->ActiveHeight;
    return IsValidFrequencyRange(a2);
  }
  if ( v9 != 1 )
    return 3223192408LL;
  a2->Constraint.MaxPixelRate = a1->MaxPixelRate;
  return IsValidFrequencyRange(a2);
}
