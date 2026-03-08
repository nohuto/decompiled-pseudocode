/*
 * XREFs of NVMeSystemPowerHint @ 0x1C0010A10
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0003050 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeUpdateResumeLatencyTolerance @ 0x1C0010AA0 (NVMeUpdateResumeLatencyTolerance.c)
 */

__int64 __fastcall NVMeSystemPowerHint(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r9
  _DWORD *v3; // r10
  _DWORD *v4; // rdx
  __int64 v5; // r9
  __int64 result; // rax

  if ( a2[1] >= 0x10u && *a2 )
  {
    *(_DWORD *)(a1 + 1892) = a2[2];
    *(_DWORD *)(a1 + 1900) = a2[3];
    NVMeUpdateResumeLatencyTolerance(a1);
    if ( v3[22] == 5 )
    {
      v4 = v3;
      if ( *(_DWORD *)(v2 + 8) == 1 )
        v5 = (unsigned int)v3[26];
      else
        v5 = (unsigned int)v3[25];
    }
    else
    {
      result = (unsigned int)v3[470];
      if ( (result & 0x10) == 0 )
        return result;
      v4 = v3;
      if ( *(_DWORD *)(v2 + 8) == 1 )
        v5 = (unsigned int)v3[26];
      else
        v5 = 0xFFFFFFFFLL;
    }
    return StorPortExtendedFunction(57LL, v4, 0LL, v5);
  }
  return result;
}
