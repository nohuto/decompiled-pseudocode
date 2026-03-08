/*
 * XREFs of AslpDetermineDosPathNameType @ 0x140A53838
 * Callers:
 *     AslPathToNetworkPathNt @ 0x140A5261C (AslPathToNetworkPathNt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslpDetermineDosPathNameType(__int16 *a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax
  __int16 v3; // dx
  __int16 v4; // ax
  __int16 v5; // ax
  __int16 v6; // ax
  __int16 v7; // ax

  v1 = -1LL;
  result = 0LL;
  do
    ++v1;
  while ( a1[v1] );
  if ( v1 > 4 )
  {
    v3 = *a1;
    if ( *a1 == 92 || v3 == 47 )
    {
      v5 = a1[1];
      if ( v5 == 92 || v5 == 47 )
      {
        v6 = a1[2];
        if ( v6 == 46 || v6 == 63 )
        {
          v7 = a1[3];
          if ( v7 == 92 || v7 == 47 )
            return 6LL;
          else
            return v7 != 0 ? 1 : 7;
        }
        else
        {
          return 1LL;
        }
      }
      else
      {
        return 4LL;
      }
    }
    else if ( v3 && a1[1] == 58 )
    {
      v4 = a1[2];
      if ( v4 == 92 || v4 == 47 )
        return 2LL;
      else
        return 3LL;
    }
    else
    {
      return 5LL;
    }
  }
  return result;
}
