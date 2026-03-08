/*
 * XREFs of RtlStringCbCopyW @ 0x140244EC0
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x14039C6C4 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpAllowsLowBoxAccess @ 0x1403A70B0 (RtlpAllowsLowBoxAccess.c)
 *     PopIdleWakeFinalizeWakeSource @ 0x14059B218 (PopIdleWakeFinalizeWakeSource.c)
 *     SeSetLearningModeObjectInformation @ 0x1405B5FAC (SeSetLearningModeObjectInformation.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140688AC8 (PiDcHandleCustomDeviceEvent.c)
 *     WmipInsertStaticNames @ 0x14069E478 (WmipInsertStaticNames.c)
 *     PnpAllocatePWSTR @ 0x1406CD7F4 (PnpAllocatePWSTR.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     WmipEnumerateMofResources @ 0x140787950 (WmipEnumerateMofResources.c)
 *     PiSwIrpStartCreateWorker @ 0x140806A2C (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x1408071C4 (PiSwCompleteCreate.c)
 *     PiSwIrpInterfaceRegister @ 0x1408086D4 (PiSwIrpInterfaceRegister.c)
 *     WmipAddMofResource @ 0x1408199DC (WmipAddMofResource.c)
 *     PfSnParametersRead @ 0x140845198 (PfSnParametersRead.c)
 *     WmipGenerateBinaryMofNotification @ 0x14084FEDC (WmipGenerateBinaryMofNotification.c)
 *     PiSwFindSwDevice @ 0x14086740C (PiSwFindSwDevice.c)
 *     PipMakeGloballyUniqueId @ 0x14086E9D0 (PipMakeGloballyUniqueId.c)
 *     DbgkSendSystemDllMessages @ 0x140933E74 (DbgkSendSystemDllMessages.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1409582C0 (PiDcResetChildDeviceContainerCallback.c)
 *     WmipIncludeStaticNames @ 0x1409DDB94 (WmipIncludeStaticNames.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1409E7898 (EtwTimLogRedirectionTrustPolicy.c)
 *     ExpressionConvertToString @ 0x140A6BCC8 (ExpressionConvertToString.c)
 *     MfgInitSystem @ 0x140B71EB4 (MfgInitSystem.c)
 *     ViMakeVerifierSettings @ 0x140B940B4 (ViMakeVerifierSettings.c)
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
