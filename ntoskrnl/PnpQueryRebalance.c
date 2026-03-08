/*
 * XREFs of PnpQueryRebalance @ 0x14096B674
 * Callers:
 *     PnpFindRebalanceCandidates @ 0x14096B548 (PnpFindRebalanceCandidates.c)
 *     PnpQueryRebalance @ 0x14096B674 (PnpQueryRebalance.c)
 * Callees:
 *     PnpQueryRebalance @ 0x14096B674 (PnpQueryRebalance.c)
 *     PnpQueryRebalanceWorker @ 0x14096B728 (PnpQueryRebalanceWorker.c)
 */

__int64 __fastcall PnpQueryRebalance(ULONG_PTR a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  _QWORD *v6; // rsi
  int v7; // edi
  int Rebalance; // eax

  v6 = *(_QWORD **)(a1 + 8);
  v7 = 0;
  if ( !v6 )
    return (unsigned int)PnpQueryRebalanceWorker(a1, a5, a6);
  do
  {
    Rebalance = PnpQueryRebalance((_DWORD)v6, a2, a3, a4, a5, a6);
    v6 = (_QWORD *)*v6;
    if ( Rebalance < 0 )
      v7 = -1073741823;
  }
  while ( v6 );
  if ( v7 >= 0 )
    return (unsigned int)PnpQueryRebalanceWorker(a1, a5, a6);
  return (unsigned int)v7;
}
