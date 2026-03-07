void __fastcall EtwpCancelStackWalkApc(__int64 a1)
{
  EtwpFinalizePendingApc(*(unsigned int **)(a1 + 56), a1);
}
