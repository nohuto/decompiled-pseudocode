/*
 * XREFs of HvpViewMapGetLastView @ 0x140732E04
 * Callers:
 *     HvpViewMapExtendStorage @ 0x140732D5C (HvpViewMapExtendStorage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HvpViewMapGetLastView(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rcx
  char *v3; // r8
  int v4; // edx
  unsigned __int64 v5; // rcx

  result = *(_QWORD *)(a1 + 8);
  if ( result )
  {
    v2 = a1 + 40;
    v3 = (char *)(result - 1);
    result = *(_QWORD *)v2;
    if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && result )
      result ^= v2;
    v4 = *(_BYTE *)(v2 + 8) & 1;
    while ( result )
    {
      if ( (__int64)v3 >= *(_QWORD *)(result + 40) )
      {
        if ( (__int64)v3 < *(_QWORD *)(result + 48) )
          return result;
        v5 = *(_QWORD *)(result + 8);
      }
      else
      {
        v5 = *(_QWORD *)result;
      }
      if ( v4 && v5 )
        result ^= v5;
      else
        result = v5;
    }
  }
  return result;
}
