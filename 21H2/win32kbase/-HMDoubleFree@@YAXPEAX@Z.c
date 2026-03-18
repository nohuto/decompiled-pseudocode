/*
 * XREFs of ?HMDoubleFree@@YAXPEAX@Z @ 0x1C01413F0
 * Callers:
 *     HMFreeObject @ 0x1C004E3F0 (HMFreeObject.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn HMDoubleFree(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0x137u, 0LL, BugCheckParameter2, 0LL, 0LL);
}
