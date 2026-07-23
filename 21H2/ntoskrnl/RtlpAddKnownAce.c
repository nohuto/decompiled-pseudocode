/*
 * XREFs of RtlpAddKnownAce @ 0x140651280
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x1405DA0C0 (PspAllocateAndQueryNotificationChannel.c)
 *     SepCreateImpersonationTokenDacl @ 0x1406506F0 (SepCreateImpersonationTokenDacl.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140654260 (SepAppendAceToTokenObjectAcl.c)
 *     RtlAddAccessAllowedAce @ 0x14066A2B0 (RtlAddAccessAllowedAce.c)
 *     PiUEventInitClientRegistrationContext @ 0x1406BBC8C (PiUEventInitClientRegistrationContext.c)
 *     PopCreateNotificationName @ 0x1406BCCD8 (PopCreateNotificationName.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1406C9DC0 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1406CA2B0 (ObpVerifyAccessToBoundaryEntry.c)
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406F4388 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14073205C (RtlpSysVolCreateSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14073C540 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1407683F4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140779148 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14077EEDC (_CmGetRegKeySecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x140781B30 (RtlAddAccessAllowedAceEx.c)
 *     BiCreateKeySecurityDescriptor @ 0x1407847A0 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x140786644 (MiSessionObjectCreate.c)
 *     LocalGetAclForString @ 0x140787A6C (LocalGetAclForString.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140794574 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x140796190 (ObpCreateDefaultObjectTypeSD.c)
 *     ObCreateKernelObjectsSD @ 0x1407A0EAC (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1407A1294 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x1407A148C (MiCreateMemoryEventSD.c)
 *     RtlAddAccessDeniedAceEx @ 0x1407A3350 (RtlAddAccessDeniedAceEx.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407A72A0 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407A861C (CmpHiveRootSecurityDescriptor.c)
 *     PfpCreateEvent @ 0x1407C036C (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1407C7620 (NtSetUuidSeed.c)
 *     DbgkpCreateNotificationEvent @ 0x1407CA830 (DbgkpCreateNotificationEvent.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407CCABC (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x1408A3CC8 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1408A3E80 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1408A4104 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1409122F0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x140912350 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x1409125B0 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x1409125F0 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x140912640 (RtlAddAuditAccessObjectAce.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14092CBC0 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x140958694 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097EADC (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x140980B6C (ObpGetSilosRootDirectory.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlValidAcl @ 0x1406513E0 (RtlValidAcl.c)
 */

__int64 __fastcall RtlpAddKnownAce(PACL Acl, unsigned int a2, int a3, int a4, unsigned __int8 *Src, UCHAR a6)
{
  UCHAR v7; // bp
  UCHAR AclRevision; // cl
  UCHAR v10; // si
  unsigned int v11; // eax
  PACL v12; // rcx
  unsigned int v13; // edx
  ACL *v14; // r8
  USHORT v15; // dx
  __int64 result; // rax

  v7 = a3;
  if ( (unsigned __int64)Src <= 0x7FFFFFFF0000LL || (*Src & 0xF) != 1 || Src[1] > 0xFu )
    return 3221225592LL;
  AclRevision = Acl->AclRevision;
  if ( AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = AclRevision;
  if ( AclRevision <= (unsigned __int8)a2 )
    v10 = a2;
  v11 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
    {
      v11 = a3 & 0xFFFFFF20;
    }
    else if ( !a6 )
    {
      v11 = a3 & 0xFFFFFFC0;
    }
    if ( v11 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(Acl) )
    return 3221225591LL;
  v12 = Acl + 1;
  v13 = 0;
  if ( Acl->AceCount )
  {
    while ( v12 < (PACL)((char *)Acl + Acl->AclSize) )
    {
      ++v13;
      v12 = (PACL)((char *)v12 + v12->AclSize);
      if ( v13 >= Acl->AceCount )
        goto LABEL_13;
    }
    return 3221225591LL;
  }
LABEL_13:
  v14 = (PACL)((char *)Acl + Acl->AclSize);
  if ( v12 > v14 )
    v12 = 0LL;
  v15 = 4 * (Src[1] + 4);
  if ( !v12 || (PACL)((char *)v12 + v15) > v14 )
    return 3221225625LL;
  v12->AclSize = v15;
  v12->Sbz1 = v7;
  v12->AclRevision = a6;
  *(_DWORD *)&v12->AceCount = a4;
  memmove(&v12[1], Src, 4LL * Src[1] + 8);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = v10;
  return result;
}
