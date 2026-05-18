/*
 * XREFs of sub_180067F80 @ 0x180067F80
 * Callers:
 *     sub_18003B600 @ 0x18003B600 (sub_18003B600.c)
 *     sub_1800D8EA8 @ 0x1800D8EA8 (sub_1800D8EA8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180067F80(_QWORD **a1, __int64 a2, __int64 a3)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  ((void (__fastcall *)(_QWORD **, __int64, __int64))(*a1)[31])(a1, a2, a3);
  return ((__int64 (__fastcall *)(_QWORD **))(*a1)[37])(a1);
}
