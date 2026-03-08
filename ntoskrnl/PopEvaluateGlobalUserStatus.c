/*
 * XREFs of PopEvaluateGlobalUserStatus @ 0x14073CA7C
 * Callers:
 *     PopSetSessionUserStatus @ 0x14073C8E4 (PopSetSessionUserStatus.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     PopUserPresentOverride @ 0x140998B50 (PopUserPresentOverride.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1402BD1D0 (PopUmpoSendPowerMessage.c)
 *     PopPrintEx @ 0x1402BDCD4 (PopPrintEx.c)
 *     RtlNumberOfSetBits @ 0x14035C520 (RtlNumberOfSetBits.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopSetPowerSettingValueAcDc @ 0x14073BE70 (PopSetPowerSettingValueAcDc.c)
 *     PopPrintUserActivityPresence @ 0x14073C9D8 (PopPrintUserActivityPresence.c)
 *     PopDiagTraceSessionStateCounted @ 0x14079C390 (PopDiagTraceSessionStateCounted.c)
 */

void PopEvaluateGlobalUserStatus()
{
  unsigned int v0; // ebx
  const wchar_t *v1; // rax
  int v2; // r9d
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD Src[20]; // [rsp+40h] [rbp+7h] BYREF
  unsigned int v6; // [rsp+A0h] [rbp+67h] BYREF
  int v7; // [rsp+A8h] [rbp+6Fh] BYREF
  int v8; // [rsp+ACh] [rbp+73h]

  v0 = PopHostGlobalUserPresenceState;
  if ( PopHostGlobalUserPresenceState == 3 )
  {
    if ( PopUserPresentOverrideCount || !PopMaximumConnectionSessions )
      v0 = 0;
    else
      v0 = RtlNumberOfSetBits(&PopConnectionBitmap) == 0 ? 2 : 0;
  }
  if ( v0 != PopGlobalUserPresenceState )
  {
    v6 = v0;
    ++PopGlobalUserPresenceStateTransitions;
    PopGlobalUserPresenceState = v0;
    v1 = PopPrintUserActivityPresence(v0);
    PopPrintEx(3LL, (__int64)"PopAdaptive: Global user presence/activity state: %S id: %I32u\n", v1, v2);
    PopDiagTraceSessionStateCounted(v4, v3, v0);
    PopSetPowerSettingValueAcDc(&GUID_GLOBAL_USER_PRESENCE, 4u, &v6);
    if ( v0 )
    {
      v7 = 1;
      memset(Src, 0, 0x48uLL);
      Src[2] = 1;
    }
    else
    {
      v7 = 0;
      memset(Src, 0, 0x48uLL);
      Src[2] = 0;
    }
    Src[0] = 12;
    PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
    v8 = PopGlobalUserPresenceStateTransitions;
    ZwUpdateWnfStateData((__int64)&WNF_PO_SLEEP_STUDY_USER_PRESENCE_CHANGED, (__int64)&v7);
  }
}
