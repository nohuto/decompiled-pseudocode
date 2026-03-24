/*
 * XREFs of CmpFatalFilter @ 0x14086EEE0
 * Callers:
 *     CmpQueryKeyName @ 0x1406E0380 (CmpQueryKeyName.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpFatalFilter(int **a1)
{
  KeBugCheckEx(0x51u, 0x21uLL, **a1, (ULONG_PTR)a1[1], 0LL);
}
