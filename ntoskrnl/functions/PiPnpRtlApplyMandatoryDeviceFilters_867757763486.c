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
