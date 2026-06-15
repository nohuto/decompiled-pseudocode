/*
 * XREFs of sub_1800BB260 @ 0x1800BB260
 * Callers:
 *     sub_1800B838C @ 0x1800B838C (sub_1800B838C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 (*sub_1800BB260())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_18019FA28;
  if ( qword_18019FA28 )
    return (__int64 (*)(void))result();
  result = (__int64 (*)(void))qword_18019FA20;
  if ( qword_18019FA20 )
    return (__int64 (*)(void))result();
  return result;
}
