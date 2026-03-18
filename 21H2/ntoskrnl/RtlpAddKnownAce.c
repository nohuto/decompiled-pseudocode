/*
 * XREFs of RtlpAddKnownAce @ 0x1407B4900
 * Callers:
 *     LocalGetAclForString @ 0x140675DA8 (LocalGetAclForString.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140678874 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140678C4C (PspAllocateAndQueryNotificationChannel.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406C32B0 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1406CC960 (ObpVerifyAccessToBoundaryEntry.c)
 *     PopCreateNotificationName @ 0x1406E7694 (PopCreateNotificationName.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140724550 (SepAppendAceToTokenObjectAcl.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x1407438D8 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140743C8C (_PnpGetPropertiesSecurityDescriptor.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14074F220 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     PiUEventInitClientRegistrationContext @ 0x14078DAB0 (PiUEventInitClientRegistrationContext.c)
 *     RtlAddAccessAllowedAce @ 0x14078ED30 (RtlAddAccessAllowedAce.c)
 *     SepCreateImpersonationTokenDacl @ 0x1407B468C (SepCreateImpersonationTokenDacl.c)
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 *     MiSessionObjectCreate @ 0x1407F385C (MiSessionObjectCreate.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1407F813C (RtlpSysVolCreateSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140801A80 (PopCreateHiberFileSecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x140811740 (RtlAddAccessAllowedAceEx.c)
 *     BiCreateKeySecurityDescriptor @ 0x140813344 (BiCreateKeySecurityDescriptor.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x1408251EC (ObpCreateDefaultObjectTypeSD.c)
 *     ObCreateKernelObjectsSD @ 0x14082C34C (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x14082C74C (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x14082C950 (MiCreateMemoryEventSD.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140831E08 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140834D0C (CmpHiveRootSecurityDescriptor.c)
 *     SepInitializationPhase1 @ 0x140847FF0 (SepInitializationPhase1.c)
 *     RtlAddAccessDeniedAceEx @ 0x14084DB60 (RtlAddAccessDeniedAceEx.c)
 *     DbgkpCreateNotificationEvent @ 0x14084ED68 (DbgkpCreateNotificationEvent.c)
 *     PfpCreateEvent @ 0x14085075C (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x140855FA0 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14085C290 (_PnpGetEnumSecurityDescriptor.c)
 *     ExpInitFullProcessSecurityInfo @ 0x14085F700 (ExpInitFullProcessSecurityInfo.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140918670 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x140949950 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140949AF8 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140949D40 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1409B7D90 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1409B7DF0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x1409B8050 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x1409B8090 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x1409B80E0 (RtlAddAuditAccessObjectAce.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1409D6F7C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x140A04204 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A305C4 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x140A349F0 (ObpGetSilosRootDirectory.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlValidAcl @ 0x1407B4A50 (RtlValidAcl.c)
 */

__int64 __fastcall RtlpAddKnownAce(__int64 a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, char a6)
{
  char v7; // bp
  unsigned __int8 v9; // si
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r9
  unsigned int v12; // edx
  unsigned __int64 v13; // rdx
  unsigned __int16 v14; // cx
  __int64 result; // rax
  unsigned int v16; // eax

  v7 = a3;
  if ( (unsigned __int64)Src <= 0x7FFFFFFF0000LL || (*Src & 0xF) != 1 || Src[1] > 0xFu )
    return 3221225592LL;
  v9 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 > 4u || a2 > 4 )
    return 3221225561LL;
  if ( v9 <= (unsigned __int8)a2 )
    v9 = a2;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
    {
      v16 = a3 & 0xFFFFFF20;
    }
    else
    {
      if ( a6 )
        return 3221225485LL;
      v16 = a3 & 0xFFFFFFC0;
    }
    if ( !v16 )
      goto LABEL_9;
    return 3221225485LL;
  }
LABEL_9:
  if ( !(unsigned __int8)RtlValidAcl(a1) )
    return 3221225591LL;
  v10 = a1 + 8;
  v11 = 0LL;
  v12 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( v10 < a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    {
      ++v12;
      v10 += *(unsigned __int16 *)(v10 + 2);
      if ( v12 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_13;
    }
    return 3221225591LL;
  }
LABEL_13:
  v13 = a1 + *(unsigned __int16 *)(a1 + 2);
  if ( v10 <= v13 )
    v11 = v10;
  v14 = 4 * (Src[1] + 4);
  if ( !v11 || v11 + v14 > v13 )
    return 3221225625LL;
  *(_WORD *)(v11 + 2) = v14;
  *(_BYTE *)(v11 + 1) = v7;
  *(_BYTE *)v11 = a6;
  *(_DWORD *)(v11 + 4) = a4;
  memmove((void *)(v11 + 8), Src, 4LL * Src[1] + 8);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = v9;
  return result;
}
