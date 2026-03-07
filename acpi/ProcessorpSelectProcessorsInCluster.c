__int64 __fastcall ProcessorpSelectProcessorsInCluster(__int16 a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdi
  __int64 v8; // rbp
  ULONGLONG v9; // rcx

  if ( *(_DWORD *)(a3 + 36) == 1 || a1 == 2 )
  {
    do
    {
      v8 = *(unsigned int *)(a4 + 40);
      v7 = 1LL << *(_DWORD *)(a4 + 40);
      v9 = *(_QWORD *)(a4 + 24);
      if ( (v9 & ~(2 * v7 - 1)) != 0 )
        v9 &= ~(2 * v7 - 1);
      *(_DWORD *)(a4 + 40) = RtlFindLeastSignificantBit(v9);
    }
    while ( a2 && (v7 & *(_QWORD *)(a4 + 32)) == 0 );
    *(_QWORD *)(a5 + 16) = v8;
  }
  else
  {
    *(_QWORD *)(a5 + 16) = *(unsigned int *)(a4 + 16);
    if ( a2 )
      return *(_QWORD *)(a4 + 32);
    else
      return *(_QWORD *)(a4 + 24);
  }
  return v7;
}
