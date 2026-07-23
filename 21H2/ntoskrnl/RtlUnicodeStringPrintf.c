/*
 * XREFs of RtlUnicodeStringPrintf @ 0x14036F14C
 * Callers:
 *     PiDevCfgBuildDriverNodeStrongName @ 0x14073B980 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x14073D36C (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14073D628 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgConfigureDevice @ 0x140742FE0 (PiDevCfgConfigureDevice.c)
 *     CmSetAcpiHwProfile @ 0x1407A5B08 (CmSetAcpiHwProfile.c)
 *     CmpOpenDevicesControlSet @ 0x1407A6964 (CmpOpenDevicesControlSet.c)
 *     CmpSaveBootControlSet @ 0x140867BE0 (CmpSaveBootControlSet.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B4840 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408B7ABC (PiDrvDbResolveNodeFilePaths.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x1408F4300 (PopIdleWakeGenerateDescriptionString.c)
 *     PopIdleWakeSystemImageCallback @ 0x1408F49C0 (PopIdleWakeSystemImageCallback.c)
 *     SshpGenerateDeviceFriendlyName @ 0x1408FB280 (SshpGenerateDeviceFriendlyName.c)
 *     CmpCreateControlSet @ 0x140A59080 (CmpCreateControlSet.c)
 *     CmpCreateHardwareProfiles @ 0x140A59540 (CmpCreateHardwareProfiles.c)
 *     CmpAddAliasEntry @ 0x140A8F43C (CmpAddAliasEntry.c)
 *     CmpCreateControlSetOverride @ 0x140A8F6E4 (CmpCreateControlSetOverride.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x14036F1D0 (RtlUnicodeStringValidateDestWorker.c)
 *     _vsnwprintf @ 0x1403D11E0 (_vsnwprintf.c)
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
