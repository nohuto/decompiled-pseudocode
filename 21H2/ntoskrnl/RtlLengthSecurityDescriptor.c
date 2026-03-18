/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x1407254F0
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14064B46C (AdtpBuildAccessReasonAuditString.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140678874 (PiDevCfgGetKeySecurityDescriptor.c)
 *     ExpWnfRegisterPermanentName @ 0x1406E5CB0 (ExpWnfRegisterPermanentName.c)
 *     ObLogSecurityDescriptor @ 0x140724E60 (ObLogSecurityDescriptor.c)
 *     SeDefaultObjectMethod @ 0x140725080 (SeDefaultObjectMethod.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x1407438D8 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140743C8C (_PnpGetPropertiesSecurityDescriptor.c)
 *     ExpWnfLookupPermanentName @ 0x14075A12C (ExpWnfLookupPermanentName.c)
 *     _CmSetDeviceRegPropWorker @ 0x14076FF88 (_CmSetDeviceRegPropWorker.c)
 *     _PnpValidatePropertyData @ 0x140771CD0 (_PnpValidatePropertyData.c)
 *     WmipGetGuidSecurityDescriptor @ 0x140782C4C (WmipGetGuidSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x140813344 (BiCreateKeySecurityDescriptor.c)
 *     IopUpdateSecureDeviceClassState @ 0x14084D3DC (IopUpdateSecureDeviceClassState.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14085C290 (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x14086240C (DrvDbGetRegistrarSecurityDescriptor.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x140862E50 (WmipSaveGuidSecurityDescriptor.c)
 *     ObpSetObjectAuditInfo @ 0x140881DF2 (ObpSetObjectAuditInfo.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140949AF8 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140949D40 (PiAuGetStateDirectorySecurityObject.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140A255C0 (_CmSetInstallerClassRegPropWorker.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A305C4 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140B22228 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B225D8 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140B2888C (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v1; // r8
  ULONG result; // eax
  __int64 v4; // rcx
  char *v5; // rcx
  __int64 v6; // rcx
  char *v7; // rcx
  __int64 v8; // rcx
  char *v9; // rcx
  __int64 v10; // rcx
  char *v11; // rcx

  v1 = *((_WORD *)SecurityDescriptor + 1);
  result = ((v1 >> 31) & 0xFFFFFFEC) + 40;
  if ( v1 >= 0 )
  {
    v5 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v4 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v4 )
      goto LABEL_7;
    v5 = (char *)SecurityDescriptor + v4;
  }
  if ( v5 )
    result += (4 * (unsigned __int8)v5[1] + 11) & 0xFFFFFFFC;
  if ( v1 >= 0 )
  {
    v7 = (char *)*((_QWORD *)SecurityDescriptor + 2);
    goto LABEL_9;
  }
LABEL_7:
  v6 = *((unsigned int *)SecurityDescriptor + 2);
  if ( !(_DWORD)v6 )
    goto LABEL_11;
  v7 = (char *)SecurityDescriptor + v6;
LABEL_9:
  if ( v7 )
    result += (4 * (unsigned __int8)v7[1] + 11) & 0xFFFFFFFC;
LABEL_11:
  if ( (v1 & 4) == 0 )
    goto LABEL_17;
  if ( v1 >= 0 )
  {
    v9 = (char *)*((_QWORD *)SecurityDescriptor + 4);
  }
  else
  {
    v8 = *((unsigned int *)SecurityDescriptor + 4);
    if ( !(_DWORD)v8 )
      goto LABEL_17;
    v9 = (char *)SecurityDescriptor + v8;
  }
  if ( v9 )
    result += (*((unsigned __int16 *)v9 + 1) + 3) & 0xFFFFFFFC;
LABEL_17:
  if ( (v1 & 0x10) == 0 )
    return result;
  if ( v1 >= 0 )
  {
    v11 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v10 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v10 )
      return result;
    v11 = (char *)SecurityDescriptor + v10;
  }
  if ( v11 )
    result += (*((unsigned __int16 *)v11 + 1) + 3) & 0xFFFFFFFC;
  return result;
}
