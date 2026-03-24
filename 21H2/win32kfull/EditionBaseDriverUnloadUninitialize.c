/*
 * XREFs of EditionBaseDriverUnloadUninitialize @ 0x1C0127670
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1C000A6C8 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     UnloadWin32kCall @ 0x1C0127694 (UnloadWin32kCall.c)
 *     wil_UninitializeFeatureStaging @ 0x1C037B190 (wil_UninitializeFeatureStaging.c)
 */

__int64 EditionBaseDriverUnloadUninitialize()
{
  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
  UnloadWin32kCall();
  wil_UninitializeFeatureStaging();
  return 0LL;
}
