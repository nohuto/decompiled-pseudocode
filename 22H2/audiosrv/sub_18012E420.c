/*
 * XREFs of sub_18012E420 @ 0x18012E420
 * Callers:
 *     sub_18012E990 @ 0x18012E990 (sub_18012E990.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18012E420(_QWORD *a1, void (__fastcall ***a2)(_QWORD, __int64 *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &qword_18015C550, a1);
  return a1;
}
