/*
 * XREFs of PopFxRequestWorkerInternal @ 0x140314D94
 * Callers:
 *     PopPepRequestWork @ 0x1403138C0 (PopPepRequestWork.c)
 *     PopFxRequestWorker @ 0x14058B880 (PopFxRequestWorker.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x1402B7170 (KeReleaseSemaphoreEx.c)
 *     ExTryQueueWorkItem @ 0x1402B9B00 (ExTryQueueWorkItem.c)
 */

char __fastcall PopFxRequestWorkerInternal(__int64 a1, char a2)
{
  volatile signed __int32 *v3; // rbx
  signed __int32 v4; // eax
  __int64 v5; // rsi

  if ( a1 )
  {
    v3 = (volatile signed __int32 *)(a1 + 120);
  }
  else
  {
    v3 = (volatile signed __int32 *)&PopFxSystemWorkPool;
    if ( (a2 & 1) != 0 )
      v3 = (volatile signed __int32 *)&PopFxNoFaultSystemWorkPool;
  }
  LOBYTE(v4) = KeReleaseSemaphoreEx((__int64)(v3 + 16), 0, 1);
  if ( !a1 || (*(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    v5 = 0LL;
    do
    {
      _m_prefetchw((const void *)(v3 + 24));
      v4 = _InterlockedOr(v3 + 24, 1 << v5);
      if ( (v4 & (1 << v5)) == 0 )
      {
        LOBYTE(v4) = ExTryQueueWorkItem((__int64 *)&v3[8 * v5 + 28 + 2 * (unsigned int)v5], 0x30u);
        if ( (_BYTE)v4 )
          return v4;
        _InterlockedAnd(v3 + 24, ~(1 << v5));
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < 4 );
  }
  return v4;
}
