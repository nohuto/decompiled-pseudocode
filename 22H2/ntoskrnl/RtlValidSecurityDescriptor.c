/*
 * XREFs of RtlValidSecurityDescriptor @ 0x1406D7CC0
 * Callers:
 *     AdtpIsSDValidSelfRelative @ 0x1403F90C4 (AdtpIsSDValidSelfRelative.c)
 *     ObpAdjustAccessMask @ 0x1405DE9A0 (ObpAdjustAccessMask.c)
 *     ObInsertObjectEx @ 0x1406520B0 (ObInsertObjectEx.c)
 *     _PnpOpenPropertiesKey @ 0x1406BE2A4 (_PnpOpenPropertiesKey.c)
 *     ObOpenObjectByNameEx @ 0x1406CEA90 (ObOpenObjectByNameEx.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140738828 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140767854 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14077EC1C (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407CC86C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1408A3D70 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1408A3FF4 (PiAuGetStateDirectorySecurityObject.c)
 *     ObpSetObjectAuditInfo @ 0x1408DD2A8 (ObpSetObjectAuditInfo.c)
 *     CMFCreateSecurityDescriptor @ 0x140958514 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097E94C (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140A517DC (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140A51B9C (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140A6E0A8 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlValidAcl @ 0x1406D5380 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1406D54E0 (RtlValidSid.c)
 */

BOOLEAN __stdcall RtlValidSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v2; // di
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  ACL *v6; // rcx
  __int16 v7; // ax
  char *v9; // rcx
  char *v10; // rcx
  __int64 v11; // rax
  ACL *v12; // rcx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return 0;
  v2 = *((_WORD *)SecurityDescriptor + 1);
  if ( v2 >= 0 )
  {
    v9 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v3 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v3 )
      goto LABEL_4;
    v9 = (char *)SecurityDescriptor + v3;
  }
  if ( v9 && !RtlValidSid(v9) )
    return 0;
LABEL_4:
  if ( v2 >= 0 )
  {
    v10 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  else
  {
    v4 = *((unsigned int *)SecurityDescriptor + 2);
    if ( !(_DWORD)v4 )
      goto LABEL_6;
    v10 = (char *)SecurityDescriptor + v4;
  }
  if ( v10 && !RtlValidSid(v10) )
    return 0;
LABEL_6:
  if ( (v2 & 4) != 0 )
  {
    if ( v2 >= 0 )
    {
      v6 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
      goto LABEL_10;
    }
    v5 = *((unsigned int *)SecurityDescriptor + 4);
    if ( (_DWORD)v5 )
    {
      v6 = (ACL *)((char *)SecurityDescriptor + v5);
LABEL_10:
      if ( v6 && !RtlValidAcl(v6) )
        return 0;
    }
  }
  v7 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v7 & 0x10) == 0 )
    return 1;
  if ( v7 >= 0 )
  {
    v12 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v11 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v11 )
      return 1;
    v12 = (ACL *)((char *)SecurityDescriptor + v11);
  }
  return !v12 || RtlValidAcl(v12);
}
