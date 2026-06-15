/*
 * XREFs of sub_180038BCC @ 0x180038BCC
 * Callers:
 *     sub_180038C20 @ 0x180038C20 (sub_180038C20.c)
 *     sub_180137A98 @ 0x180137A98 (sub_180137A98.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 */

_QWORD *__fastcall sub_180038BCC(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  SIZE_T v4; // rcx
  _QWORD *v5; // rax
  _QWORD *result; // rax

  v3 = a2;
  v4 = 8 * a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    v4 = -1LL;
  v5 = sub_180008EAC(v4);
  *a1 = v5;
  a1[1] = v5;
  result = &v5[v3];
  a1[2] = result;
  return result;
}
