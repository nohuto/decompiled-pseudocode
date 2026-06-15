/*
 * XREFs of sub_180111C60 @ 0x180111C60
 * Callers:
 *     sub_18000DF70 @ 0x18000DF70 (sub_18000DF70.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180111C60(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax
  unsigned __int16 *v4; // rcx
  __int64 v5; // r8
  int v6; // r9d
  int v7; // edx

  for ( result = (_QWORD *)*a1; result; result = (_QWORD *)*result )
  {
    v4 = (unsigned __int16 *)result[2];
    v5 = a2 - (_QWORD)v4;
    do
    {
      v6 = *(unsigned __int16 *)((char *)v4 + v5);
      v7 = *v4 - v6;
      if ( v7 )
        break;
      ++v4;
    }
    while ( v6 );
    if ( !v7 )
      break;
  }
  return result;
}
