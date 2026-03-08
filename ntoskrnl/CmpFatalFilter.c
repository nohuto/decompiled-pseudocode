/*
 * XREFs of CmpFatalFilter @ 0x140A14640
 * Callers:
 *     CmpQueryKeyName @ 0x1406BD190 (CmpQueryKeyName.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpFatalFilter(int **a1)
{
  KeBugCheckEx(0x51u, 0x21uLL, **a1, (ULONG_PTR)a1[1], 0LL);
}
