/*
 * XREFs of KiResetScb @ 0x1402F24DC
 * Callers:
 *     KiUpdateCpuTargetByWeight @ 0x1402F1C6C (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1402F1E28 (KiUpdateCpuTargetByRate.c)
 * Callees:
 *     KiMoveScbThreadsToNewReadylist @ 0x1402AB444 (KiMoveScbThreadsToNewReadylist.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1402AEF44 (KiRemoveSchedulingGroupQueue.c)
 */

char __fastcall KiResetScb(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // r8

  LOBYTE(v2) = *(_BYTE *)(a1 + 112) & 0xF1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = a1;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 116) = 0;
  *(_BYTE *)(a1 + 112) = v2;
  if ( (v2 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 128) = 0;
  }
  else if ( *(_QWORD *)(a1 + 120) )
  {
    v2 = *(_QWORD *)(a1 + 120);
    *(_DWORD *)v2 = 0;
  }
  if ( *(_WORD *)(a1 + 114) )
  {
    if ( !*(_DWORD *)(a1 + 116) )
    {
      do
      {
        v5 = *(_QWORD *)(a1 + 408);
        if ( !v5 )
          break;
        a1 = *(_QWORD *)(a1 + 408);
      }
      while ( !*(_DWORD *)(v5 + 116) );
    }
    v6 = *(_DWORD *)(a1 + 116);
    v7 = 0LL;
    if ( !v6 )
      v7 = a2;
    LOBYTE(v2) = KiMoveScbThreadsToNewReadylist(v4, a1 & -(__int64)(v6 != 0), v7, 0LL);
    if ( (*(_BYTE *)(v4 + 112) & 1) != 0 )
    {
      v2 = *(_QWORD *)(v4 + 392);
      if ( (*(_BYTE *)(v4 + 400) & 1) != 0 )
      {
        if ( !v2 )
        {
LABEL_13:
          LOBYTE(v2) = KiRemoveSchedulingGroupQueue(a2, v4, 0);
          return v2;
        }
        v2 ^= v4 + 392;
      }
      if ( v2 )
        return v2;
      goto LABEL_13;
    }
  }
  return v2;
}
