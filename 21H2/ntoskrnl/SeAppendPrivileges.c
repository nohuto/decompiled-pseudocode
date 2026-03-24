/*
 * XREFs of SeAppendPrivileges @ 0x1405D9A40
 * Callers:
 *     IopCreateSecurityCheck @ 0x140201880 (IopCreateSecurityCheck.c)
 *     CmpCheckKeyBodyAccess @ 0x1405D961C (CmpCheckKeyBodyAccess.c)
 *     ObCheckObjectAccess @ 0x1405D9860 (ObCheckObjectAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     ObpAdjustCreatorAccessState @ 0x140662D98 (ObpAdjustCreatorAccessState.c)
 *     ObCheckCreateObjectAccess @ 0x140662E90 (ObCheckCreateObjectAccess.c)
 *     ObpCreateHandle @ 0x1406F6550 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     IopCheckBackupRestorePrivilege @ 0x140702EF0 (IopCheckBackupRestorePrivilege.c)
 *     ObpCheckTraverseAccess @ 0x1408DD130 (ObpCheckTraverseAccess.c)
 *     CMFCheckAccess @ 0x140958274 (CMFCheckAccess.c)
 * Callees:
 *     memmove @ 0x140413F40 (memmove.c)
 *     SepConcatenatePrivileges @ 0x1405D9AA8 (SepConcatenatePrivileges.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall SeAppendPrivileges(PACCESS_STATE AccessState, PPRIVILEGE_SET Privileges)
{
  PVOID *AuxData; // rdi
  ULONG PrivilegeCount; // r8d
  _DWORD *v6; // rcx
  int v7; // r9d
  unsigned int v9; // ebx
  int v10; // edx
  int v11; // eax
  PVOID PoolWithTag; // rsi
  _DWORD *v13; // rdx
  __int64 v14; // rdx

  AuxData = (PVOID *)AccessState->AuxData;
  PrivilegeCount = Privileges->PrivilegeCount;
  v6 = *AuxData;
  v7 = *(_DWORD *)*AuxData;
  if ( v7 + Privileges->PrivilegeCount <= 3 )
  {
    SepConcatenatePrivileges(v6, Privileges, Privileges);
    return 0;
  }
  v9 = 8;
  if ( PrivilegeCount )
    v10 = 12 * PrivilegeCount + 8;
  else
    v10 = 8;
  if ( v6 )
  {
    if ( v7 )
      v11 = 12 * v7 + 8;
    else
      v11 = 8;
  }
  else
  {
    v11 = 0;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v11 + v10), 0x72506553u);
  if ( PoolWithTag )
  {
    v13 = *AuxData;
    if ( *AuxData )
    {
      if ( *v13 )
        v9 = 12 * *v13 + 8;
    }
    else
    {
      v9 = 0;
    }
    memmove(PoolWithTag, v13, v9);
    SepConcatenatePrivileges(PoolWithTag, v14, Privileges);
    if ( AccessState->PrivilegesAllocated )
      ExFreePoolWithTag(*AuxData, 0);
    *AuxData = PoolWithTag;
    AccessState->PrivilegesAllocated = 1;
    return 0;
  }
  return -1073741670;
}
