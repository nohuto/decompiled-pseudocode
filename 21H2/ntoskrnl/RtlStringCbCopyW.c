/*
 * XREFs of RtlStringCbCopyW @ 0x1402E0978
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x140244198 (RtlpAllowsLowBoxAccess.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1403C624C (RtlpGetNameFromLangInfoNode.c)
 *     PopIdleWakeFinalizeWakeSource @ 0x1405DBB20 (PopIdleWakeFinalizeWakeSource.c)
 *     SeSetLearningModeObjectInformation @ 0x1405F43E0 (SeSetLearningModeObjectInformation.c)
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     PiSwIrpInterfaceRegister @ 0x14076308C (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x14076426C (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x140765DC0 (PiSwIrpStartCreateWorker.c)
 *     PiSwFindSwDevice @ 0x140767130 (PiSwFindSwDevice.c)
 *     PnpAllocatePWSTR @ 0x14077DE70 (PnpAllocatePWSTR.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14078C2F8 (PiDcHandleCustomDeviceEvent.c)
 *     WmipInsertStaticNames @ 0x14078CB04 (WmipInsertStaticNames.c)
 *     WmipEnumerateMofResources @ 0x14078D1A8 (WmipEnumerateMofResources.c)
 *     PipMakeGloballyUniqueId @ 0x14080E438 (PipMakeGloballyUniqueId.c)
 *     WmipAddMofResource @ 0x14084E03C (WmipAddMofResource.c)
 *     PfSnParametersRead @ 0x14084FF94 (PfSnParametersRead.c)
 *     DbgkSendSystemDllMessages @ 0x140927394 (DbgkSendSystemDllMessages.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140949470 (PiDcResetChildDeviceContainerCallback.c)
 *     WmipIncludeStaticNames @ 0x1409DD3C4 (WmipIncludeStaticNames.c)
 *     WmipGenerateBinaryMofNotification @ 0x1409DE4C4 (WmipGenerateBinaryMofNotification.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1409E7AD4 (EtwTimLogRedirectionTrustPolicy.c)
 *     ExpressionConvertToString @ 0x140A314B0 (ExpressionConvertToString.c)
 *     MfgInitSystem @ 0x140B30BB0 (MfgInitSystem.c)
 *     ViMakeVerifierSettings @ 0x140B53940 (ViMakeVerifierSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // rdx
  size_t v4; // r9
  signed __int64 v5; // r10
  wchar_t v6; // ax
  NTSTRSAFE_PWSTR v7; // rax
  NTSTATUS result; // eax

  v3 = cbDest >> 1;
  if ( v3 - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    v4 = 2147483646 - v3;
    v5 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v4 + v3) )
        break;
      v6 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v5);
      if ( !v6 )
        break;
      *pszDest++ = v6;
      --v3;
    }
    while ( v3 );
    v7 = pszDest - 1;
    if ( v3 )
      v7 = pszDest;
    *v7 = 0;
    return v3 == 0 ? 0x80000005 : 0;
  }
  return result;
}
