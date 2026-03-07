__int64 __fastcall ProducerGetBuffer(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // rbp
  __int64 v6; // rsi
  unsigned __int64 v8; // rdx
  __int64 result; // rax
  unsigned __int64 v10; // r8

  v4 = a3;
  v6 = a2;
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
    v8 = *(unsigned int *)(a1 + 8);
    if ( (unsigned int)v6 <= (int)v8 + *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 32) )
      break;
    if ( (a4 & 1) != 0 )
    {
      result = 0LL;
      goto LABEL_14;
    }
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
    }
    while ( (unsigned int)v6 > *(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 32) );
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
  v10 = *(_QWORD *)(a1 + 32);
  result = *(_QWORD *)a1 + (unsigned int)(v10 % v8);
  *(_QWORD *)(a1 + 16) -= v4;
  *(_QWORD *)(a1 + 32) = v10 + v6;
LABEL_14:
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
