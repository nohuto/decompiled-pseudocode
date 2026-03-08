/*
 * XREFs of ?HMDoubleFree@@YAXPEAX@Z @ 0x1C0153630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall __noreturn HMDoubleFree(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0x164u, 0x1BuLL, BugCheckParameter2, 0LL, 0LL);
}
