/*
 * XREFs of sub_180053724 @ 0x180053724
 * Callers:
 *     sub_18005369C @ 0x18005369C (sub_18005369C.c)
 *     sub_1800C2ED0 @ 0x1800C2ED0 (sub_1800C2ED0.c)
 *     sub_1800CE248 @ 0x1800CE248 (sub_1800CE248.c)
 * Callees:
 *     sub_1800689C8 @ 0x1800689C8 (sub_1800689C8.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

unsigned __int64 __fastcall sub_180053724(_QWORD *a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 result; // rax

  v1 = a1[1];
  if ( v1 >= a1[2] && !(unsigned __int8)sub_1800689C8(a1, v1 + 1) )
    sub_1800B8610(2147942414LL);
  result = v1;
  *(_DWORD *)(*a1 + 4 * v1) = 1;
  ++a1[1];
  return result;
}
