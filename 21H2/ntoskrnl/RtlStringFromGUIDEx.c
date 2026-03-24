/*
 * XREFs of RtlStringFromGUIDEx @ 0x14067A7D8
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1403AF654 (BapdpMarshallBootDataToRegistry.c)
 *     KsepEvntLogShimsApplied @ 0x140526F2C (KsepEvntLogShimsApplied.c)
 *     PopSetNewPolicyValue @ 0x14067A6B0 (PopSetNewPolicyValue.c)
 *     RtlStringFromGUID @ 0x14067A7C0 (RtlStringFromGUID.c)
 *     PpDevCfgProcessDeviceClass @ 0x14072FE5C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x1407301CC (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140730420 (PiDevCfgResetDeviceDriverSettings.c)
 *     IopCreateSecureDeviceClassSettings @ 0x140739950 (IopCreateSecureDeviceClassSettings.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073B090 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x14076BE54 (PiDevCfgQueryDriverConfiguration.c)
 *     PipGenerateContainerID @ 0x14076E528 (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14077BE90 (PiDevCfgResolveVariableDeviceProperty.c)
 *     CmpStartRMLog @ 0x14077D4E4 (CmpStartRMLog.c)
 *     BcdOpenObject @ 0x140783A40 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x1407841C0 (BcdGetElementDataWithFlags.c)
 *     BiConvertElementToRegistryData @ 0x140784B7C (BiConvertElementToRegistryData.c)
 *     IopUpdateSecureDeviceClassState @ 0x1407BD834 (IopUpdateSecureDeviceClassState.c)
 *     CmpRecoverEnlistment @ 0x140874E8C (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x1408751D4 (CmpAddRemoveRMLogContainer.c)
 *     VrpPreLoadKey @ 0x14088338C (VrpPreLoadKey.c)
 *     IoGetDeviceDirectory @ 0x14089E810 (IoGetDeviceDirectory.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1408A98B0 (PiDevCfgResolveVariableGenerateGuid.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409157C8 (RtlpConstructCrossVmObjectPath.c)
 *     ExpCreateOutputSIGNATURE @ 0x14094FD4C (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateEfiPath @ 0x14095223C (ExpTranslateEfiPath.c)
 *     BiCreateObject @ 0x14096EFC8 (BiCreateObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140973334 (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x14097F008 (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x140A5B730 (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x1403D68F0 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x1406A0F60 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlStringFromGUIDEx(unsigned int *a1, __int64 a2, char a3)
{
  __int64 StringRoutine; // rax
  unsigned __int16 v6; // dx

  if ( a3 )
  {
    *(_WORD *)(a2 + 2) = 78;
    StringRoutine = ExpAllocateStringRoutine(0x4EuLL);
    *(_QWORD *)(a2 + 8) = StringRoutine;
    if ( StringRoutine )
    {
      v6 = *(_WORD *)(a2 + 2);
LABEL_4:
      *(_WORD *)a2 = 76;
      swprintf_s(
        *(wchar_t **)(a2 + 8),
        (unsigned __int64)v6 >> 1,
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
    v6 = *(_WORD *)(a2 + 2);
    if ( v6 >= 0x4Eu )
      goto LABEL_4;
    return 3221225507LL;
  }
}
