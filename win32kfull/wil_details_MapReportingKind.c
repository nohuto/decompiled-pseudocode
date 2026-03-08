/*
 * XREFs of wil_details_MapReportingKind @ 0x1C012CFFC
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C012CB40 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_MapReportingKind(int a1, int a2)
{
  unsigned __int8 v2; // cl

  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        return a2 == 0 ? 4 : 0;
      case 2:
        return a2 != 0 ? 1 : 5;
      case 3:
        return a2 != 0 ? 2 : 6;
      case 4:
        return a2 != 0 ? 3 : 7;
      case 5:
        return a2 != 0 ? 8 : 10;
      case 6:
        return a2 != 0 ? 9 : 11;
    }
    v2 = a1 - 100;
    if ( v2 <= 0x31u )
      return v2 + (a2 != 0 ? 100 : 150);
  }
  return 255LL;
}
