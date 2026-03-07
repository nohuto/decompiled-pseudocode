__int64 __fastcall PopFxRequestWorkerInternal(__int64 a1, char a2, __int64 a3, int a4)
{
  volatile signed __int32 *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rsi
  char v8; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    v5 = (volatile signed __int32 *)(a1 + 120);
  }
  else
  {
    v5 = (volatile signed __int32 *)&PopFxSystemWorkPool;
    if ( (a2 & 1) != 0 )
      v5 = (volatile signed __int32 *)&PopFxNoFaultSystemWorkPool;
  }
  result = KeReleaseSemaphoreEx((int)v5 + 64, 0, 1, a4, 8, (__int64)&v8);
  if ( !a1 || (*(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    v7 = 0LL;
    do
    {
      _m_prefetchw((const void *)(v5 + 24));
      result = (unsigned int)_InterlockedOr(v5 + 24, 1 << v7);
      if ( ((unsigned int)result & (1 << v7)) == 0 )
      {
        result = ExTryQueueWorkItem(&v5[8 * v7 + 28 + 2 * (unsigned int)v7], 48LL);
        if ( (_BYTE)result )
          return result;
        _InterlockedAnd(v5 + 24, ~(1 << v7));
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < 4 );
  }
  return result;
}
