/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1402D17BC
 * Callers:
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1407460F8 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x1407468A0 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140746B5C (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgConfigureDevice @ 0x1407702BC (PiDevCfgConfigureDevice.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408264C0 (PiDrvDbResolveNodeFilePaths.c)
 *     CmSetAcpiHwProfile @ 0x140837F88 (CmSetAcpiHwProfile.c)
 *     CmpOpenDevicesControlSet @ 0x140838DE4 (CmpOpenDevicesControlSet.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140854148 (SshpGenerateDeviceFriendlyName.c)
 *     CmpSaveBootControlSet @ 0x14090BC6C (CmpSaveBootControlSet.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14095A750 (PiCreateDriverSwDeviceCallback.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x14099B8FC (PopIdleWakeGenerateDescriptionString.c)
 *     PopIdleWakeSystemImageCallback @ 0x14099BFB0 (PopIdleWakeSystemImageCallback.c)
 *     ExProcessCounterSetCallback @ 0x1409F5F90 (ExProcessCounterSetCallback.c)
 *     CmpCreateHardwareProfiles @ 0x140B183B4 (CmpCreateHardwareProfiles.c)
 *     CmpCreateControlSet @ 0x140B2C540 (CmpCreateControlSet.c)
 *     CmpAddAliasEntry @ 0x140B4DA1C (CmpAddAliasEntry.c)
 *     CmpCreateControlSetOverride @ 0x140B4DCBC (CmpCreateControlSetOverride.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x140208BA0 (RtlUnicodeStringValidateDestWorker.c)
 *     _vsnwprintf @ 0x1403E0440 (_vsnwprintf.c)
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  int v3; // ebx
  int v4; // eax
  size_t v6; // [rsp+20h] [rbp-48h]
  ULONG v7; // [rsp+28h] [rbp-40h]
  size_t Count; // [rsp+30h] [rbp-38h] BYREF
  wchar_t *Dest; // [rsp+38h] [rbp-30h] BYREF
  __int64 Args; // [rsp+80h] [rbp+18h] BYREF
  size_t *v12; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF
  va_list Argsa; // [rsp+80h] [rbp+18h]

  va_start(va1, pszFormat);
  va_start(Argsa, pszFormat);
  Args = va_arg(va1, _QWORD);
  v12 = va_arg(va1, size_t *);
  Dest = 0LL;
  Count = 0LL;
  v3 = RtlUnicodeStringValidateDestWorker(DestinationString, &Dest, &Count, v12, v6, v7);
  if ( v3 >= 0 )
  {
    v3 = 0;
    v4 = vsnwprintf(Dest, Count, pszFormat, Argsa);
    if ( v4 < 0 || v4 > Count )
    {
      LOWORD(v4) = Count;
      v3 = -2147483643;
    }
    DestinationString->Length = 2 * v4;
  }
  return v3;
}
