/*
 * XREFs of ??1last_error_context@wil@@QEAA@XZ @ 0x18007DCC8
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18002D098 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18002D190 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18002DC98 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18004223C (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x18004ABF8 (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x18007ECB8 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z @ 0x18007EF54 (-RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::last_error_context::~last_error_context(wil::last_error_context *this)
{
  if ( !*(_BYTE *)this )
    SetLastError(*((_DWORD *)this + 1));
}
