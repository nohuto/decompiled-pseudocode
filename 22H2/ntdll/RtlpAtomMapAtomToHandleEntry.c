/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x180059954
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x180059150 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x180059250 (RtlQueryAtomInAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x180059670 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x1800597B0 (RtlpHashStringToAtom.c)
 *     RtlPinAtomInAtomTable @ 0x1800EB010 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x180059990 (RtlIsValidIndexHandle.c)
 */

__int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)RtlIsValidIndexHandle(a1 + 16, a2, &v3) )
    return *(_QWORD *)(v3 + 8);
  else
    return 0LL;
}
