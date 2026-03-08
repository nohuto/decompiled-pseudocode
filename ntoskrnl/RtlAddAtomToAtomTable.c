/*
 * XREFs of RtlAddAtomToAtomTable @ 0x1407DBF10
 * Callers:
 *     <none>
 * Callees:
 *     RtlAddAtomToAtomTableEx @ 0x1403546F0 (RtlAddAtomToAtomTableEx.c)
 */

__int64 __fastcall RtlAddAtomToAtomTable(__int64 a1, _WORD *a2, unsigned __int16 *a3)
{
  return RtlAddAtomToAtomTableEx(a1, a2, a3, 0);
}
