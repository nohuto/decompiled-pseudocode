/*
 * XREFs of sub_18013E5C0 @ 0x18013E5C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18013E060 @ 0x18013E060 (sub_18013E060.c)
 */

__int64 __fastcall sub_18013E5C0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  if ( a2 )
  {
    *a2 = 0LL;
    v3 = sub_18013E060(a1, a2);
    if ( v3 < 0 )
      return (unsigned int)v3;
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
