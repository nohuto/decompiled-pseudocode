/*
 * XREFs of sub_180034618 @ 0x180034618
 * Callers:
 *     sub_180033E20 @ 0x180033E20 (sub_180033E20.c)
 *     sub_18006D078 @ 0x18006D078 (sub_18006D078.c)
 *     sub_1800BA2A0 @ 0x1800BA2A0 (sub_1800BA2A0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 (*sub_180034618())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_18019FA48;
  if ( qword_18019FA48 )
    return (__int64 (*)(void))result();
  result = (__int64 (*)(void))qword_18019F948;
  if ( qword_18019F948 )
    return (__int64 (*)(void))result();
  return result;
}
