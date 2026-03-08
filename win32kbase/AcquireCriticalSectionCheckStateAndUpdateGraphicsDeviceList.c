/*
 * XREFs of AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00CE990
 * Callers:
 *     NtGdiCreateOPMProtectedOutput @ 0x1C01890C0 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C0189200 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiGetCertificate @ 0x1C01893C0 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1C0189670 (NtGdiGetCertificateSize.c)
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C0189910 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001FAC0 (DrvUpdateGraphicsDeviceList.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C0021420 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserIsWddmConnectedSession @ 0x1C0022420 (UserIsWddmConnectedSession.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00CE9E0 (AcquireCriticalSectionAndCheckState.c)
 *     SafeEnableMDEV @ 0x1C00D8A70 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00D8AC0 (SafeDisableMDEV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
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
      if ( qword_1C02D6BC0 )
        qword_1C02D6BC0();
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
