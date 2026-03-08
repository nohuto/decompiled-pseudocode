/*
 * XREFs of NtUserSignalRedirectionStartComplete @ 0x1C00F4900
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRedirectionEvent @ 0x1C00F4978 (GreGetRedirectionEvent.c)
 */

unsigned __int64 NtUserSignalRedirectionStartComplete()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 CurrentProcess; // rax
  void *RedirectionEvent; // rax
  NTSTATUS v5; // ebx

  GreLockDwmState();
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) && (RedirectionEvent = (void *)GreGetRedirectionEvent()) != 0LL )
    v5 = ZwSetEvent(RedirectionEvent, 0LL);
  else
    v5 = -1073741790;
  GreUnlockDwmState();
  return (unsigned __int64)(unsigned int)~v5 >> 31;
}
