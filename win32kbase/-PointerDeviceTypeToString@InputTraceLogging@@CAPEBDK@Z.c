/*
 * XREFs of ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C00EF4BE
 * Callers:
 *     rimSignalReadComplete @ 0x1C0003CE8 (rimSignalReadComplete.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C0004188 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ?SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C0005090 (-SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 *     rimInputApc @ 0x1C00CB830 (rimInputApc.c)
 *     ?RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01A04B0 (-RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z @ 0x1C01CB5A4 (-CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1C01D405C (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::PointerDeviceTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  if ( !a1 )
    return "Unknown";
  v1 = a1 - 1;
  if ( !v1 )
    return "SingleTouch";
  v2 = v1 - 1;
  if ( !v2 )
    return "SerialTouch";
  v3 = v2 - 1;
  if ( !v3 )
    return "ParallelACTouch";
  v4 = v3 - 1;
  if ( !v4 )
    return "ParallelNullTouch";
  v5 = v4 - 1;
  if ( !v5 )
    return "IntegratedPen";
  v6 = v5 - 1;
  if ( !v6 )
    return "ExternalPen";
  if ( v6 == 1 )
    return "Touchpad";
  return "UNKNOWN";
}
