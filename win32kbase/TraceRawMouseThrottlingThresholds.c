/*
 * XREFs of TraceRawMouseThrottlingThresholds @ 0x1C0218C28
 * Callers:
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0161760 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ?RawMouseThrottlingThresholds@Mouse@InputTraceLogging@@SAXU0@@Z @ 0x1C0214E68 (-RawMouseThrottlingThresholds@Mouse@InputTraceLogging@@SAXU0@@Z.c)
 */

void __fastcall TraceRawMouseThrottlingThresholds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 3304) )
    InputTraceLogging::Mouse::RawMouseThrottlingThresholds();
}
