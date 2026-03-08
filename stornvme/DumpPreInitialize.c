/*
 * XREFs of DumpPreInitialize @ 0x1C00032A0
 * Callers:
 *     <none>
 * Callees:
 *     wil_InitializeFeatureStaging @ 0x1C0037078 (wil_InitializeFeatureStaging.c)
 */

__int64 DumpPreInitialize()
{
  g_DumpPreInitializeInvoked = 1;
  return wil_InitializeFeatureStaging();
}
