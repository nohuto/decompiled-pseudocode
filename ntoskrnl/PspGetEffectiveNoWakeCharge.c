/*
 * XREFs of PspGetEffectiveNoWakeCharge @ 0x1406FC1C4
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x1406FBA00 (PspEnforceLimitsJobPostCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetEffectiveNoWakeCharge(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // rdx

  result = *(unsigned int *)(a1 + 1536);
  *a2 = 0LL;
  *a3 = 0LL;
  if ( (result & 0x800) != 0 )
  {
    if ( *(_DWORD *)(a1 + 1048) )
    {
      v5 = *(_QWORD *)(a1 + 1160);
      *a2 = v5;
      if ( (result & 0x400000) == 0 )
      {
        v6 = *(_QWORD *)(a1 + 1288);
        if ( !v6 || (*(_DWORD *)(v6 + 1536) & 0x1000) == 0 || !*(_DWORD *)(v6 + 1048) )
        {
          *a3 = v5;
          if ( v6 )
            _InterlockedOr((volatile signed __int32 *)(v6 + 1536), 0x400000u);
        }
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 1536) & 0x400000) != 0 )
  {
    result = *(_QWORD *)(a1 + 1288);
    if ( result )
      _InterlockedOr((volatile signed __int32 *)(result + 1536), 0x400000u);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1536), 0xFFBFFFFF);
  }
  return result;
}
