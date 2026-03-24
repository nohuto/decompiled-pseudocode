/*
 * XREFs of RtlpAddKnownAce @ 0x14065C460
 * Callers:
 *     ObpVerifyAccessToBoundaryEntry @ 0x1405DAB30 (ObpVerifyAccessToBoundaryEntry.c)
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140604C58 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     SepCreateImpersonationTokenDacl @ 0x14065B8D0 (SepCreateImpersonationTokenDacl.c)
 *     SepAppendAceToTokenObjectAcl @ 0x14065F440 (SepAppendAceToTokenObjectAcl.c)
 *     RtlAddAccessAllowedAce @ 0x140676BE0 (RtlAddAccessAllowedAce.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14067F620 (PspAllocateAndQueryNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1406C1060 (PopCreateNotificationName.c)
 *     PiUEventInitClientRegistrationContext @ 0x1406E49AC (PiUEventInitClientRegistrationContext.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14071B950 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x140731E9C (RtlpSysVolCreateSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14073C380 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140768234 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140778F88 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14077ED1C (_CmGetRegKeySecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x140781970 (RtlAddAccessAllowedAceEx.c)
 *     BiCreateKeySecurityDescriptor @ 0x1407845E0 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x140786484 (MiSessionObjectCreate.c)
 *     LocalGetAclForString @ 0x1407878AC (LocalGetAclForString.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140792FC4 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x140795F90 (ObpCreateDefaultObjectTypeSD.c)
 *     ObCreateKernelObjectsSD @ 0x1407A0CAC (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1407A1094 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x1407A128C (MiCreateMemoryEventSD.c)
 *     RtlAddAccessDeniedAceEx @ 0x1407A3150 (RtlAddAccessDeniedAceEx.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407A70A0 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407A841C (CmpHiveRootSecurityDescriptor.c)
 *     PfpCreateEvent @ 0x1407BFE50 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1407C7300 (NtSetUuidSeed.c)
 *     DbgkpCreateNotificationEvent @ 0x1407CA510 (DbgkpCreateNotificationEvent.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407CC94C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x1408A3B68 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1408A3D20 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1408A3FA4 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlAddAccessAllowedObjectAce @ 0x140912190 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1409121F0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x140912450 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x140912490 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x1409124E0 (RtlAddAuditAccessObjectAce.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14092CA60 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x1409584C4 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097E8FC (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x14098098C (ObpGetSilosRootDirectory.c)
 * Callees:
 *     memmove @ 0x140413F40 (memmove.c)
 *     RtlValidAcl @ 0x14065C5C0 (RtlValidAcl.c)
 */

__int64 __fastcall RtlpAddKnownAce(__int64 a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, char a6)
{
  char v7; // bp
  unsigned __int8 v9; // cl
  char v10; // si
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned __int64 v14; // r8
  unsigned __int16 v15; // dx
  __int64 result; // rax

  v7 = a3;
  if ( (unsigned __int64)Src <= 0x7FFFFFFF0000LL || (*Src & 0xF) != 1 || Src[1] > 0xFu )
    return 3221225592LL;
  v9 = *(_BYTE *)a1;
  if ( v9 > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = v9;
  if ( v9 <= (unsigned __int8)a2 )
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
  if ( !(unsigned __int8)RtlValidAcl(a1) )
    return 3221225591LL;
  v12 = a1 + 8;
  v13 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( v12 < a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    {
      ++v13;
      v12 += *(unsigned __int16 *)(v12 + 2);
      if ( v13 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_13;
    }
    return 3221225591LL;
  }
LABEL_13:
  v14 = a1 + *(unsigned __int16 *)(a1 + 2);
  if ( v12 > v14 )
    v12 = 0LL;
  v15 = 4 * (Src[1] + 4);
  if ( !v12 || v12 + v15 > v14 )
    return 3221225625LL;
  *(_WORD *)(v12 + 2) = v15;
  *(_BYTE *)(v12 + 1) = v7;
  *(_BYTE *)v12 = a6;
  *(_DWORD *)(v12 + 4) = a4;
  memmove((void *)(v12 + 8), Src, 4LL * Src[1] + 8);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = v10;
  return result;
}
