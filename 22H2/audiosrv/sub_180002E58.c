/*
 * XREFs of sub_180002E58 @ 0x180002E58
 * Callers:
 *     sub_180002BB0 @ 0x180002BB0 (sub_180002BB0.c)
 * Callees:
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 */

__int64 __fastcall sub_180002E58(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  unsigned int v5; // eax
  unsigned int *v8; // r8

  v5 = 0;
  if ( a4 < 0 )
  {
    if ( a5 )
    {
      v8 = &a5;
      do
      {
        v8 += 2;
        if ( a4 == *v8 )
          break;
        ++v5;
      }
      while ( v5 < a5 );
    }
    if ( v5 == a5 )
      sub_18006D26C(a1, a2, a3, (unsigned int)a4);
  }
  return (unsigned int)a4;
}
