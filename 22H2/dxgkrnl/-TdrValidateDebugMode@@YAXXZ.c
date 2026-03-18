/*
 * XREFs of ?TdrValidateDebugMode@@YAXXZ @ 0x1C00500F4
 * Callers:
 *     TdrTimedOperationAllowToDebugTimeout @ 0x1C005019C (TdrTimedOperationAllowToDebugTimeout.c)
 *     ?TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z @ 0x1C030DED0 (-TdrAllowToDebugEngineTimeout@@YA_NPEAU_VIDSCH_NODE@@PEAVDXGADAPTER@@@Z.c)
 *     TdrAllowToDebugTimeout @ 0x1C030FBB8 (TdrAllowToDebugTimeout.c)
 * Callees:
 *     <none>
 */

void TdrValidateDebugMode(void)
{
  if ( (unsigned int)g_TdrDebugMode >= 4 )
    g_TdrDebugMode = 0;
}
