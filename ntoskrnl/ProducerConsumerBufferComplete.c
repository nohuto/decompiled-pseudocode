/*
 * XREFs of ProducerConsumerBufferComplete @ 0x140AA2D38
 * Callers:
 *     PopCountDataAsProduced @ 0x140A9EFB4 (PopCountDataAsProduced.c)
 *     PopDecompressHiberBlocks @ 0x140A9F1C4 (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x140AA0A10 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140AA0E40 (PopRequestWrite.c)
 * Callees:
 *     PopHiberCheckForDebugBreak @ 0x140A9FCE4 (PopHiberCheckForDebugBreak.c)
 */

__int64 __fastcall ProducerConsumerBufferComplete(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rbp
  unsigned __int64 v8; // r8
  unsigned int v9; // esi
  unsigned __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 result; // rax
  __int64 v13; // rsi

  v4 = a4;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
  {
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
    }
    while ( *(_DWORD *)(a1 + 24) );
  }
  v8 = *(_QWORD *)(a2 + 8);
  v9 = a3 - *(_DWORD *)a1;
  v10 = v8 % *(unsigned int *)(a1 + 8);
  v11 = *(_DWORD *)(a1 + 8) + v9;
  if ( (unsigned int)v10 <= v9 )
    v11 = v9;
  result = v11 - (unsigned int)v10;
  v13 = v8 + (unsigned int)result;
  while ( v13 != v8 )
  {
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
    }
    while ( v13 != *(_QWORD *)(a2 + 8) );
    while ( 1 )
    {
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0);
      if ( !(_DWORD)result )
        break;
      do
      {
        _mm_pause();
        PopHiberCheckForDebugBreak();
      }
      while ( *(_DWORD *)(a1 + 24) );
    }
    v8 = *(_QWORD *)(a2 + 8);
  }
  *(_QWORD *)(a2 + 8) = v8 + v4;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
