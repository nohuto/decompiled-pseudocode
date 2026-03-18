/*
 * XREFs of PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408091B0
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140808E28 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopExecutePowerAction @ 0x1407FEC6C (PopExecutePowerAction.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x1408091FC (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1409959F8 (PopPowerAggregatorEngageModernStandby.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffEnterStateHandler(__int64 a1)
{
  int v2; // ebx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  int v7; // [rsp+38h] [rbp-28h]
  unsigned int v8[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v9; // [rsp+48h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 56) == 3 || *(_QWORD *)(a1 + 32) != *(_QWORD *)(a1 + 64) )
  {
    PopPowerAggregatorEnterScreenOff();
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 88) && *(_BYTE *)(a1 + 72) )
  {
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      PopPowerAggregatorEngageModernStandby();
      return 0LL;
    }
    if ( *(_BYTE *)(a1 + 52) )
      return 0LL;
    v2 = *(_DWORD *)(a1 + 44);
    v6 = 0LL;
    v7 = 0;
    if ( v2 >= 2 )
    {
      if ( v2 <= 4 )
      {
        LODWORD(v6) = 2;
      }
      else if ( v2 == 5 )
      {
        v6 = 0x8000000400000003uLL;
LABEL_16:
        *(_BYTE *)(a1 + 52) = 1;
        v8[0] = 7;
        v9 = 0LL;
        v8[1] = 128;
        PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
        PopAcquirePolicyLock(v3);
        PopExecutePowerAction(v8, 0, &v6, v2, 1u);
        PopReleasePolicyLock(v5, v4);
        PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
        return 0LL;
      }
    }
    HIDWORD(v6) = -2147483644;
    goto LABEL_16;
  }
  return 0LL;
}
