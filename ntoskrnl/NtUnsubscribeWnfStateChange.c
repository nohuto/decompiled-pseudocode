/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x14071D2B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExpCaptureWnfStateName @ 0x14071A22C (ExpCaptureWnfStateName.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14071D36C (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeleteSubscription @ 0x14071D44C (ExpWnfDeleteSubscription.c)
 */

__int64 __fastcall NtUnsubscribeWnfStateChange(__int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v2; // rdx
  int v4; // [rsp+24h] [rbp-14h]
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  P = 0LL;
  v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ExpCaptureWnfStateName(a1, &v5, KeGetCurrentThread()->PreviousMode);
  if ( v4 >= 0 )
  {
    v2 = KeGetCurrentThread()->ApcState.Process[1].EndPadding[0];
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
  return (unsigned int)v4;
}
