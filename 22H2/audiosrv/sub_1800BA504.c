/*
 * XREFs of sub_1800BA504 @ 0x1800BA504
 * Callers:
 *     sub_1800B8EE4 @ 0x1800B8EE4 (sub_1800B8EE4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB330 @ 0x1800BB330 (sub_1800BB330.c)
 */

__int64 sub_1800BA504()
{
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !qword_18019E3C8 || (result = qword_18019E3C8(0LL, 0LL, &v2), (int)result >= 0) )
  {
    sub_1800BB330(retaddr, 2442LL, "wil", 2147942974LL);
    __debugbreak();
  }
  return result;
}
