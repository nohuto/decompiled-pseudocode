/*
 * XREFs of HvlpVtlCallExceptionHandler @ 0x140547458
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall __noreturn HvlpVtlCallExceptionHandler(ULONG_PTR *a1)
{
  KeBugCheckEx(0x1Eu, *(int *)a1, a1[2], a1[4], a1[5]);
}
