char __fastcall ViUnbindDifThunk(__int64 a1, int a2)
{
  while ( *(_DWORD *)(a1 + 52) != a2 || !*(_QWORD *)(a1 + 40) )
  {
    a1 += 56LL;
    if ( !*(_QWORD *)a1 )
      return 0;
  }
  *(_DWORD *)(a1 + 32) &= ~1u;
  return 1;
}
