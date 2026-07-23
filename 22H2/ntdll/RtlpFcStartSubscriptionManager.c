/*
 * XREFs of RtlpFcStartSubscriptionManager @ 0x180044E7C
 * Callers:
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x180009518 (RtlpFcEnsureSubscriptionManagerStarted.c)
 * Callees:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800424AC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlQueryWnfStateData @ 0x180044F30 (RtlQueryWnfStateData.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 */

NTSTATUS RtlpFcStartSubscriptionManager()
{
  NTSTATUS result; // eax
  ULONG ChangeStamp; // [rsp+50h] [rbp-28h] BYREF
  _WNF_TYPE_ID TypeId; // [rsp+58h] [rbp-20h] BYREF

  TypeId = (_WNF_TYPE_ID)RtlpFcWnfTypeId;
  result = RtlQueryWnfStateData(
             &ChangeStamp,
             WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
             WinSqmCheckEscalationSetString,
             0LL,
             &TypeId);
  if ( result >= 0 )
    return RtlpSubscribeWnfStateChangeNotificationInternal(
             &qword_18016AC08,
             *(_QWORD *)&WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
             ChangeStamp,
             (int)&RtlpFcWnfCallback,
             (__int64)&RtlpFcProcessManager,
             0LL,
             0,
             4,
             17);
  return result;
}
