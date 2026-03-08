/*
 * XREFs of PnpFindRebalanceCandidates @ 0x14096B548
 * Callers:
 *     PnpRebalance @ 0x14096B948 (PnpRebalance.c)
 * Callees:
 *     PnpQueryRebalance @ 0x14096B674 (PnpQueryRebalance.c)
 */

__int64 __fastcall PnpFindRebalanceCandidates(
        unsigned int a1,
        __int64 a2,
        int a3,
        unsigned int *a4,
        int a5,
        __int64 a6)
{
  __int64 v6; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdi
  int Rebalance; // eax
  __int64 v12; // rbx
  __int64 result; // rax

  v6 = a1;
  v9 = a2;
  if ( a1 || !a2 )
  {
    v10 = a6;
    v12 = a1;
    PnpQueryRebalance((_DWORD)IopRootDeviceNode, a3, (_DWORD)a4, a6 + 80 + 8 * a1, a6 + 96 + 4LL * a1, a5);
    *(_QWORD *)(a6 + 8 * v6 + 24) = IopRootDeviceNode;
    *(_BYTE *)(v6 + a6 + 40) = 1;
  }
  else
  {
    v10 = a6;
    *(_QWORD *)(a6 + 48) = a2;
    if ( *(_DWORD *)(a2 + 300) == 778 )
    {
      *(_DWORD *)(a6 + 12) = 1;
      goto LABEL_6;
    }
    v9 = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(a6 + 12) = 2;
    if ( v9 )
    {
LABEL_6:
      while ( 1 )
      {
        Rebalance = PnpQueryRebalance(v9, a3, (_DWORD)a4, (int)a6 + 80, a6 + 96, a5);
        if ( Rebalance != 281 )
          break;
        v9 = *(_QWORD *)(v9 + 16);
        if ( !v9 )
          goto LABEL_8;
      }
      v12 = v6;
      *(_BYTE *)(v6 + a6 + 40) = Rebalance >= 0;
      *(_QWORD *)(a6 + 8 * v6 + 24) = v9;
    }
    else
    {
LABEL_8:
      v12 = v6;
    }
  }
  result = *a4;
  *(_DWORD *)(v10 + 4 * v12) = result;
  return result;
}
