/*
 * XREFs of sub_1800045C4 @ 0x1800045C4
 * Callers:
 *     sub_180007930 @ 0x180007930 (sub_180007930.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800D5648 @ 0x1800D5648 (sub_1800D5648.c)
 */

BOOL __fastcall sub_1800045C4(__int64 a1)
{
  void *v2; // rax
  BOOL result; // eax
  unsigned int v4; // ebx

  v2 = (void *)o_malloc(40LL);
  *(_QWORD *)(a1 + 8) = v2;
  if ( !v2 )
    sub_1800B8610(2147942414LL);
  result = InitializeSecurityDescriptor(v2, 1u);
  if ( !result )
  {
    v4 = sub_1800D5648();
    _o_free(*(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = 0LL;
    sub_1800B8610(v4);
  }
  return result;
}
