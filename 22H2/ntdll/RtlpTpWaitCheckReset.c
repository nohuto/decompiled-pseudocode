/*
 * XREFs of RtlpTpWaitCheckReset @ 0x18007970C
 * Callers:
 *     RtlpTpWaitCallback @ 0x1800795F0 (RtlpTpWaitCallback.c)
 * Callees:
 *     TpSetWaitEx @ 0x180011D60 (TpSetWaitEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpTpWaitCheckReset(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v4; // edi

  v4 = a2;
  RtlAcquireSRWLockExclusive(a1 + 16, a2, a3, a4);
  if ( (*(_BYTE *)(a1 + 8) & 8) == 0 && (!v4 || v4 == 258) )
    TpSetWaitEx(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 56), *(_QWORD **)(a1 + 72), 0LL);
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
}
