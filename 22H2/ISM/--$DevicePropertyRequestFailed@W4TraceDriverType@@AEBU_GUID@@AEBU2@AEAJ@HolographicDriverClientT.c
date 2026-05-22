/*
 * XREFs of ??$DevicePropertyRequestFailed@W4TraceDriverType@@AEBU_GUID@@AEBU2@AEAJ@HolographicDriverClientTrace@@SAX$$QEAW4TraceDriverType@@AEBU_GUID@@1AEAJ@Z @ 0x18014E66C
 * Callers:
 *     ?OnDevicePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVV2DevicePropertyRequest@234@J@Z @ 0x180161440 (-OnDevicePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEA.c)
 * Callees:
 *     ?DevicePropertyRequestFailed_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1J@Z @ 0x18015BCE8 (-DevicePropertyRequestFailed_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18016057C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167F04 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::DevicePropertyRequestFailed<enum TraceDriverType,_GUID const &,_GUID const &,long &>(
        unsigned int *a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  char result; // al
  __int64 v9; // rcx
  __int64 v10; // rcx

  result = HolographicDriverClientTrace::IsEnabled((unsigned __int8)a1, a2);
  if ( result )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v9,
      _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    return HolographicDriverClientTrace::DevicePropertyRequestFailed_(v10, *a1, a2, a3, *a4);
  }
  return result;
}
