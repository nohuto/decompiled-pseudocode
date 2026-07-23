/*
 * XREFs of PpmGetIdleConstrainedMask @ 0x140390910
 * Callers:
 *     PpmIdlePrepare @ 0x1402C9890 (PpmIdlePrepare.c)
 *     PoExecuteIdleCheck @ 0x1402CC750 (PoExecuteIdleCheck.c)
 *     PpmEstimateIdleDuration @ 0x140565C14 (PpmEstimateIdleDuration.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall PpmGetIdleConstrainedMask(_QWORD *a1)
{
  unsigned __int8 v2; // di
  __int64 *v3; // r8
  __int64 v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r9

  *a1 = 1310721LL;
  v2 = 0;
  memset(a1 + 1, 0, 0xA0uLL);
  if ( KeNumberNodes )
  {
    v3 = KeNodeBlock;
    v4 = (unsigned __int16)KeNumberNodes;
    do
    {
      v5 = *v3;
      v6 = *(unsigned __int16 *)(*v3 + 144);
      v7 = *(_QWORD *)(*v3 + 72);
      if ( *(_WORD *)a1 <= (unsigned __int16)v6 )
        *(_WORD *)a1 = v6 + 1;
      a1[v6 + 1] |= v7;
      if ( *(_QWORD *)(v5 + 72) )
        v2 = 1;
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
