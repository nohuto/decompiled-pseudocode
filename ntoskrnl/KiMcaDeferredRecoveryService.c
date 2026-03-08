/*
 * XREFs of KiMcaDeferredRecoveryService @ 0x140422F50
 * Callers:
 *     KiScanQueues @ 0x14066B0A0 (KiScanQueues.c)
 *     KiSchedulerDpc @ 0x14066B0D0 (KiSchedulerDpc.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn KiMcaDeferredRecoveryService(
        ULONG BugCheckCode,
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h]

  retaddr = 0LL;
  KeBugCheckEx(BugCheckCode, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
