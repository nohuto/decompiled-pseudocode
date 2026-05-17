/*
 * XREFs of LdrpLockTlsDelayedReclaimTable @ 0x1800D521C
 * Callers:
 *     RtlPrepareForProcessCloning @ 0x18009BB80 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6340 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall LdrpLockTlsDelayedReclaimTable(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  char *v7; // rbx
  __int64 v8; // rdi

  RtlAcquireSRWLockShared(&LdrpTlsLock, a2, a3, a4);
  v7 = (char *)&unk_18016D3A8;
  v8 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)v7, v4, v5, v6);
    v7 += 16;
    --v8;
  }
  while ( v8 );
}
