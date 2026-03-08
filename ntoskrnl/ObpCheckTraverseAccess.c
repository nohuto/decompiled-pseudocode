/*
 * XREFs of ObpCheckTraverseAccess @ 0x140978718
 * Callers:
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     SeAccessCheck @ 0x140265330 (SeAccessCheck.c)
 *     SeFastTraverseCheck @ 0x1405B54D4 (SeFastTraverseCheck.c)
 *     ObReleaseObjectSecurityEx @ 0x1406993F0 (ObReleaseObjectSecurityEx.c)
 *     SeUnlockSubjectContext @ 0x140699470 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1406994B0 (SeLockSubjectContext.c)
 *     ObpGetObjectSecurity @ 0x1406DB240 (ObpGetObjectSecurity.c)
 *     SeAppendPrivileges @ 0x140761800 (SeAppendPrivileges.c)
 */

BOOLEAN __fastcall ObpCheckTraverseAccess(
        __int64 a1,
        __int64 a2,
        struct _ACCESS_STATE *a3,
        char a4,
        KPROCESSOR_MODE a5,
        PNTSTATUS AccessStatus)
{
  KPROCESSOR_MODE AccessMode; // bl
  unsigned __int64 v9; // r9
  __int64 v10; // r13
  NTSTATUS ObjectSecurity; // eax
  BOOLEAN v13; // bl
  PPRIVILEGE_SET Privileges; // [rsp+50h] [rbp-10h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+90h] [rbp+30h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+98h] [rbp+38h] BYREF
  char v17; // [rsp+A8h] [rbp+48h] BYREF

  v17 = a4;
  AccessMode = a5;
  GrantedAccess = 0;
  Privileges = 0LL;
  SecurityDescriptor = 0LL;
  v9 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  v17 = 0;
  v10 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v9];
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, &v17, a5);
  if ( ObjectSecurity >= 0 )
  {
    if ( SeFastTraverseCheck((__int64)SecurityDescriptor, (__int64)a3, 2) )
    {
      v13 = 1;
    }
    else
    {
      SeLockSubjectContext(&a3->SubjectSecurityContext);
      v13 = SeAccessCheck(
              SecurityDescriptor,
              &a3->SubjectSecurityContext,
              1u,
              2u,
              0,
              &Privileges,
              (PGENERIC_MAPPING)(v10 + 76),
              AccessMode,
              &GrantedAccess,
              AccessStatus);
      if ( Privileges )
      {
        SeAppendPrivileges(a3, Privileges);
        CmSiFreeMemory(Privileges);
      }
      SeUnlockSubjectContext(&a3->SubjectSecurityContext);
    }
    ObReleaseObjectSecurityEx(SecurityDescriptor, v17, a1);
    return v13;
  }
  else
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
}
