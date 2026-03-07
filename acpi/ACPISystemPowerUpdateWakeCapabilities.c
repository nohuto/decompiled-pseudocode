__int64 __fastcall ACPISystemPowerUpdateWakeCapabilities(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        int *a5,
        _DWORD *a6,
        signed int *a7,
        signed int *a8)
{
  if ( (*(_BYTE *)(a1 + 8) & 0x60) == 0x40 && !_bittest64((const signed __int64 *)(a1 + 1008), 0x20u) )
    return ACPISystemPowerUpdateWakeCapabilitiesForFilters(a1, a2, a3, a4, a5, a6, a7, a8);
  if ( a8 )
    *a8 = 0;
  return ACPISystemPowerUpdateWakeCapabilitiesForPDOs(a1, a2, (__int64)a3, a4, a5, (__int64)a6, a7, a8);
}
