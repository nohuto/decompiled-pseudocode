/*
 * XREFs of PopNetInitialize @ 0x140A3EBF8
 * Callers:
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 * Callees:
 *     PopInitializeIRTimer @ 0x1403A91B0 (PopInitializeIRTimer.c)
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140413800 (memset.c)
 *     RtlLengthRequiredSid @ 0x1405DC260 (RtlLengthRequiredSid.c)
 *     ExSubscribeWnfStateChange @ 0x140694970 (ExSubscribeWnfStateChange.c)
 *     RtlInitializeSid @ 0x140718B40 (RtlInitializeSid.c)
 *     PopNetSetConnectivityConstraint @ 0x140791690 (PopNetSetConnectivityConstraint.c)
 *     PopTraceStandbyConnectivityUpdate @ 0x1407CD2B0 (PopTraceStandbyConnectivityUpdate.c)
 *     PopNetPublishWnfStateUpdate @ 0x1407CD408 (PopNetPublishWnfStateUpdate.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopNetInitialize(int a1)
{
  int v1; // ecx
  NTSTATUS v2; // edi
  _DWORD *v3; // rbx
  ULONG v5; // edi
  _DWORD *PoolWithTag; // rax
  __int64 v7; // r8
  __int64 v8; // r8
  int ExplicitScope; // [rsp+20h] [rbp-28h]
  int ExplicitScopea; // [rsp+20h] [rbp-28h]
  LOGICAL CheckStamp; // [rsp+30h] [rbp-18h]
  LOGICAL CheckStampa; // [rsp+30h] [rbp-18h]
  char Buffer; // [rsp+50h] [rbp+8h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp+10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  Buffer = 0;
  if ( a1 )
  {
    if ( a1 == 3 )
    {
      if ( PopNetDeferLogRequest )
        PopTraceStandbyConnectivityUpdate(PopNetStandbyState, PopNetStandbyReason);
      if ( PopEnforceDisconnectedStandby )
      {
        v1 = 2;
      }
      else
      {
        if ( PopNetStandbyStateMask )
        {
LABEL_10:
          ZwUpdateWnfStateData(&WNF_PO_OPPORTUNISTIC_CS, &Buffer, 1u, 0LL, 0LL, 0, 0);
          if ( PopPlatformAoAc && !PopEnforceDisconnectedStandby )
            ExSubscribeWnfStateChange(
              (__int64)&IdentifierAuthority,
              (__int64)&WNF_SEB_SYSTEM_LPE,
              1,
              0,
              (__int64)PopNetWnfLowPowerEpochCallback,
              0LL);
          goto LABEL_11;
        }
        if ( PopPlatformAoAc )
        {
          if ( !PopNetStandbyStatePublished && !PopNetStandbyState )
            PopNetPublishWnfStateUpdate(1);
          goto LABEL_10;
        }
        v1 = 6;
      }
      PopNetSetConnectivityConstraint(v1);
      goto LABEL_10;
    }
LABEL_11:
    v2 = 0;
    v3 = 0LL;
    goto LABEL_12;
  }
  v5 = RtlLengthRequiredSid(6u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x74654E50u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memset(PoolWithTag, 0, v5);
  v2 = RtlInitializeSid(v3, &IdentifierAuthority, 6u);
  if ( v2 >= 0 )
  {
    v3[2] = 80;
    v3[3] = 1988685059;
    v3[4] = 1921232356;
    v3[5] = 378231328;
    v3[6] = -1590824699;
    v3[7] = 890457928;
    PopNetBIServiceSid = v3;
    PopInitializeIRTimer(
      (__int64)&PopNetEvaluationTimer,
      (__int64)PopNetEvaluationTimerCallback,
      v7,
      (__int64)PopNetEvaluationWorkerCallback,
      ExplicitScope,
      0,
      CheckStamp);
    PopInitializeIRTimer(
      (__int64)&PopNetRefreshTimer,
      (__int64)PopNetRefreshTimerCallback,
      v8,
      (__int64)PopNetRefreshTimerWorkerCallback,
      ExplicitScopea,
      5,
      CheckStampa);
    goto LABEL_11;
  }
LABEL_12:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x74654E50u);
  return (unsigned int)v2;
}
