/*
 * XREFs of sub_180105614 @ 0x180105614
 * Callers:
 *     sub_180108708 @ 0x180108708 (sub_180108708.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 */

_DWORD *__fastcall sub_180105614(_QWORD *a1, __int64 a2)
{
  _DWORD *result; // rax

  result = sub_180055F40(0x18uLL);
  if ( result )
  {
    result[2] = 1;
    result[3] = 1;
    *(_QWORD *)result = off_180155800;
    *((_QWORD *)result + 2) = a2;
  }
  *a1 = a2;
  a1[1] = result;
  return result;
}
