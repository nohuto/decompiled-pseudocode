char __fastcall CBatchOptimizer::MatchStateToHomogeneousLayer(
        const struct SharedStateLayer *a1,
        const struct SharedStateLayer::StateBlock *a2)
{
  char v2; // r8
  int v3; // eax
  char v4; // al

  if ( *(_QWORD *)a1 != *(_QWORD *)a2 )
    return 0;
  v2 = 1;
  if ( !*((_QWORD *)a1 + 4) )
  {
    v3 = *((_DWORD *)a1 + 5);
    if ( v3 != 1 )
      return v3 == 0;
  }
  if ( *((_DWORD *)a1 + 2) != *((_DWORD *)a2 + 2) )
    return 0;
  v4 = *((_BYTE *)a1 + 12);
  if ( v4 != *((_BYTE *)a2 + 12) || v4 == 2 )
    return 0;
  return v2;
}
