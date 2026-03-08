/*
 * XREFs of RtlStringFromGUIDEx @ 0x140733E90
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1403A5FC4 (BapdpMarshallBootDataToRegistry.c)
 *     KsepEvntLogShimsApplied @ 0x1403AA3AC (KsepEvntLogShimsApplied.c)
 *     CmpInitCmRM @ 0x1407334D4 (CmpInitCmRM.c)
 *     PipGenerateContainerID @ 0x140733C8C (PipGenerateContainerID.c)
 *     RtlStringFromGUID @ 0x140733E70 (RtlStringFromGUID.c)
 *     VrpPreLoadKey @ 0x140735EB4 (VrpPreLoadKey.c)
 *     CmpRecoverEnlistment @ 0x1407FCAF8 (CmpRecoverEnlistment.c)
 *     PopSetNewPolicyValue @ 0x140825FDC (PopSetNewPolicyValue.c)
 *     BiCreateObject @ 0x14082CA14 (BiCreateObject.c)
 *     BcdGetElementDataWithFlags @ 0x14082E398 (BcdGetElementDataWithFlags.c)
 *     BcdOpenObject @ 0x14082E620 (BcdOpenObject.c)
 *     BiConvertElementToRegistryData @ 0x14082F9BC (BiConvertElementToRegistryData.c)
 *     IopUpdateSecureDeviceClassState @ 0x14083B398 (IopUpdateSecureDeviceClassState.c)
 *     IopCreateSecureDeviceClassSettings @ 0x14083B634 (IopCreateSecureDeviceClassSettings.c)
 *     ExpTranslateEfiPath @ 0x14083EF60 (ExpTranslateEfiPath.c)
 *     CmpStartRMLog @ 0x140863C7C (CmpStartRMLog.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140875198 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140876268 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1408776A0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     IoGetDeviceDirectory @ 0x1409520A0 (IoGetDeviceDirectory.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14095CBE0 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14095E9A0 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PpDevCfgProcessDeviceClass @ 0x14095F98C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14096044C (PpDevCfgProcessDeviceReset.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BAD78 (RtlpConstructCrossVmObjectPath.c)
 *     ExpCreateOutputSIGNATURE @ 0x1409F9388 (ExpCreateOutputSIGNATURE.c)
 *     CmpCloneHwProfile @ 0x140A0D554 (CmpCloneHwProfile.c)
 *     CmpAddRemoveRMLogContainer @ 0x140A1BBAC (CmpAddRemoveRMLogContainer.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140A5C414 (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x140A6B464 (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x140B552F0 (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x1403D8840 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x140777DB0 (ExpAllocateStringRoutine.c)
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
