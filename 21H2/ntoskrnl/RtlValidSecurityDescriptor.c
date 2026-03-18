/*
 * XREFs of RtlValidSecurityDescriptor @ 0x140726610
 * Callers:
 *     AdtpIsSDValidSelfRelative @ 0x14064C900 (AdtpIsSDValidSelfRelative.c)
 *     ObpAdjustAccessMask @ 0x1406689A4 (ObpAdjustAccessMask.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140678874 (PiDevCfgGetKeySecurityDescriptor.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x1407438D8 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140743C8C (_PnpGetPropertiesSecurityDescriptor.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x14076B308 (PnpInitializeInheritedRestrictedSd.c)
 *     _PnpOpenPropertiesKey @ 0x14077EF20 (_PnpOpenPropertiesKey.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14085C290 (_PnpGetEnumSecurityDescriptor.c)
 *     ObpSetObjectAuditInfo @ 0x140881DF2 (ObpSetObjectAuditInfo.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140949AF8 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140949D40 (PiAuGetStateDirectorySecurityObject.c)
 *     CMFCreateSecurityDescriptor @ 0x140A04204 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A305C4 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140B22228 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B225D8 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140B2888C (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x1407B4660 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1407B4A50 (RtlValidAcl.c)
 */

BOOLEAN __stdcall RtlValidSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v2; // di
  __int64 v3; // rax
  char *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // rcx
  __int16 v8; // ax
  char *v10; // rcx
  __int64 v11; // rax
  char *v12; // rcx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return 0;
  v2 = *((_WORD *)SecurityDescriptor + 1);
  if ( v2 >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v3 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v3 )
      goto LABEL_8;
    v4 = (char *)SecurityDescriptor + v3;
  }
  if ( v4 && !RtlValidSid(v4) )
    return 0;
  if ( v2 >= 0 )
  {
    v10 = (char *)*((_QWORD *)SecurityDescriptor + 2);
    goto LABEL_18;
  }
LABEL_8:
  v5 = *((unsigned int *)SecurityDescriptor + 2);
  if ( !(_DWORD)v5 )
    goto LABEL_9;
  v10 = (char *)SecurityDescriptor + v5;
LABEL_18:
  if ( v10 && !RtlValidSid(v10) )
    return 0;
LABEL_9:
  if ( (v2 & 4) != 0 )
  {
    if ( v2 >= 0 )
    {
      v7 = (char *)*((_QWORD *)SecurityDescriptor + 4);
      goto LABEL_13;
    }
    v6 = *((unsigned int *)SecurityDescriptor + 4);
    if ( (_DWORD)v6 )
    {
      v7 = (char *)SecurityDescriptor + v6;
LABEL_13:
      if ( v7 && !(unsigned __int8)RtlValidAcl(v7) )
        return 0;
    }
  }
  v8 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v8 & 0x10) == 0 )
    return 1;
  if ( v8 >= 0 )
  {
    v12 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v11 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v11 )
      return 1;
    v12 = (char *)SecurityDescriptor + v11;
  }
  return !v12 || (unsigned __int8)RtlValidAcl(v12);
}
