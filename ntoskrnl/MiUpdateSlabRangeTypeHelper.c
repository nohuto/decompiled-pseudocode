/*
 * XREFs of MiUpdateSlabRangeTypeHelper @ 0x140B972A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateSlabRangeTypeHelper(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  int v6; // r8d
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx

  if ( (a2[1] & 1) != 0 )
  {
    v4 = *a2;
    if ( !*a2 )
      return 0LL;
    v5 = (unsigned __int64)a2 ^ v4;
  }
  else
  {
    v5 = *a2;
    v4 = *a2;
  }
  if ( v5 )
  {
    if ( (a2[1] & 1) != 0 && v4 )
      v4 ^= (unsigned __int64)a2;
    v6 = a2[1] & 1;
    if ( v4 )
    {
      v7 = *a3;
      do
      {
        if ( v7 <= *(_QWORD *)(v4 + 32) )
        {
          if ( v7 >= *(_QWORD *)(v4 + 24) )
            break;
          v8 = *(_QWORD *)v4;
        }
        else
        {
          v8 = *(_QWORD *)(v4 + 8);
        }
        if ( v6 && v8 )
          v4 ^= v8;
        else
          v4 = v8;
      }
      while ( v4 );
      if ( v4 )
      {
        a3[1] = v4;
        return 1LL;
      }
    }
  }
  return 0LL;
}
