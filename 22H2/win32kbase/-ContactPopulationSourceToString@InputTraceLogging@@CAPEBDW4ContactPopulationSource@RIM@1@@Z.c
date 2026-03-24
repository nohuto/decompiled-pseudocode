/*
 * XREFs of ?ContactPopulationSourceToString@InputTraceLogging@@CAPEBDW4ContactPopulationSource@RIM@1@@Z @ 0x1C01771AC
 * Callers:
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1C01771E4 (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::ContactPopulationSourceToString(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return "DeviceInput";
  v1 = a1 - 1;
  if ( !v1 )
    return "SimulatedKeepAlive";
  if ( v1 == 1 )
    return "SimulatedEndState";
  return "UNKNOWN";
}
