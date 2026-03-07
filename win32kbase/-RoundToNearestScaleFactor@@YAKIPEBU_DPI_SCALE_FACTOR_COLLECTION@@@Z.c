__int64 __fastcall RoundToNearestScaleFactor(unsigned int a1, const struct _DPI_SCALE_FACTOR_COLLECTION *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r8
  __int64 v6; // r10

  v2 = 0;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !*((_QWORD *)a2 + 2) )
    WdLogSingleEntry0(1LL);
  v5 = *((_QWORD *)a2 + 2);
  if ( !v5 )
    return 0LL;
  if ( *((_DWORD *)a2 + 2) != 1 )
  {
    do
    {
      v6 = v2 + 1;
      if ( a1 <= (unsigned int)(*(_DWORD *)(v5 + 4LL * v2) + *(_DWORD *)(v5 + 4 * v6)) >> 1 )
        break;
      ++v2;
    }
    while ( (unsigned int)v6 < *((_DWORD *)a2 + 2) - 1 );
  }
  return *(unsigned int *)(v5 + 4LL * v2);
}
