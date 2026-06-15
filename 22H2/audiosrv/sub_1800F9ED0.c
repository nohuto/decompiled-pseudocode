/*
 * XREFs of sub_1800F9ED0 @ 0x1800F9ED0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FD274 @ 0x1800FD274 (sub_1800FD274.c)
 *     sub_1800FFA24 @ 0x1800FFA24 (sub_1800FFA24.c)
 *     sub_1800FFAD8 @ 0x1800FFAD8 (sub_1800FFAD8.c)
 */

__int64 __fastcall sub_1800F9ED0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  LOBYTE(v5) = 0;
  sub_1800FFAD8(*(_QWORD *)(a1 + 8), &v5);
  v3 = *(_QWORD *)(a1 + 8);
  LOBYTE(v5) = 0;
  result = sub_1800FFA24(v3, &v5);
  if ( (int)result >= 0 )
  {
    if ( (_BYTE)v5 )
      return sub_1800FD274(*(_QWORD *)(a1 + 8));
  }
  return result;
}
