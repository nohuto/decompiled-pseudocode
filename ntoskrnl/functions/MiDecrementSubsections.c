__int64 __fastcall MiDecrementSubsections(ULONG_PTR BugCheckParameter2, __int64 a2, int a3)
{
  ULONG_PTR v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r14

  v5 = BugCheckParameter2;
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)BugCheckParameter2 + 64LL);
  do
  {
    if ( *(_QWORD *)(v5 + 8) )
    {
      v6 += MiDecrementSubsectionViewCount(v5);
      if ( v7 )
      {
        if ( !*(_QWORD *)(v5 + 96) && (*(_BYTE *)(v5 + 34) & 1) == 0 )
          v6 += MiInsertUnusedSubsection(v5);
      }
    }
    if ( v5 == a2 )
      break;
    v5 = *(_QWORD *)(v5 + 16);
    if ( !v7 )
      a3 &= ~8u;
  }
  while ( v5 );
  return v6;
}
