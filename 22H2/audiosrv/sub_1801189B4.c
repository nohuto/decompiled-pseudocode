/*
 * XREFs of sub_1801189B4 @ 0x1801189B4
 * Callers:
 *     sub_18013E380 @ 0x18013E380 (sub_18013E380.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1801189B4(_QWORD *a1, void (__fastcall ***a2)(_QWORD, void *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &unk_18015B040, a1);
  return a1;
}
