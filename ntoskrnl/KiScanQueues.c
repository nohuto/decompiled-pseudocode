/*
 * XREFs of KiScanQueues @ 0x14066B0A0
 * Callers:
 *     <none>
 * Callees:
 *     KiMcaDeferredRecoveryService @ 0x140422F50 (KiMcaDeferredRecoveryService.c)
 */

void __fastcall __noreturn KiScanQueues(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KiMcaDeferredRecoveryService(
    *((_DWORD *)DeferredContext + 16),
    *((_QWORD *)DeferredContext + 9),
    *((_QWORD *)DeferredContext + 10),
    *((_QWORD *)DeferredContext + 11),
    *((_QWORD *)DeferredContext + 12));
}
