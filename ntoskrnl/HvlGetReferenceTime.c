/*
 * XREFs of HvlGetReferenceTime @ 0x1403C30D8
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140234630 (PpmCheckSnapAllDeliveredPerformance.c)
 *     HvlGetPpmStatsForProcessor @ 0x1403C3040 (HvlGetPpmStatsForProcessor.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x14059DC74 (PpmHvSnapPerformanceAccumulation.c)
 * Callees:
 *     HvlGetReferenceTimeUsingTscPage @ 0x1403C3110 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlpGetRegister64 @ 0x1405468E0 (HvlpGetRegister64.c)
 */

__int64 HvlGetReferenceTime()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( (HvlEnlightenments & 0x100) != 0 )
    return HvlGetReferenceTimeUsingTscPage(0LL);
  HvlpGetRegister64(589828LL, &v1);
  return v1;
}
