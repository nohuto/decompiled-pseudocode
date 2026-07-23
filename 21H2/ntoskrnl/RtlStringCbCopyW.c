/*
 * XREFs of RtlStringCbCopyW @ 0x140252F68
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x1402457A8 (RtlpAllowsLowBoxAccess.c)
 *     SeSetLearningModeObjectInformation @ 0x14026A920 (SeSetLearningModeObjectInformation.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1403A87CC (RtlpGetNameFromLangInfoNode.c)
 *     PopIdleWakeFinalizeWakeSource @ 0x14057B6B8 (PopIdleWakeFinalizeWakeSource.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1405D09D0 (EtwTimLogRedirectionTrustPolicy.c)
 *     WmipEnumerateMofResources @ 0x1406067B0 (WmipEnumerateMofResources.c)
 *     PnpAllocatePWSTR @ 0x14062CF38 (PnpAllocatePWSTR.c)
 *     WmipInsertStaticNames @ 0x14062DC80 (WmipInsertStaticNames.c)
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1406FD420 (PiDcHandleCustomDeviceEvent.c)
 *     PiSwFindSwDevice @ 0x1407390A4 (PiSwFindSwDevice.c)
 *     PiSwIrpInterfaceRegister @ 0x14074D2D8 (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x14074D850 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x14074DD78 (PiSwIrpStartCreateWorker.c)
 *     PipMakeGloballyUniqueId @ 0x14076C5C0 (PipMakeGloballyUniqueId.c)
 *     WmipAddMofResource @ 0x1407BEAAC (WmipAddMofResource.c)
 *     PfSnParametersRead @ 0x1407BF810 (PfSnParametersRead.c)
 *     WmipGenerateBinaryMofNotification @ 0x1407D12DC (WmipGenerateBinaryMofNotification.c)
 *     DbgkSendSystemDllMessages @ 0x14088463C (DbgkSendSystemDllMessages.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A37D0 (PiDcResetChildDeviceContainerCallback.c)
 *     WmipIncludeStaticNames @ 0x14093293C (WmipIncludeStaticNames.c)
 *     ExpressionConvertToString @ 0x14097F9F0 (ExpressionConvertToString.c)
 *     MfgInitSystem @ 0x140A74924 (MfgInitSystem.c)
 *     ViMakeVerifierSettings @ 0x140A94B90 (ViMakeVerifierSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // rdx
  NTSTATUS v4; // r9d
  size_t v5; // r10
  signed __int64 v6; // r8
  wchar_t v7; // ax
  NTSTRSAFE_PWSTR v8; // rax

  v3 = cbDest >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    if ( v3 )
    {
      v5 = 2147483646 - v3;
      v6 = (char *)pszSrc - (char *)pszDest;
      do
      {
        if ( !(v5 + v3) )
          break;
        v7 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v6);
        if ( !v7 )
          break;
        *pszDest++ = v7;
        --v3;
      }
      while ( v3 );
    }
    v8 = pszDest - 1;
    if ( v3 )
      v8 = pszDest;
    v4 = v3 == 0 ? 0x80000005 : 0;
    *v8 = 0;
  }
  return v4;
}
