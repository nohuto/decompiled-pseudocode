/*
 * XREFs of TpDisablePoolCallbackChecks @ 0x1800859A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall TpDisablePoolCallbackChecks(__int64 a1)
{
  if ( !a1 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  *(_DWORD *)(a1 + 436) |= 1u;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  return 0LL;
}
