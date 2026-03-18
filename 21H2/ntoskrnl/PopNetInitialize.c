/*
 * XREFs of PopNetInitialize @ 0x140B02560
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     PopInitializeIRTimer @ 0x1403C0F20 (PopInitializeIRTimer.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     RtlLengthRequiredSid @ 0x14066A560 (RtlLengthRequiredSid.c)
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     RtlInitializeSid @ 0x14078DDC0 (RtlInitializeSid.c)
 *     PopTraceStandbyConnectivityUpdate @ 0x14085CDA0 (PopTraceStandbyConnectivityUpdate.c)
 *     PopNetPublishWnfStateUpdate @ 0x14085CEF8 (PopNetPublishWnfStateUpdate.c)
 *     PopNetSetConnectivityConstraint @ 0x140864194 (PopNetSetConnectivityConstraint.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
              (int)&IdentifierAuthority,
              (int)&WNF_SEB_SYSTEM_LPE,
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
      (__int64)&PopNetEvaluationTimer,
      (__int64)PopNetEvaluationTimerCallback,
      v7,
      (__int64)PopNetEvaluationWorkerCallback,
      v9,
      0,
      v11);
    PopInitializeIRTimer(
      (__int64)&PopNetRefreshTimer,
      (__int64)PopNetRefreshTimerCallback,
      v8,
      (__int64)PopNetRefreshTimerWorkerCallback,
      v10,
      5,
      v12);
  }
  return 0;
}
