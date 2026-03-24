/*
 * XREFs of RtlpAddKnownAce @ 0x1406D5220
 * Callers:
 *     ObpVerifyAccessToBoundaryEntry @ 0x1405DAB30 (ObpVerifyAccessToBoundaryEntry.c)
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140604C58 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14065CC90 (PspAllocateAndQueryNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1406A3A70 (PopCreateNotificationName.c)
 *     SepCreateImpersonationTokenDacl @ 0x1406D4690 (SepCreateImpersonationTokenDacl.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1406D8200 (SepAppendAceToTokenObjectAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1406EF9D0 (RtlAddAccessAllowedAce.c)
 *     PiUEventInitClientRegistrationContext @ 0x14071824C (PiUEventInitClientRegistrationContext.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1407195A0 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1407321EC (RtlpSysVolCreateSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140738828 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140767854 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140778E88 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14077EC1C (_CmGetRegKeySecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x140781870 (RtlAddAccessAllowedAceEx.c)
 *     BiCreateKeySecurityDescriptor @ 0x1407844E0 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x140786384 (MiSessionObjectCreate.c)
 *     LocalGetAclForString @ 0x1407877AC (LocalGetAclForString.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x140790E20 (ObpCreateDefaultObjectTypeSD.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14079D224 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x1407A10DC (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1407A14C4 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x1407A16BC (MiCreateMemoryEventSD.c)
 *     RtlAddAccessDeniedAceEx @ 0x1407A3580 (RtlAddAccessDeniedAceEx.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407A74D0 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407A884C (CmpHiveRootSecurityDescriptor.c)
 *     PfpCreateEvent @ 0x1407C0610 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1407C7220 (NtSetUuidSeed.c)
 *     DbgkpCreateNotificationEvent @ 0x1407CA430 (DbgkpCreateNotificationEvent.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407CC86C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x1408A3BB8 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1408A3D70 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1408A3FF4 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1409121E0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x140912240 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x1409124A0 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x1409124E0 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x140912530 (RtlAddAuditAccessObjectAce.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14092CAB0 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x140958514 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097E94C (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x1409809DC (ObpGetSilosRootDirectory.c)
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
 *     RtlValidAcl @ 0x1406D5380 (RtlValidAcl.c)
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
