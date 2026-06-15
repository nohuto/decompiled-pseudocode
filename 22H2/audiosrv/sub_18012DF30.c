/*
 * XREFs of sub_18012DF30 @ 0x18012DF30
 * Callers:
 *     sub_18011A3A4 @ 0x18011A3A4 (sub_18011A3A4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18012DF30(_QWORD *a1, int a2, __int64 a3)
{
  unsigned int v3; // r9d
  _QWORD *v4; // r10
  __int64 v5; // rax
  __int64 result; // rax

  v3 = 0;
  while ( 1 )
  {
    v4 = &qword_18019D7B0[2 * v3];
    v5 = *v4 - *a1;
    if ( *v4 == *a1 )
      v5 = v4[1] - a1[1];
    if ( !v5 )
      break;
    if ( ++v3 >= 9 )
      return 2147943568LL;
  }
  *(_DWORD *)(a3 + 16) = v3 + (a2 != 0 ? 602 : 2);
  result = 0LL;
  *(_OWORD *)a3 = xmmword_1801601C0;
  return result;
}
