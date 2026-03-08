/*
 * XREFs of __asan_report_store8 @ 0x140564180
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall __noreturn _asan_report_store8(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  KeBugCheckEx(0x1F2u, BugCheckParameter1, 8uLL, retaddr, 0x180uLL);
}
