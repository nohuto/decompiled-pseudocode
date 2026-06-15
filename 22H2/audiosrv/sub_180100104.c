/*
 * XREFs of sub_180100104 @ 0x180100104
 * Callers:
 *     sub_18010393C @ 0x18010393C (sub_18010393C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180100104(_QWORD *a1, void (__fastcall ***a2)(_QWORD, const IID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &stru_18015C908, a1);
  return a1;
}
