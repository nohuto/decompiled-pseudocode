/*
 * XREFs of SanityCheckDimension @ 0x1C014AEB8
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C025325C (HT_HalftoneBitmap.c)
 * Callees:
 *     <none>
 */

bool __fastcall SanityCheckDimension(__int64 a1, int a2)
{
  int v3; // edi
  __int64 v4; // rcx
  int v5; // r8d

  v3 = a1;
  v4 = *(_QWORD *)(SGDGetSessionState(a1) + 48);
  if ( !*(_DWORD *)(v4 + 72) )
    return 1;
  v5 = v3;
  if ( v3 <= a2 )
  {
    v5 = a2;
    a2 = v3;
  }
  return (unsigned int)(v5 - a2) <= *(_DWORD *)(v4 + 76);
}
