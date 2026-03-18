/*
 * XREFs of AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C006A150
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C00CF370 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00D04B0 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtGdiCreateOPMProtectedOutput @ 0x1C016D080 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiGetCertificate @ 0x1C016D300 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1C016D460 (NtGdiGetCertificateSize.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C006A120 (AcquireCriticalSectionAndCheckState.c)
 *     UpdateGraphicsDeviceList @ 0x1C006A194 (UpdateGraphicsDeviceList.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C006F4B0 (UserRemoteConnectedSessionUsingXddm.c)
 */

__int64 AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  result = AcquireCriticalSectionAndCheckState();
  if ( (int)result >= 0 )
  {
    v6 = 0;
    UpdateGraphicsDeviceList(&v6);
    if ( v6 && gfSwitchInProgress )
    {
      v5 = -1071774232;
LABEL_8:
      UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
      return v5;
    }
    result = UserRemoteConnectedSessionUsingXddm();
    if ( (_DWORD)result )
    {
      v5 = -1071774240;
      goto LABEL_8;
    }
  }
  return result;
}
