/*
 * XREFs of sub_18000428C @ 0x18000428C
 * Callers:
 *     sub_1800041A0 @ 0x1800041A0 (sub_1800041A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000428C(_WORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  v3 = 260LL;
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --v3;
  }
  while ( v3 );
  result = v3 == 0 ? 0x80070057 : 0;
  if ( a3 )
  {
    if ( v3 )
      *a3 = 260 - v3;
    else
      *a3 = 0LL;
  }
  return result;
}
