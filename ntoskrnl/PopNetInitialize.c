/*
 * XREFs of PopNetInitialize @ 0x140B46E8C
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     PopInitializeIRTimer @ 0x140380C04 (PopInitializeIRTimer.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     RtlInitializeSid @ 0x14068E3A0 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x140782B90 (RtlLengthRequiredSid.c)
 *     ExSubscribeWnfStateChange @ 0x14078C4C0 (ExSubscribeWnfStateChange.c)
 *     PopNetPublishWnfStateUpdate @ 0x140857858 (PopNetPublishWnfStateUpdate.c)
 *     PopTraceStandbyConnectivityUpdate @ 0x1408578B8 (PopTraceStandbyConnectivityUpdate.c)
 *     PopNetSetConnectivityConstraint @ 0x140860708 (PopNetSetConnectivityConstraint.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopNetInitialize(int a1)
{
  int v1; // ecx
  NTSTATUS v2; // edi
  ULONG v4; // eax
  _DWORD *Pool2; // rax
  _DWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r8
  int v9; // [rsp+20h] [rbp-28h]
  int v10; // [rsp+20h] [rbp-28h]
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+30h] [rbp-18h]
  char v13; // [rsp+50h] [rbp+8h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp+10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v13 = 0;
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
          ZwUpdateWnfStateData((__int64)&WNF_PO_OPPORTUNISTIC_CS, (__int64)&v13);
          if ( PopPlatformAoAc && !PopEnforceDisconnectedStandby )
            ExSubscribeWnfStateChange(
              (__int64)&IdentifierAuthority,
              (__int64)&WNF_SEB_SYSTEM_LPE,
              1,
              0,
              (__int64)PopNetWnfLowPowerEpochCallback,
              0LL);
          return 0;
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
  }
  else
  {
    v4 = RtlLengthRequiredSid(6u);
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v4, 0x74654E50u);
    v6 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v2 = RtlInitializeSid(Pool2, &IdentifierAuthority, 6u);
    if ( v2 < 0 )
    {
      ExFreePoolWithTag(v6, 0x74654E50u);
      return (unsigned int)v2;
    }
    v6[2] = 80;
    v6[3] = 1988685059;
    v6[4] = 1921232356;
    v6[5] = 378231328;
    v6[6] = -1590824699;
    v6[7] = 890457928;
    PopNetBIServiceSid = (__int64)v6;
    PopInitializeIRTimer(
      (unsigned __int64)&PopNetEvaluationTimer,
      (__int64)PopNetEvaluationTimerCallback,
      v7,
      (__int64)PopNetEvaluationWorkerCallback,
      v9,
      0,
      v11);
    PopInitializeIRTimer(
      (unsigned __int64)&PopNetRefreshTimer,
      (__int64)PopNetRefreshTimerCallback,
      v8,
      (__int64)PopNetRefreshTimerWorkerCallback,
      v10,
      5,
      v12);
  }
  return 0;
}
