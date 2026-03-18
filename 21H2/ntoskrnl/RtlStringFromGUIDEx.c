/*
 * XREFs of RtlStringFromGUIDEx @ 0x1407454A8
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1403CCE24 (BapdpMarshallBootDataToRegistry.c)
 *     KsepEvntLogShimsApplied @ 0x14057D77C (KsepEvntLogShimsApplied.c)
 *     VrpPreLoadKey @ 0x14069061C (VrpPreLoadKey.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1406E67F0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     CmpInitCmRM @ 0x140742E3C (CmpInitCmRM.c)
 *     IopCreateSecureDeviceClassSettings @ 0x1407444A8 (IopCreateSecureDeviceClassSettings.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140744E30 (PiDevCfgQueryDriverConfiguration.c)
 *     PipGenerateContainerID @ 0x1407452A0 (PipGenerateContainerID.c)
 *     RtlStringFromGUID @ 0x140745490 (RtlStringFromGUID.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1407459F4 (PiDevCfgLogDeviceConfigured.c)
 *     PopSetNewPolicyValue @ 0x1407FD344 (PopSetNewPolicyValue.c)
 *     BiConvertElementToRegistryData @ 0x140803498 (BiConvertElementToRegistryData.c)
 *     CmpStartRMLog @ 0x14080C884 (CmpStartRMLog.c)
 *     BcdOpenObject @ 0x140812B74 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x140812D44 (BcdGetElementDataWithFlags.c)
 *     IopUpdateSecureDeviceClassState @ 0x14084D3DC (IopUpdateSecureDeviceClassState.c)
 *     CmpRecoverEnlistment @ 0x14091BA74 (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x14091BDB8 (CmpAddRemoveRMLogContainer.c)
 *     CmpCloneHwProfile @ 0x14091DBC4 (CmpCloneHwProfile.c)
 *     IoGetDeviceDirectory @ 0x140943540 (IoGetDeviceDirectory.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14094D930 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14094E390 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PpDevCfgProcessDeviceClass @ 0x14094EA0C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14094F4CC (PpDevCfgProcessDeviceReset.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BAE18 (RtlpConstructCrossVmObjectPath.c)
 *     ExpCreateOutputSIGNATURE @ 0x1409FC108 (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateEfiPath @ 0x1409FE5F4 (ExpTranslateEfiPath.c)
 *     BiCreateObject @ 0x140A1CF34 (BiCreateObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140A212A0 (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x140A30CA8 (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x140B0F20C (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x1406BE560 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlStringFromGUIDEx(unsigned int *a1, __int64 a2, char a3)
{
  PVOID StringRoutine; // rax
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
