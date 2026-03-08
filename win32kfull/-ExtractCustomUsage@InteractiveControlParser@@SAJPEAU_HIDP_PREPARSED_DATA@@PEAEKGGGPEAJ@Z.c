/*
 * XREFs of ?ExtractCustomUsage@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAEKGGGPEAJ@Z @ 0x1C024D65C
 * Callers:
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1C0243814 (-GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InteractiveControlParser::ExtractCustomUsage(
        PHIDP_PREPARSED_DATA PreparsedData,
        PCHAR Report,
        ULONG ReportLength,
        USAGE a4,
        USHORT a5,
        USAGE a6,
        int *a7)
{
  NTSTATUS ScaledUsageValue; // edx
  LONG UsageValue[4]; // [rsp+40h] [rbp-28h] BYREF
  USHORT v14; // [rsp+78h] [rbp+10h] BYREF

  UsageValue[0] = 0;
  if ( !Report )
  {
    v14 = 0;
    HidP_GetSpecificValueCaps(HidP_Input, a4, a5, a6, 0LL, &v14, PreparsedData);
  }
  ScaledUsageValue = HidP_GetScaledUsageValue(HidP_Input, a4, a5, a6, UsageValue, PreparsedData, Report, ReportLength);
  if ( ScaledUsageValue >= 0 )
  {
    if ( a7 )
      *a7 = UsageValue[0];
  }
  else
  {
    return (unsigned int)-1072627708;
  }
  return (unsigned int)ScaledUsageValue;
}
