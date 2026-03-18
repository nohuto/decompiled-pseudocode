/*
 * XREFs of AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00BF7E0
 * Callers:
 *     NtGdiCreateOPMProtectedOutput @ 0x1C015C420 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C015C560 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiGetCertificate @ 0x1C015C720 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1C015C9D0 (NtGdiGetCertificateSize.c)
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C015CC70 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001CDB0 (DrvUpdateGraphicsDeviceList.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C001E410 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserIsWddmConnectedSession @ 0x1C001EFF0 (UserIsWddmConnectedSession.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00BF830 (AcquireCriticalSectionAndCheckState.c)
 *     SafeEnableMDEV @ 0x1C00CC6B0 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00CC700 (SafeDisableMDEV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx

  result = AcquireCriticalSectionAndCheckState();
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)UserIsWddmConnectedSession()
      && !(unsigned int)DrvUpdateGraphicsDeviceList(0)
      && (unsigned int)SafeDisableMDEV(1LL) )
    {
      DrvUpdateGraphicsDeviceList(1);
      SafeEnableMDEV(1LL);
      if ( qword_1C0295A48 )
        qword_1C0295A48();
      if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
      {
        v5 = -1071774232;
LABEL_12:
        UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
        return v5;
      }
    }
    result = UserRemoteConnectedSessionUsingXddm();
    if ( (_DWORD)result )
    {
      v5 = -1071774240;
      goto LABEL_12;
    }
  }
  return result;
}
