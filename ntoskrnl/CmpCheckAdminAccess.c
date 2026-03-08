/*
 * XREFs of CmpCheckAdminAccess @ 0x140A16150
 * Callers:
 *     CmpVEPerformOpenAccessCheck @ 0x140768B54 (CmpVEPerformOpenAccessCheck.c)
 *     CmpVEExecuteCreateLogic @ 0x140768C00 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A15598 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     SeAccessCheckFromState @ 0x140206940 (SeAccessCheckFromState.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpBuildAdminInformation @ 0x140A15CBC (CmpBuildAdminInformation.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCheckAdminAccess(
        ACCESS_MASK DesiredAccess,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        __int64 *a3,
        BOOLEAN *a4)
{
  int v7; // edi
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-28h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-24h] BYREF
  PTOKEN_ACCESS_INFORMATION PrimaryTokenInformation; // [rsp+58h] [rbp-20h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-18h] BYREF

  GrantedAccess = 0;
  AccessStatus = 0;
  PrimaryTokenInformation = 0LL;
  Privileges = 0LL;
  v7 = CmpBuildAdminInformation((__int64 *)&PrimaryTokenInformation, a3);
  if ( v7 >= 0 )
  {
    *a4 = SeAccessCheckFromState(
            SecurityDescriptor,
            PrimaryTokenInformation,
            0LL,
            DesiredAccess,
            0,
            &Privileges,
            (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
            1,
            &GrantedAccess,
            &AccessStatus);
    v7 = 0;
  }
  if ( Privileges )
    ExFreePoolWithTag(Privileges, 0);
  if ( PrimaryTokenInformation )
    CmSiFreeMemory((PPRIVILEGE_SET)PrimaryTokenInformation);
  return (unsigned int)v7;
}
