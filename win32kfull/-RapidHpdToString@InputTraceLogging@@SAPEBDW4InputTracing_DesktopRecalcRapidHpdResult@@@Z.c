/*
 * XREFs of ?RapidHpdToString@InputTraceLogging@@SAPEBDW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1C02044A4
 * Callers:
 *     ?TraceLoggingRapidHpdComplete@@YAXIIIIIU_GUID@@I@Z @ 0x1C0204D6C (-TraceLoggingRapidHpdComplete@@YAXIIIIIU_GUID@@I@Z.c)
 *     ?RapidHpdComplete@DesktopRecalc@InputTraceLogging@@SAXW4InputTracing_DesktopRecalcRapidHpdResult@@IIIIU_GUID@@I@Z @ 0x1C0230710 (-RapidHpdComplete@DesktopRecalc@InputTraceLogging@@SAXW4InputTracing_DesktopRecalcRapidHpdResult.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::RapidHpdToString(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( !a1 )
    return "Succeeded";
  v1 = a1 - 1;
  if ( !v1 )
    return "Comparison Failed";
  v2 = v1 - 1;
  if ( !v2 )
    return "Other Recalcs";
  if ( v2 == 1 )
    return "Session Cleanup";
  return "UNKNOWN";
}
