/*
 * XREFs of LdrpLockTlsDelayedReclaimTable @ 0x1800D521C
 * Callers:
 *     RtlPrepareForProcessCloning @ 0x18009BB80 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6340 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void LdrpLockTlsDelayedReclaimTable()
{
  _RTL_SRWLOCK *v0; // rbx
  __int64 v1; // rdi

  RtlAcquireSRWLockShared(&LdrpTlsLock);
  v0 = &stru_18016D3A8;
  v1 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v0);
    v0 += 2;
    --v1;
  }
  while ( v1 );
}
