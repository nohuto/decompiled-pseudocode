/*
 * XREFs of PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140775580
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140776C08 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorStartNextSession @ 0x1407756F4 (PopPowerAggregatorStartNextSession.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140776AA8 (PopPowerAggregatorSetCurrentState.c)
 */

__int64 __fastcall PopPowerAggregatorSystemTransitionEnterStateHandler(__int64 a1)
{
  int v1; // eax
  int v4; // eax
  int v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+24h] [rbp-24h]
  int v7; // [rsp+34h] [rbp-14h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  v1 = *(_DWORD *)(a1 + 72);
  if ( (v1 & 0xFFFFFFFC) != 0 || v1 == 1 )
  {
    v4 = *(_DWORD *)(a1 + 88);
    if ( v4 >= 0 && (v4 <= 2 || v4 == 4) )
    {
      PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
      if ( qword_140C543E0 )
        qword_140C543E0(1LL);
      PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
      KeSetEvent((PRKEVENT)(a1 + 280), 0, 0);
      PopPowerAggregatorStartNextSession(3LL, *(unsigned int *)(a1 + 76));
      *(_DWORD *)(a1 + 88) = 3;
    }
  }
  else
  {
    v8 = 0LL;
    v5 = 5;
    v6 = 0LL;
    v7 = 3;
    PopPowerAggregatorSetCurrentState(a1, &v5);
  }
  return 0LL;
}
