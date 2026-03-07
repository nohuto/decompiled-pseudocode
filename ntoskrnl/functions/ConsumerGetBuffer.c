unsigned __int64 __fastcall ConsumerGetBuffer(__int64 a1, unsigned int *a2, char a3)
{
  int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned __int64 result; // rax
  unsigned __int64 v16; // r8

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
    v6 = *(_DWORD *)(a1 + 48);
    v7 = *(_DWORD *)(a1 + 40) - v6;
    if ( !*(_QWORD *)(a1 + 16) )
    {
      v8 = *(_DWORD *)(a1 + 32) - v6;
      v9 = *a2;
      if ( *a2 >= v8 )
        v9 = v8;
      *a2 = v9;
    }
    v10 = *a2;
    if ( (unsigned int)v10 <= v7 )
      break;
    if ( (a3 & 1) != 0 )
      goto LABEL_20;
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
      v11 = *(_DWORD *)(a1 + 48);
      v12 = *(_DWORD *)(a1 + 40) - v11;
      if ( !*(_QWORD *)(a1 + 16) )
      {
        v13 = *(_DWORD *)(a1 + 32) - v11;
        v14 = *a2;
        if ( *a2 >= v13 )
          v14 = v13;
        *a2 = v14;
      }
    }
    while ( *a2 > v12 );
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
  if ( !(_DWORD)v10 )
  {
LABEL_20:
    result = 0LL;
    goto LABEL_23;
  }
  v16 = *(_QWORD *)(a1 + 48);
  result = *(_QWORD *)a1 + v16 % *(unsigned int *)(a1 + 8);
  *(_QWORD *)(a1 + 48) = v16 + v10;
LABEL_23:
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
