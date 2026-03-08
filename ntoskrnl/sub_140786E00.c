/*
 * XREFs of sub_140786E00 @ 0x140786E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140786E00(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r9

  v2 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v3 = *(_QWORD *)(a1 + 32);
      if ( a2 < v3 || a2 >= v3 + *(_QWORD *)(a1 + 8) )
        return a2 - v3;
    }
    else
    {
      return -1LL;
    }
  }
  else
  {
    LOBYTE(v2) = a2 != 0;
  }
  return v2;
}
