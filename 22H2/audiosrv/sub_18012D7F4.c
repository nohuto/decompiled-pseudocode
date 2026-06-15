/*
 * XREFs of sub_18012D7F4 @ 0x18012D7F4
 * Callers:
 *     sub_1800755E2 @ 0x1800755E2 (sub_1800755E2.c)
 * Callees:
 *     sub_18012DC50 @ 0x18012DC50 (sub_18012DC50.c)
 */

char *__fastcall sub_18012D7F4(_BYTE *a1)
{
  char *v2; // rcx
  char *result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    v2 = *(char **)(*(_QWORD *)a1 + 88LL);
    result = v2 - 1;
    if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      WaitForSingleObjectEx(v2, 0xFFFFFFFF, 0);
      sub_18012DC50(*(_QWORD *)a1 + 88LL, 0LL);
      result = *(char **)a1;
      *(_DWORD *)(*(_QWORD *)a1 + 96LL) = 0;
    }
  }
  return result;
}
