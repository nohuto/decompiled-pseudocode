/*
 * XREFs of ProducerGetBuffer @ 0x140995778
 * Callers:
 *     PopCountDataAsProduced @ 0x14099551C (PopCountDataAsProduced.c)
 *     PopRequestRead @ 0x1409B2784 (PopRequestRead.c)
 * Callees:
 *     PopHiberCheckForDebugBreak @ 0x14099581C (PopHiberCheckForDebugBreak.c)
 */

unsigned __int64 __fastcall ProducerGetBuffer(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // rbp
  __int64 v6; // rsi
  unsigned __int64 v8; // r8
  unsigned __int64 result; // rax

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
    if ( (unsigned int)v6 <= *(_DWORD *)(a1 + 56) + *(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 32) )
    {
      v8 = *(_QWORD *)(a1 + 32);
      result = *(_QWORD *)a1 + v8 % *(unsigned int *)(a1 + 8);
      *(_QWORD *)(a1 + 16) -= v4;
      *(_QWORD *)(a1 + 32) = v8 + v6;
      goto LABEL_4;
    }
    if ( (a4 & 1) != 0 )
      break;
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
  result = 0LL;
LABEL_4:
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
