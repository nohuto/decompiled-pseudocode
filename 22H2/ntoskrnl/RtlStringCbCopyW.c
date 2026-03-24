/*
 * XREFs of RtlStringCbCopyW @ 0x14032E038
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x1403204C8 (RtlpAllowsLowBoxAccess.c)
 *     SeSetLearningModeObjectInformation @ 0x140345990 (SeSetLearningModeObjectInformation.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1403A7F7C (RtlpGetNameFromLangInfoNode.c)
 *     PopIdleWakeFinalizeWakeSource @ 0x14057B3B8 (PopIdleWakeFinalizeWakeSource.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1405D09D0 (EtwTimLogRedirectionTrustPolicy.c)
 *     WmipEnumerateMofResources @ 0x14068B7E0 (WmipEnumerateMofResources.c)
 *     PnpAllocatePWSTR @ 0x1406B0F08 (PnpAllocatePWSTR.c)
 *     WmipInsertStaticNames @ 0x1406B1C50 (WmipInsertStaticNames.c)
 *     PopPowerInformationInternal @ 0x1406F1BE4 (PopPowerInformationInternal.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14071B508 (PiDcHandleCustomDeviceEvent.c)
 *     PiSwFindSwDevice @ 0x14074BD68 (PiSwFindSwDevice.c)
 *     PiSwIrpStartCreateWorker @ 0x14074CF08 (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x14074DC58 (PiSwCompleteCreate.c)
 *     PipMakeGloballyUniqueId @ 0x14076BBCC (PipMakeGloballyUniqueId.c)
 *     PiSwIrpInterfaceRegister @ 0x14076E344 (PiSwIrpInterfaceRegister.c)
 *     WmipAddMofResource @ 0x1407BEADC (WmipAddMofResource.c)
 *     PfSnParametersRead @ 0x1407BFAB4 (PfSnParametersRead.c)
 *     WmipGenerateBinaryMofNotification @ 0x1407D108C (WmipGenerateBinaryMofNotification.c)
 *     DbgkSendSystemDllMessages @ 0x14088452C (DbgkSendSystemDllMessages.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408A36C0 (PiDcResetChildDeviceContainerCallback.c)
 *     WmipIncludeStaticNames @ 0x14093282C (WmipIncludeStaticNames.c)
 *     ExpressionConvertToString @ 0x14097F860 (ExpressionConvertToString.c)
 *     MfgInitSystem @ 0x140A73924 (MfgInitSystem.c)
 *     ViMakeVerifierSettings @ 0x140A93B90 (ViMakeVerifierSettings.c)
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
