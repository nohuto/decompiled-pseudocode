/*
 * XREFs of PpmExitCoordinatedIdleState @ 0x14045A694
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     PpmIdleTransitionStall @ 0x1405831B0 (PpmIdleTransitionStall.c)
 */

char __fastcall PpmExitCoordinatedIdleState(volatile signed __int32 *a1, bool *a2)
{
  unsigned __int32 v2; // r8d
  char v3; // bl
  signed __int32 v6; // eax
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]

  v2 = *a1;
  v9 = 0LL;
  v3 = 0;
  BYTE12(v9) = 1;
  *(_QWORD *)&v9 = 0LL;
  v8[0] = 0LL;
  v8[1] = PopCoordinatedIdleExitTimeout;
  *a2 = 0;
  while ( v2 )
  {
    if ( (v2 & 0x4000000) != 0 )
    {
      v6 = _InterlockedCompareExchange(a1, v2 & 0xFA000FFF | ((KeGetPcr()->Prcb.Number & 0xFFF | 0x2000) << 12), v2);
      if ( v2 == v6 )
      {
        v3 = 1;
        *a2 = (v2 & 0xFFF) == KeGetPcr()->Prcb.Number;
        return v3;
      }
      v2 = v6;
    }
    else
    {
      if ( (v2 & 0x3000000) == 0x2000000 && ((v2 >> 12) & 0xFFF) == KeGetPcr()->Prcb.Number )
      {
        v3 = 1;
        *a2 = 1;
        return v3;
      }
      PpmIdleTransitionStall(v8);
      v2 = *a1;
    }
  }
  return v3;
}
