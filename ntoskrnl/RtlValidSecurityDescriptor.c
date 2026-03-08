/*
 * XREFs of RtlValidSecurityDescriptor @ 0x14075F860
 * Callers:
 *     AdtpIsSDValidSelfRelative @ 0x14066EB8C (AdtpIsSDValidSelfRelative.c)
 *     _PnpOpenPropertiesKey @ 0x1406D1610 (_PnpOpenPropertiesKey.c)
 *     ObOpenObjectByNameEx @ 0x1406E7F70 (ObOpenObjectByNameEx.c)
 *     ObpAdjustAccessMask @ 0x140710DC4 (ObpAdjustAccessMask.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x14078E748 (PnpInitializeInheritedRestrictedSd.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140856888 (_PnpGetEnumSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086D238 (_CmGetRegKeySecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140878110 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14087C494 (_PnpGetPropertiesSecurityDescriptor.c)
 *     ObpSetObjectAuditInfo @ 0x1408A0C62 (ObpSetObjectAuditInfo.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1409589E4 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140958C2C (PiAuGetStateDirectorySecurityObject.c)
 *     CMFCreateSecurityDescriptor @ 0x1409FEF0C (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6AD74 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140B5B3D8 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B5B788 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140B69148 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlValidAcl @ 0x1407BB670 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1407C92A0 (RtlValidSid.c)
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
      if ( !v7 || (unsigned __int8)RtlValidAcl(v7) )
        goto LABEL_15;
      return 0;
    }
  }
LABEL_15:
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
  if ( !v12 )
    return 1;
  return (unsigned __int8)RtlValidAcl(v12) != 0;
}
