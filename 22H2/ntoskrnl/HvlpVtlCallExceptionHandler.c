/*
 * XREFs of HvlpVtlCallExceptionHandler @ 0x1405498F8
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __fastcall __noreturn HvlpVtlCallExceptionHandler(ULONG_PTR *a1)
{
  KeBugCheckEx(0x1Eu, *(int *)a1, a1[2], a1[4], a1[5]);
}
