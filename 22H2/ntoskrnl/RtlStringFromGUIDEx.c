/*
 * XREFs of RtlStringFromGUIDEx @ 0x1406852B0
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x140373A58 (BapdpMarshallBootDataToRegistry.c)
 *     KsepEvntLogShimsApplied @ 0x1403AF0FC (KsepEvntLogShimsApplied.c)
 *     PipGenerateContainerID @ 0x1406850A8 (PipGenerateContainerID.c)
 *     RtlStringFromGUID @ 0x140685290 (RtlStringFromGUID.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     VrpPreLoadKey @ 0x14077A954 (VrpPreLoadKey.c)
 *     CmpRecoverEnlistment @ 0x1408017A8 (CmpRecoverEnlistment.c)
 *     BiCreateObject @ 0x14080581C (BiCreateObject.c)
 *     BcdGetElementDataWithFlags @ 0x14080723C (BcdGetElementDataWithFlags.c)
 *     BcdOpenObject @ 0x1408074C4 (BcdOpenObject.c)
 *     BiConvertElementToRegistryData @ 0x140808860 (BiConvertElementToRegistryData.c)
 *     PopSetNewPolicyValue @ 0x14082E04C (PopSetNewPolicyValue.c)
 *     IopUpdateSecureDeviceClassState @ 0x14083C688 (IopUpdateSecureDeviceClassState.c)
 *     IopCreateSecureDeviceClassSettings @ 0x14083C924 (IopCreateSecureDeviceClassSettings.c)
 *     ExpTranslateEfiPath @ 0x1408402B0 (ExpTranslateEfiPath.c)
 *     CmpStartRMLog @ 0x140873068 (CmpStartRMLog.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1408790C0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140879844 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14087A140 (PiDevCfgLogDeviceConfigured.c)
 *     IoGetDeviceDirectory @ 0x1409550C0 (IoGetDeviceDirectory.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14095FC00 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1409619C0 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PpDevCfgProcessDeviceClass @ 0x1409629AC (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14096346C (PpDevCfgProcessDeviceReset.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BDDA8 (RtlpConstructCrossVmObjectPath.c)
 *     ExpCreateOutputSIGNATURE @ 0x1409FC218 (ExpCreateOutputSIGNATURE.c)
 *     CmpCloneHwProfile @ 0x140A10264 (CmpCloneHwProfile.c)
 *     CmpAddRemoveRMLogContainer @ 0x140A1E900 (CmpAddRemoveRMLogContainer.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140A5F114 (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x140A6E164 (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x140B3D92C (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x1403DDD60 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x1407C7520 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlStringFromGUIDEx(unsigned int *a1, __int64 a2, char a3)
{
  __int64 StringRoutine; // rax
  unsigned __int64 v6; // rdx

  if ( a3 )
  {
    *(_WORD *)(a2 + 2) = 78;
    StringRoutine = ExpAllocateStringRoutine(78LL);
    *(_QWORD *)(a2 + 8) = StringRoutine;
    if ( StringRoutine )
    {
LABEL_3:
      v6 = *(unsigned __int16 *)(a2 + 2);
      *(_WORD *)a2 = 76;
      swprintf_s(
        *(wchar_t **)(a2 + 8),
        v6 >> 1,
        L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        *a1,
        *((unsigned __int16 *)a1 + 2),
        *((unsigned __int16 *)a1 + 3),
        *((unsigned __int8 *)a1 + 8),
        *((unsigned __int8 *)a1 + 9),
        *((unsigned __int8 *)a1 + 10),
        *((unsigned __int8 *)a1 + 11),
        *((unsigned __int8 *)a1 + 12),
        *((unsigned __int8 *)a1 + 13),
        *((unsigned __int8 *)a1 + 14),
        *((unsigned __int8 *)a1 + 15));
      return 0LL;
    }
    return 3221225495LL;
  }
  else
  {
    if ( *(_WORD *)(a2 + 2) >= 0x4Eu )
      goto LABEL_3;
    return 3221225507LL;
  }
}
