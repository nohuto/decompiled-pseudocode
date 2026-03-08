/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x14071C8F0
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14066D780 (AdtpBuildAccessReasonAuditString.c)
 *     _PnpValidatePropertyData @ 0x140686FC8 (_PnpValidatePropertyData.c)
 *     WmipGetGuidSecurityDescriptor @ 0x14069AC40 (WmipGetGuidSecurityDescriptor.c)
 *     ExpWnfLookupPermanentName @ 0x14071C320 (ExpWnfLookupPermanentName.c)
 *     ExpWnfRegisterPermanentName @ 0x140799310 (ExpWnfRegisterPermanentName.c)
 *     BiCreateKeySecurityDescriptor @ 0x14082E98C (BiCreateKeySecurityDescriptor.c)
 *     IopUpdateSecureDeviceClassState @ 0x14083B398 (IopUpdateSecureDeviceClassState.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140856888 (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x1408592D8 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x14085BE20 (WmipSaveGuidSecurityDescriptor.c)
 *     _CmSetDeviceRegPropWorker @ 0x14086A240 (_CmSetDeviceRegPropWorker.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086D238 (_CmGetRegKeySecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140878110 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14087C494 (_PnpGetPropertiesSecurityDescriptor.c)
 *     ObpSetObjectAuditInfo @ 0x1408A0C62 (ObpSetObjectAuditInfo.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1409589E4 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140958C2C (PiAuGetStateDirectorySecurityObject.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140A60700 (_CmSetInstallerClassRegPropWorker.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6AD74 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140B5B3D8 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B5B788 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140B69148 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v1; // r8
  ULONG v2; // edx
  __int64 v3; // rax
  char *v4; // rax
  __int64 v5; // rax
  char *v6; // rax
  __int64 v7; // rax
  char *v8; // rax
  __int64 v10; // rax
  char *v11; // rax

  v1 = *((_WORD *)SecurityDescriptor + 1);
  v2 = ((v1 >> 31) & 0xFFFFFFEC) + 40;
  if ( v1 >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v3 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v3 )
      goto LABEL_7;
    v4 = (char *)SecurityDescriptor + v3;
  }
  if ( v4 )
    v2 += (4 * (unsigned __int8)v4[1] + 11) & 0xFFFFFFFC;
  if ( v1 >= 0 )
  {
    v6 = (char *)*((_QWORD *)SecurityDescriptor + 2);
    goto LABEL_9;
  }
LABEL_7:
  v5 = *((unsigned int *)SecurityDescriptor + 2);
  if ( !(_DWORD)v5 )
    goto LABEL_11;
  v6 = (char *)SecurityDescriptor + v5;
LABEL_9:
  if ( v6 )
    v2 += (4 * (unsigned __int8)v6[1] + 11) & 0xFFFFFFFC;
LABEL_11:
  if ( (v1 & 4) == 0 )
    goto LABEL_17;
  if ( v1 >= 0 )
  {
    v8 = (char *)*((_QWORD *)SecurityDescriptor + 4);
  }
  else
  {
    v7 = *((unsigned int *)SecurityDescriptor + 4);
    if ( !(_DWORD)v7 )
      goto LABEL_17;
    v8 = (char *)SecurityDescriptor + v7;
  }
  if ( v8 )
    v2 += (*((unsigned __int16 *)v8 + 1) + 3) & 0xFFFFFFFC;
LABEL_17:
  if ( (v1 & 0x10) != 0 )
  {
    if ( v1 >= 0 )
    {
      v11 = (char *)*((_QWORD *)SecurityDescriptor + 3);
    }
    else
    {
      v10 = *((unsigned int *)SecurityDescriptor + 3);
      if ( !(_DWORD)v10 )
        return v2;
      v11 = (char *)SecurityDescriptor + v10;
    }
    if ( v11 )
      v2 += (*((unsigned __int16 *)v11 + 1) + 3) & 0xFFFFFFFC;
  }
  return v2;
}
