/*
 * XREFs of RtlStringFromGUIDEx @ 0x14066DF18
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1403AF7C4 (BapdpMarshallBootDataToRegistry.c)
 *     KsepEvntLogShimsApplied @ 0x14052716C (KsepEvntLogShimsApplied.c)
 *     PopSetNewPolicyValue @ 0x14066DDF0 (PopSetNewPolicyValue.c)
 *     RtlStringFromGUID @ 0x14066DF00 (RtlStringFromGUID.c)
 *     PpDevCfgProcessDeviceClass @ 0x140730028 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x140730398 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x1407305EC (PiDevCfgResetDeviceDriverSettings.c)
 *     IopCreateSecureDeviceClassSettings @ 0x140739B10 (IopCreateSecureDeviceClassSettings.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073B250 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x14076C014 (PiDevCfgQueryDriverConfiguration.c)
 *     PipGenerateContainerID @ 0x14076E6E8 (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14077C050 (PiDevCfgResolveVariableDeviceProperty.c)
 *     CmpStartRMLog @ 0x14077D6A4 (CmpStartRMLog.c)
 *     BcdOpenObject @ 0x140783C00 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x140784380 (BcdGetElementDataWithFlags.c)
 *     BiConvertElementToRegistryData @ 0x140784D3C (BiConvertElementToRegistryData.c)
 *     IopUpdateSecureDeviceClassState @ 0x1407BDFC4 (IopUpdateSecureDeviceClassState.c)
 *     CmpRecoverEnlistment @ 0x140874FEC (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x140875334 (CmpAddRemoveRMLogContainer.c)
 *     VrpPreLoadKey @ 0x1408834EC (VrpPreLoadKey.c)
 *     IoGetDeviceDirectory @ 0x14089E970 (IoGetDeviceDirectory.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1408A9A10 (PiDevCfgResolveVariableGenerateGuid.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140915928 (RtlpConstructCrossVmObjectPath.c)
 *     ExpCreateOutputSIGNATURE @ 0x14094FF1C (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateEfiPath @ 0x14095240C (ExpTranslateEfiPath.c)
 *     BiCreateObject @ 0x14096F1A8 (BiCreateObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140973514 (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x14097F1E8 (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x140A5C730 (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x1403D6A60 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x1406006F0 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __cdecl RtlStringFromGUIDEx(PGUID Guid, PUNICODE_STRING GuidString, BOOLEAN AllocateGuidString)
{
  wchar_t *StringRoutine; // rax
  unsigned __int16 MaximumLength; // dx

  if ( AllocateGuidString )
  {
    GuidString->MaximumLength = 78;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(0x4EuLL);
    GuidString->Buffer = StringRoutine;
    if ( StringRoutine )
    {
      MaximumLength = GuidString->MaximumLength;
LABEL_4:
      GuidString->Length = 76;
      swprintf_s(
        GuidString->Buffer,
        (unsigned __int64)MaximumLength >> 1,
        L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        Guid->Data1,
        Guid->Data2,
        Guid->Data3,
        Guid->Data4[0],
        Guid->Data4[1],
        Guid->Data4[2],
        Guid->Data4[3],
        Guid->Data4[4],
        Guid->Data4[5],
        Guid->Data4[6],
        Guid->Data4[7]);
      return 0;
    }
    return -1073741801;
  }
  else
  {
    MaximumLength = GuidString->MaximumLength;
    if ( MaximumLength >= 0x4Eu )
      goto LABEL_4;
    return -1073741789;
  }
}
