/*
 * XREFs of SeAppendPrivileges @ 0x140761800
 * Callers:
 *     IopCreateSecurityCheck @ 0x1402ED19C (IopCreateSecurityCheck.c)
 *     ObpAdjustCreatorAccessState @ 0x140698E40 (ObpAdjustCreatorAccessState.c)
 *     ObCheckCreateObjectAccess @ 0x14069A900 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x14069DB90 (ObCheckObjectAccess.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 *     ObpCheckTraverseAccess @ 0x140978718 (ObpCheckTraverseAccess.c)
 *     CMFCheckAccess @ 0x1409FECA4 (CMFCheckAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140A18448 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     SepConcatenatePrivileges @ 0x140761868 (SepConcatenatePrivileges.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
  void *Pool2; // rsi
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
  Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)(v11 + v10), 1917871443LL);
  if ( Pool2 )
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
    memmove(Pool2, v13, v9);
    SepConcatenatePrivileges(Pool2, v14, Privileges);
    if ( AccessState->PrivilegesAllocated )
      ExFreePoolWithTag(*AuxData, 0);
    *AuxData = Pool2;
    AccessState->PrivilegesAllocated = 1;
    return 0;
  }
  return -1073741670;
}
