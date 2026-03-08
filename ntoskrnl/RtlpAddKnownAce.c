/*
 * XREFs of RtlpAddKnownAce @ 0x1406D3290
 * Callers:
 *     PiUEventInitClientRegistrationContext @ 0x14068E428 (PiUEventInitClientRegistrationContext.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1406D22B0 (SepAppendAceToTokenObjectAcl.c)
 *     SepCreateImpersonationTokenDacl @ 0x1406D3000 (SepCreateImpersonationTokenDacl.c)
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140740870 (ObpVerifyAccessToBoundaryEntry.c)
 *     RtlAddAccessAllowedAce @ 0x140744250 (RtlAddAccessAllowedAce.c)
 *     LocalGetAclForString @ 0x14074F18C (LocalGetAclForString.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1407512E4 (PspAllocateAndQueryNotificationChannel.c)
 *     MiSessionObjectCreate @ 0x140757A78 (MiSessionObjectCreate.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1407825CC (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PopCreateNotificationName @ 0x140794270 (PopCreateNotificationName.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1407F092C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407FC318 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x140809588 (ObCreateKernelObjectsSD.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14080D1E8 (ObpCreateDefaultObjectTypeSD.c)
 *     SepInitializationPhase1 @ 0x140810320 (SepInitializationPhase1.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140815AD8 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140816360 (CmpHiveRootSecurityDescriptor.c)
 *     RtlAddAccessDeniedAceEx @ 0x14081E180 (RtlAddAccessDeniedAceEx.c)
 *     BiCreateKeySecurityDescriptor @ 0x14082E98C (BiCreateKeySecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x1408458E4 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x14084E2E0 (NtSetUuidSeed.c)
 *     ObpGetDosDevicesProtection @ 0x140855400 (ObpGetDosDevicesProtection.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140856888 (_PnpGetEnumSecurityDescriptor.c)
 *     DbgkpCreateNotificationEvent @ 0x140857EAC (DbgkpCreateNotificationEvent.c)
 *     MiCreateMemoryEventSD @ 0x14085B500 (MiCreateMemoryEventSD.c)
 *     ExpInitFullProcessSecurityInfo @ 0x14085B9E0 (ExpInitFullProcessSecurityInfo.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14086D238 (_CmGetRegKeySecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x140872270 (RtlAddAccessAllowedAceEx.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140878110 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14087C494 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1408808A8 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x1409587A0 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1409589E4 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140958C2C (PiAuGetStateDirectorySecurityObject.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1409B7F70 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1409B7FD0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x1409B8230 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x1409B8270 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x1409B82C0 (RtlAddAuditAccessObjectAce.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1409BBA64 (RtlpSysVolCreateSecurityDescriptor.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1409D735C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x1409FEF0C (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140A6AD74 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x140A71340 (ObpGetSilosRootDirectory.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlValidAcl @ 0x1407BB670 (RtlValidAcl.c)
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
  if ( !(unsigned __int8)RtlValidAcl() )
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
