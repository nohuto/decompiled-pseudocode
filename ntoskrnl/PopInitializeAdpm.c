/*
 * XREFs of PopInitializeAdpm @ 0x140B5DF58
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExSubscribeWnfStateChange @ 0x14078C4C0 (ExSubscribeWnfStateChange.c)
 *     PopExtendConnectionState @ 0x14082AC74 (PopExtendConnectionState.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B5DFE8 (PopAdaptiveInitializeBootContext.c)
 */

__int64 PopInitializeAdpm()
{
  __int64 result; // rax
  char v1; // [rsp+40h] [rbp+8h] BYREF

  ExInitializeResourceLite(&PopAdpmLock);
  memset(&PopAdaptiveContext, 0, 0x50uLL);
  dword_140C398D8 = -1;
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  dword_140C398DC = 3;
  PopExtendConnectionState(0);
  result = ExSubscribeWnfStateChange(
             (__int64)&v1,
             (__int64)&WNF_HPM_GLOBAL_HUMAN_PRESENCE_STATE,
             1,
             0,
             (__int64)PopAdaptiveWnfCallback,
             0LL);
  if ( !CmNtSkipRegistryInit )
    return PopAdaptiveInitializeBootContext();
  return result;
}
