/*
 * XREFs of GreSetPaletteOwner @ 0x1C016CEB0
 * Callers:
 *     <none>
 * Callees:
 *     HmgSetOwner @ 0x1C003E5F0 (HmgSetOwner.c)
 */

__int64 __fastcall GreSetPaletteOwner(__int64 a1, int a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx

  v3 = a1;
  v4 = 0;
  if ( a1 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 3168LL) + 120LL) )
    return (unsigned int)HmgSetOwner(v3, a2, 8);
  return v4;
}
