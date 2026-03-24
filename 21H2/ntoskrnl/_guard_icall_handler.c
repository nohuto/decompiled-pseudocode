/*
 * XREFs of _guard_icall_handler @ 0x140408530
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn guard_icall_handler(__int64 a1, __int64 a2, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x139u, 0LL, 0LL, 0LL, BugCheckParameter4);
}
