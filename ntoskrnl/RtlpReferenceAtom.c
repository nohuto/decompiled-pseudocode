/*
 * XREFs of RtlpReferenceAtom @ 0x140354B9C
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1403546F0 (RtlAddAtomToAtomTableEx.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlpReferenceAtom(__int64 a1, __int64 a2)
{
  __int16 result; // ax
  __int16 v3; // ax

  if ( a2 != a1 + 16 && !*(_WORD *)(a2 + 20) )
  {
    v3 = *(_WORD *)(a1 + 36);
    if ( v3 == -1 )
      *(_WORD *)(a1 + 38) |= 1u;
    else
      *(_WORD *)(a1 + 36) = v3 + 1;
  }
  result = *(_WORD *)(a2 + 20);
  if ( result == -1 )
    *(_WORD *)(a2 + 22) |= 1u;
  else
    *(_WORD *)(a2 + 20) = ++result;
  return result;
}
