/*
 * XREFs of CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x1404195A0
 * Callers:
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x14041951C (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushTimerDpc @ 0x140419600 (CmFcpManagerArmFeatureUsageProviderFlushTimerDpc.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B3B6E8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExSetTimer @ 0x14031DC10 (ExSetTimer.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

_BOOL8 __fastcall CmFcpManagerArmFeatureUsageProviderFlushTimer(__int64 a1)
{
  ULONG_PTR v1; // rcx
  _BOOL8 result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 1488);
  if ( v1 )
  {
    v3[0] = 0LL;
    v3[1] = -1LL;
    return ExSetTimer(v1, -3000000000LL, 0LL, (__int64)v3);
  }
  return result;
}
