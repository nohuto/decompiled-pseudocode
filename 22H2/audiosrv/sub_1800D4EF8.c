/*
 * XREFs of sub_1800D4EF8 @ 0x1800D4EF8
 * Callers:
 *     sub_1800755F4 @ 0x1800755F4 (sub_1800755F4.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 */

__int64 __fastcall sub_1800D4EF8(_BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    sub_180033A70(*(void **)(*(_QWORD *)a1 + 8LL));
    result = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = 0LL;
  }
  return result;
}
