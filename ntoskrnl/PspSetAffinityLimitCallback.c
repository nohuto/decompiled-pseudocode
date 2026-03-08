/*
 * XREFs of PspSetAffinityLimitCallback @ 0x1409AFA00
 * Callers:
 *     <none>
 * Callees:
 *     PspCheckJobAccessState @ 0x1409AF0FC (PspCheckJobAccessState.c)
 */

__int64 __fastcall PspSetAffinityLimitCallback(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 1124) & 0x4000000) == 0 || (*(_DWORD *)(a1 + 1120) & 1) != 0 )
    return 0LL;
  else
    return PspCheckJobAccessState(a2, a1);
}
