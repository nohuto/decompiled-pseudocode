/*
 * XREFs of PpmUpdateIdleContext @ 0x14097FBA0
 * Callers:
 *     PpmUpdateIdleStates @ 0x14080D6D0 (PpmUpdateIdleStates.c)
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 */

__int64 __fastcall PpmUpdateIdleContext(unsigned int a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 result; // rax

  v3 = *(_QWORD *)(KeGetPrcb(a1) + 33600);
  result = 0LL;
  if ( !v3 )
    return 3221225659LL;
  if ( !*(_QWORD *)(v3 + 688) )
    return 3221225865LL;
  *(_DWORD *)(v3 + 44) = 4;
  *(_QWORD *)(v3 + 688) = *(_QWORD *)(a2 + 8);
  return result;
}
