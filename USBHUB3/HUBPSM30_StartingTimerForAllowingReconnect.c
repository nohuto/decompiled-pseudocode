/*
 * XREFs of HUBPSM30_StartingTimerForAllowingReconnect @ 0x1C0012C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM30_StartingTimerForAllowingReconnect(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = -20000000LL;
  if ( (*(_DWORD *)(v1 + 1336) & 2) == 0 )
    v2 = -10000000LL;
  ExSetTimer(*(_QWORD *)(v1 + 1312), v2, 0LL, 0LL);
  return 3013LL;
}
