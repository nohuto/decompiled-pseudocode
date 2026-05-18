/*
 * XREFs of sub_180068198 @ 0x180068198
 * Callers:
 *     sub_1800928C0 @ 0x1800928C0 (sub_1800928C0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180068198(_QWORD **a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  ((void (__fastcall *)(_QWORD **, _QWORD, _QWORD, _QWORD))(*a1)[26])(a1, a2, a3, a4);
  return ((__int64 (__fastcall *)(_QWORD **))(*a1)[37])(a1);
}
