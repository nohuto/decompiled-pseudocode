unsigned __int64 __fastcall ConsumerPeekAndConsumeBuffer(__int64 a1, unsigned int *a2, char a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v8; // r12
  unsigned int v9; // ebp
  unsigned int v10; // eax
  unsigned int v11; // esi
  unsigned __int64 v12; // r14
  unsigned int v13; // eax
  int v14; // edx
  unsigned __int64 result; // rax

  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
  {
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
    }
    while ( *(_DWORD *)(a1 + 24) );
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(a1 + 48);
    v9 = *(_DWORD *)(a1 + 40) - v8;
    if ( !*(_QWORD *)(a1 + 16) )
    {
      v10 = *a2;
      if ( *a2 >= *(_DWORD *)(a1 + 32) - (int)v8 )
        v10 = *(_DWORD *)(a1 + 32) - v8;
      *a2 = v10;
    }
    v11 = *a2;
    if ( *a2 <= v9 )
    {
      if ( !v11 )
        goto LABEL_24;
      v12 = *(_QWORD *)a1 + v8 % *(unsigned int *)(a1 + 8);
      v13 = PopHiberPeekRangeTable(v12, v11, a5);
      v11 = v13;
      if ( v13 <= v9 )
        break;
    }
    if ( (a3 & 1) != 0 )
      goto LABEL_24;
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
      v14 = *(_DWORD *)(a1 + 48);
      if ( !*(_QWORD *)(a1 + 16) && v11 >= *(_DWORD *)(a1 + 32) - v14 )
        v11 = *(_DWORD *)(a1 + 32) - v14;
    }
    while ( *(_QWORD *)(a1 + 48) == v8 && v11 > *(_DWORD *)(a1 + 40) - v14 );
    while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
    {
      do
      {
        _mm_pause();
        PopHiberCheckForDebugBreak();
      }
      while ( *(_DWORD *)(a1 + 24) );
    }
  }
  *a2 = v13;
  if ( v13 )
  {
    *(_QWORD *)(a1 + 48) += v13;
    goto LABEL_25;
  }
LABEL_24:
  v12 = 0LL;
LABEL_25:
  result = v12;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
