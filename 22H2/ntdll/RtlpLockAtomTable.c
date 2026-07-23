/*
 * XREFs of RtlpLockAtomTable @ 0x180059928
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x180059150 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x180059250 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18005945C (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x180059670 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x18008AD00 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x18008ADC0 (RtlEmptyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1800EB010 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpLockAtomTable(__int64 a1)
{
  if ( !a1 || *(_DWORD *)a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  return 1;
}
