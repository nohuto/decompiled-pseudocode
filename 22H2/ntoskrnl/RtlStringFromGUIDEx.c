/*
 * XREFs of RtlStringFromGUIDEx @ 0x1406F35C8
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1403AA474 (BapdpMarshallBootDataToRegistry.c)
 *     KsepEvntLogShimsApplied @ 0x140526E6C (KsepEvntLogShimsApplied.c)
 *     PopSetNewPolicyValue @ 0x1406F34A0 (PopSetNewPolicyValue.c)
 *     RtlStringFromGUID @ 0x1406F35B0 (RtlStringFromGUID.c)
 *     PpDevCfgProcessDeviceClass @ 0x140730310 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x140730680 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x1407308D4 (PiDevCfgResetDeviceDriverSettings.c)
 *     IopCreateSecureDeviceClassSettings @ 0x140735DF8 (IopCreateSecureDeviceClassSettings.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140737538 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x14076B620 (PiDevCfgQueryDriverConfiguration.c)
 *     PipGenerateContainerID @ 0x14076DBF8 (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14077BD90 (PiDevCfgResolveVariableDeviceProperty.c)
 *     CmpStartRMLog @ 0x14077D3E4 (CmpStartRMLog.c)
 *     BcdOpenObject @ 0x140783940 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x1407840C0 (BcdGetElementDataWithFlags.c)
 *     BiConvertElementToRegistryData @ 0x140784A7C (BiConvertElementToRegistryData.c)
 *     IopUpdateSecureDeviceClassState @ 0x1407BDFF4 (IopUpdateSecureDeviceClassState.c)
 *     CmpRecoverEnlistment @ 0x140874EDC (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x140875224 (CmpAddRemoveRMLogContainer.c)
 *     VrpPreLoadKey @ 0x1408833DC (VrpPreLoadKey.c)
 *     IoGetDeviceDirectory @ 0x14089E860 (IoGetDeviceDirectory.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1408A9900 (PiDevCfgResolveVariableGenerateGuid.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140915818 (RtlpConstructCrossVmObjectPath.c)
 *     ExpCreateOutputSIGNATURE @ 0x14094FD9C (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateEfiPath @ 0x14095228C (ExpTranslateEfiPath.c)
 *     BiCreateObject @ 0x14096F018 (BiCreateObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140973384 (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x14097F058 (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x140A5B730 (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x1403D61F0 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x140685CE0 (ExpAllocateStringRoutine.c)
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
