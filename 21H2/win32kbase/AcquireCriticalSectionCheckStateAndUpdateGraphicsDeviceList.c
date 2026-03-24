/*
 * XREFs of AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00B4680
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C00BFA30 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00C0B50 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtGdiCreateOPMProtectedOutput @ 0x1C0140140 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiGetCertificate @ 0x1C01403D0 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1C0140530 (NtGdiGetCertificateSize.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C001D190 (UserRemoteConnectedSessionUsingXddm.c)
 *     UpdateGraphicsDeviceList @ 0x1C001DE68 (UpdateGraphicsDeviceList.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00B46E0 (AcquireCriticalSectionAndCheckState.c)
 */

__int64 AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList()
{
  __int64 result; // rax
  __int64 v1; // rdx
  int v2; // ebx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  result = AcquireCriticalSectionAndCheckState();
  v2 = result;
  if ( (int)result >= 0 )
  {
    v3 = 0;
    UpdateGraphicsDeviceList(&v3, v1);
    if ( v3 && gfSwitchInProgress )
    {
      v2 = -1071774232;
LABEL_8:
      UserSessionSwitchLeaveCrit();
      return (unsigned int)v2;
    }
    if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
      v2 = -1071774240;
    if ( v2 < 0 )
      goto LABEL_8;
    return 0LL;
  }
  return result;
}
