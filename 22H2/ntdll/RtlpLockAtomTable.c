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

char __fastcall RtlpLockAtomTable(_DWORD *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  if ( !a1 || *a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)(a1 + 2), a2, a3, a4);
  return 1;
}
