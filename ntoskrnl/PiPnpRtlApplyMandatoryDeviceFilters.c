/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceFilters @ 0x1406CDA80
 * Callers:
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1406CBE3C (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1406CDBDC (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback @ 0x14079A710 (PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback.c)
 * Callees:
 *     PiPnpRtlIsDeviceValidForSession @ 0x1406CDAF0 (PiPnpRtlIsDeviceValidForSession.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x1406CDDF4 (PiPnpRtlIsDeviceEnumerableForUser.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceFilters(int a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 result; // rax
  __int64 v9; // rcx

  *a5 = 0;
  result = PiPnpRtlIsDeviceValidForSession(a1, a2, a3, a4, (__int64)a5);
  if ( (int)result < 0 || *a5 && (result = PiPnpRtlIsDeviceEnumerableForUser(v9, a2, a3, a4, a5), (int)result < 0) )
    *a5 = 0;
  return result;
}
