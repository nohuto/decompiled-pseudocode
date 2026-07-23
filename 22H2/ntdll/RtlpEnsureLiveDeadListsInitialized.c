/*
 * XREFs of RtlpEnsureLiveDeadListsInitialized @ 0x1800DF7B0
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x1800DF848 (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800DF974 (RtlpPlaceActivationContextOnLiveList.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 */

NTSTATUS RtlpEnsureLiveDeadListsInitialized()
{
  NTSTATUS result; // eax

  if ( !g_SxsLiveActivationContexts )
  {
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    if ( !g_SxsLiveActivationContexts )
    {
      qword_18016D800 = (__int64)&g_SxsLiveActivationContexts;
      g_SxsLiveActivationContexts = (__int64)&g_SxsLiveActivationContexts;
      qword_18016D7F0 = (__int64)&g_SxsFreeActivationContexts;
      g_SxsFreeActivationContexts = (__int64)&g_SxsFreeActivationContexts;
    }
    return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  }
  return result;
}
