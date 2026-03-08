/*
 * XREFs of CmpMachineHiveCallbackFatalFilter @ 0x140A0CA8C
 * Callers:
 *     CmpMachineHiveLoadedWorkItem @ 0x14085D560 (CmpMachineHiveLoadedWorkItem.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpMachineHiveCallbackFatalFilter(int **a1, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x13Fu, **a1, (ULONG_PTR)a1[1], *(_QWORD *)(BugCheckParameter4 + 80), BugCheckParameter4);
}
