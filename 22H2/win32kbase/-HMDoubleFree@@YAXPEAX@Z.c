/*
 * XREFs of ?HMDoubleFree@@YAXPEAX@Z @ 0x1C0113CA0
 * Callers:
 *     HMFreeObject @ 0x1C0009390 (HMFreeObject.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn HMDoubleFree(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0x137u, 0LL, BugCheckParameter2, 0LL, 0LL);
}
