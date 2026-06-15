/*
 * XREFs of sub_180044BCC @ 0x180044BCC
 * Callers:
 *     sub_180008F00 @ 0x180008F00 (sub_180008F00.c)
 *     sub_18000AF30 @ 0x18000AF30 (sub_18000AF30.c)
 *     sub_180064F54 @ 0x180064F54 (sub_180064F54.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall sub_180044BCC(__int64 **a1)
{
  __int64 *v1; // rax
  __int64 *i; // rdx
  __int64 *v4; // r8

  v1 = *a1;
  i = (__int64 *)(*a1)[2];
  if ( *((_BYTE *)i + 25) )
  {
    for ( i = (__int64 *)v1[1]; !*((_BYTE *)i + 25) && v1 == (__int64 *)i[2]; i = (__int64 *)i[1] )
    {
      *a1 = i;
      v1 = i;
    }
  }
  else
  {
    v4 = (__int64 *)*i;
    if ( !*(_BYTE *)(*i + 25) )
    {
      do
      {
        i = v4;
        v4 = (__int64 *)*v4;
      }
      while ( !*((_BYTE *)v4 + 25) );
    }
  }
  *a1 = i;
  return a1;
}
