/*
 * XREFs of sub_18012E460 @ 0x18012E460
 * Callers:
 *     sub_18012E8D0 @ 0x18012E8D0 (sub_18012E8D0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18012E460(_QWORD *a1, void (__fastcall ***a2)(_QWORD, _DWORD *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &dword_18015BE10, a1);
  return a1;
}
