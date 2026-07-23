/*
 * XREFs of LdrpCleanupThreadTlsData @ 0x180071574
 * Callers:
 *     LdrpFreeTls @ 0x1800714B8 (LdrpFreeTls.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void LdrpCleanupThreadTlsData()
{
  _QWORD *v0; // rdi
  _QWORD *v1; // rsi
  unsigned __int64 UniqueThread; // r14
  void *ProcessHeap; // r15
  _RTL_SRWLOCK *v4; // rbx
  _QWORD *Value; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx

  v0 = 0LL;
  v1 = 0LL;
  UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v4 = (_RTL_SRWLOCK *)((char *)&LdrpDelayedTlsReclaimTable + 16 * ((UniqueThread >> 2) & 0xF));
  RtlAcquireSRWLockExclusive(v4 + 1);
  Value = (_QWORD *)v4->Value;
  if ( v4->Value )
  {
    do
    {
      v6 = (_QWORD *)Value[1];
      if ( *Value == UniqueThread )
      {
        if ( v1 )
          v1[1] = v6;
        else
          v4->Value = (unsigned __int64)v6;
        Value[1] = v0;
        v0 = Value;
        Value = v1;
      }
      v1 = Value;
      Value = v6;
    }
    while ( v6 );
  }
  RtlReleaseSRWLockExclusive(v4 + 1);
  if ( v0 )
  {
    do
    {
      v7 = (_QWORD *)v0[1];
      RtlFreeHeap(ProcessHeap, 0, v0);
      v0 = v7;
    }
    while ( v7 );
  }
}
