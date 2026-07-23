/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x140611A40
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExpCaptureWnfStateName @ 0x14060F7A4 (ExpCaptureWnfStateName.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x140611AFC (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeleteSubscription @ 0x140613588 (ExpWnfDeleteSubscription.c)
 */

NTSTATUS __cdecl NtUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v2; // rdx
  NTSTATUS v4; // [rsp+24h] [rbp-14h]
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  P = 0LL;
  v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ExpCaptureWnfStateName((__int64 *)StateName, &v5, KeGetCurrentThread()->PreviousMode);
  if ( v4 >= 0 )
  {
    v2 = KeGetCurrentThread()->ApcState.Process[1].EndPadding[7];
    if ( v2 )
    {
      v4 = ExpWnfAcquireSubscriptionByName(v5, v2, &P);
      if ( v4 >= 0 )
      {
        ExpWnfDeleteSubscription(P);
        v4 = 0;
      }
    }
    else
    {
      v4 = -1073741772;
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
