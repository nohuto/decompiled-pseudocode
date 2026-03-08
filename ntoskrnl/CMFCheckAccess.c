/*
 * XREFs of CMFCheckAccess @ 0x1409FECA4
 * Callers:
 *     NtMapCMFModule @ 0x140A005D0 (NtMapCMFModule.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     SeAccessCheck @ 0x140265330 (SeAccessCheck.c)
 *     SepDeleteAccessState @ 0x140265F50 (SepDeleteAccessState.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SeCreateAccessState @ 0x1406991A0 (SeCreateAccessState.c)
 *     SeUnlockSubjectContext @ 0x140699470 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1406994B0 (SeLockSubjectContext.c)
 *     SeAppendPrivileges @ 0x140761800 (SeAppendPrivileges.c)
 *     SePrivilegeCheck @ 0x1407B9710 (SePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     CMFCreateSecurityDescriptor @ 0x1409FEF0C (CMFCreateSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CMFCheckAccess(__int64 a1, int a2, KPROCESSOR_MODE a3)
{
  unsigned int v6; // edi
  unsigned __int64 v7; // rdx
  GENERIC_MAPPING *GenericMapping; // rsi
  int v9; // ebx
  BOOLEAN v10; // al
  BOOLEAN v11; // r14
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  NTSTATUS AccessStatus; // [rsp+60h] [rbp-A0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+68h] [rbp-98h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+78h] [rbp-88h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v19[224]; // [rsp+130h] [rbp+30h] BYREF

  memset(&AccessState, 0, sizeof(AccessState));
  memset(v19, 0, sizeof(v19));
  Privileges = 0LL;
  if ( a1 )
  {
    v7 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
    GenericMapping = (GENERIC_MAPPING *)(ObTypeIndexTable[v7] + 76);
    if ( a2 < 0 )
      a2 |= GenericMapping->GenericRead;
    if ( (a2 & 0x40000000) != 0 )
      a2 |= *(_DWORD *)(ObTypeIndexTable[v7] + 80);
    if ( (a2 & 0x20000000) != 0 )
      a2 |= *(_DWORD *)(ObTypeIndexTable[v7] + 84);
    if ( (a2 & 0x10000000) != 0 )
      a2 |= *(_DWORD *)(ObTypeIndexTable[v7] + 88);
    v9 = a2 & 0xFFFFFFF;
    if ( !CMFSecurityDescriptor )
    {
      P = 0LL;
      v6 = CMFCreateSecurityDescriptor(&P, GenericMapping);
      if ( (v6 & 0xC0000000) == 0xC0000000 )
        return v6;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CMFSecurityDescriptor, (signed __int64)P, 0LL) )
        ExFreePoolWithTag(P, 0);
    }
    v6 = SeCreateAccessState((int)&AccessState, (int)v19, v9, (__int64)GenericMapping);
    if ( (v6 & 0xC0000000) != 0xC0000000 )
    {
      SeLockSubjectContext(&AccessState.SubjectSecurityContext);
      RequiredPrivileges.Control = 0;
      RequiredPrivileges.Privilege[0].Attributes = 0;
      P = (PVOID)18;
      RequiredPrivileges.Privilege[0].Luid = (LUID)18LL;
      RequiredPrivileges.PrivilegeCount = 1;
      v10 = SePrivilegeCheck(&RequiredPrivileges, &AccessState.SubjectSecurityContext, a3);
      AccessStatus = 0;
      v11 = v10;
      GrantedAccess = 0;
      if ( v10 )
      {
        GrantedAccess = v9;
      }
      else
      {
        v11 = SeAccessCheck(
                CMFSecurityDescriptor,
                &AccessState.SubjectSecurityContext,
                1u,
                v9,
                0,
                &Privileges,
                GenericMapping,
                a3,
                &GrantedAccess,
                &AccessStatus);
        if ( Privileges )
        {
          SeAppendPrivileges(&AccessState, Privileges);
          CmSiFreeMemory(Privileges);
        }
      }
      SeUnlockSubjectContext(&AccessState.SubjectSecurityContext);
      v6 = AccessStatus;
      if ( (AccessStatus & 0xC0000000) != 0xC0000000 )
      {
        if ( !v11 || (~GrantedAccess & v9) != 0 )
          v6 = -1073741790;
        else
          v6 = 0;
      }
      SepDeleteAccessState((__int64)&AccessState);
      SeReleaseSubjectContext(&AccessState.SubjectSecurityContext);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
