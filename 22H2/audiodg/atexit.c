/*
 * XREFs of atexit @ 0x14001D68C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x140001090 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1400010A0 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for___AtlModule__ @ 0x1400010B0 (_dynamic_initializer_for___AtlModule__.c)
 *     _dynamic_initializer_for__g_CpuManager__ @ 0x1400010D0 (_dynamic_initializer_for__g_CpuManager__.c)
 *     _dynamic_initializer_for__SadMap__ @ 0x1400010E0 (_dynamic_initializer_for__SadMap__.c)
 *     _dynamic_initializer_for__g_CritSecSadMap__ @ 0x1400010F0 (_dynamic_initializer_for__g_CritSecSadMap__.c)
 *     _dynamic_initializer_for__CVpoContext::s_mapVpoContext__ @ 0x140001120 (_dynamic_initializer_for__CVpoContext--s_mapVpoContext__.c)
 *     _dynamic_initializer_for__SubmixList__ @ 0x140001130 (_dynamic_initializer_for__SubmixList__.c)
 *     _dynamic_initializer_for__g_CritSecSubmixList__ @ 0x140001140 (_dynamic_initializer_for__g_CritSecSubmixList__.c)
 *     _dynamic_initializer_for__g_AudioHistoryManager__ @ 0x140001170 (_dynamic_initializer_for__g_AudioHistoryManager__.c)
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x140001180 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 *     ATL::_dynamic_initializer_for__g_strheap__ @ 0x1400011A0 (ATL--_dynamic_initializer_for__g_strheap__.c)
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x1400011E0 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x140001200 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x140001220 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     _dynamic_initializer_for__gEventList__ @ 0x140001240 (_dynamic_initializer_for__gEventList__.c)
 *     _dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__ @ 0x140001250 (_dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x140001270 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     _dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__ @ 0x140001320 (_dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_SpatialCrossProcessProviderRegistration__ @ 0x140001340 (_dynamic_initializer_for__g_SpatialCrossProcessProviderRegistration__.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400053EC (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x1400059A0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140008230 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     pre_c_initialization @ 0x14001CD50 (pre_c_initialization.c)
 *     __scrt_initialize_thread_safe_statics @ 0x14001E6E0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     _onexit @ 0x14001D634 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
