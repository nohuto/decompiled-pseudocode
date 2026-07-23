/*
 * XREFs of PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408EE950
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140776368 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorStartNextSession @ 0x140774E54 (PopPowerAggregatorStartNextSession.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140776208 (PopPowerAggregatorSetCurrentState.c)
 *     PopDirectedDripsNotify @ 0x14078DCD8 (PopDirectedDripsNotify.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x1408EE2F0 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 *     PopPowerAggregatorLockAcquire @ 0x1408EE654 (PopPowerAggregatorLockAcquire.c)
 *     PopPowerAggregatorLockRelease @ 0x1408EE670 (PopPowerAggregatorLockRelease.c)
 *     PopDripsWatchdogNotifySessionStart @ 0x1408EF5B0 (PopDripsWatchdogNotifySessionStart.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffEnterStateHandler(__int64 a1)
{
  bool v1; // zf
  int v3; // eax
  __int64 v4; // xmm0_8
  __int64 v5; // r14
  unsigned __int8 v6; // r15
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  int v14; // [rsp+28h] [rbp-28h]
  _OWORD v15[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+70h] [rbp+20h] BYREF

  v1 = *(_DWORD *)(a1 + 72) == 3;
  memset(v15, 0, sizeof(v15));
  if ( v1 )
  {
    v3 = *(_DWORD *)(a1 + 48);
    *((_QWORD *)&v15[1] + 1) = 0LL;
    DWORD1(v15[1]) = v3;
    *(_OWORD *)((char *)v15 + 4) = 0LL;
    LODWORD(v15[0]) = 4;
    PopPowerAggregatorSetCurrentState(a1, (__int64)v15);
    return 0LL;
  }
  if ( *(_QWORD *)(a1 + 40) != *(_QWORD *)(a1 + 80) )
  {
    DWORD1(v15[1]) = *(_DWORD *)(a1 + 48);
    BYTE8(v15[1]) = *(_BYTE *)(a1 + 96);
    HIDWORD(v15[1]) = *(_DWORD *)(a1 + 100);
    LODWORD(v15[0]) = 4;
    PopPowerAggregatorSetCurrentState(a1, (__int64)v15);
    PopPowerAggregatorStartNextSession(1u, *(_DWORD *)(a1 + 32));
    return 0LL;
  }
  v4 = *(_QWORD *)(a1 + 52);
  v5 = *(int *)(a1 + 92);
  v6 = *(_BYTE *)(a1 + 65);
  v14 = *(_DWORD *)(a1 + 60);
  v7 = *(_DWORD *)(a1 + 88);
  v13 = v4;
  if ( v7 < 0 )
    return 0LL;
  if ( v7 > 1 )
  {
    if ( v7 == 2 )
      goto LABEL_13;
    v8 = v5;
    if ( v7 == 3 )
    {
LABEL_16:
      v10 = *(_DWORD *)(a1 + 100);
      *((_QWORD *)&v15[1] + 1) = 0LL;
      DWORD1(v15[1]) = v8;
      *(_OWORD *)((char *)v15 + 4) = 0LL;
      LODWORD(v15[0]) = 1;
      PopPowerAggregatorSetCurrentState(a1, (__int64)v15);
      PopPowerAggregatorStartNextSession(2u, *(_DWORD *)(a1 + 76));
      PopPowerAggregatorLockRelease();
      LOBYTE(v11) = v6;
      PopDripsWatchdogNotifySessionStart(v11);
      v16 = v6;
      PopDirectedDripsNotify(6, (char *)&v16);
      PopPowerAggregatorEngageAggressiveStandbyActions(v5, (__int64)&v13);
      ((void (__fastcall *)(_QWORD))qword_140C54488)(v10);
      PopPowerAggregatorLockAcquire();
      return 0LL;
    }
    if ( v7 != 4 )
      return 0LL;
  }
  v9 = PopPowerAggregatorModernStandbyResourceMasks[v5];
  PopPowerAggregatorLockRelease();
  if ( qword_140C54458 )
    qword_140C54458(v9);
  PopPowerAggregatorLockAcquire();
  *(_DWORD *)(a1 + 88) = 2;
LABEL_13:
  if ( !*(_BYTE *)(a1 + 104) && *(_BYTE *)(a1 + 96) )
  {
    v8 = *(_DWORD *)(a1 + 92);
    *(_DWORD *)(a1 + 88) = 3;
    goto LABEL_16;
  }
  return 0LL;
}
