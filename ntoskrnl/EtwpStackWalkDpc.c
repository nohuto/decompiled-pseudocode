/*
 * XREFs of EtwpStackWalkDpc @ 0x1405FD990
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402331B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpQueueStackWalkApc @ 0x140460526 (EtwpQueueStackWalkApc.c)
 */

void __fastcall EtwpStackWalkDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        unsigned int *SystemArgument1,
        PVOID SystemArgument2)
{
  EtwpQueueStackWalkApc(
    *((_QWORD *)SystemArgument1 + 105),
    2u,
    SystemArgument1,
    0,
    (_SLIST_ENTRY **)SystemArgument1 + 104);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)SystemArgument1 + 137) + 448LL) + 8LL * *SystemArgument1),
    1u);
  _interlockedbittestandreset((volatile signed __int32 *)SystemArgument1 + 243, 1u);
}
