/*
 * XREFs of ObCheckCreateObjectAccess @ 0x14069A900
 * Callers:
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     SeAccessCheck @ 0x140265330 (SeAccessCheck.c)
 *     ObReleaseObjectSecurityEx @ 0x1406993F0 (ObReleaseObjectSecurityEx.c)
 *     SeUnlockSubjectContext @ 0x140699470 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1406994B0 (SeLockSubjectContext.c)
 *     ObpGetObjectSecurity @ 0x1406DB240 (ObpGetObjectSecurity.c)
 *     SeAppendPrivileges @ 0x140761800 (SeAppendPrivileges.c)
 */

BOOLEAN __fastcall ObCheckCreateObjectAccess(
        __int64 a1,
        ACCESS_MASK a2,
        struct _ACCESS_STATE *a3,
        __int64 a4,
        __int64 a5,
        KPROCESSOR_MODE a6,
        PNTSTATUS AccessStatus)
{
  KPROCESSOR_MODE AccessMode; // si
  unsigned __int64 v9; // r10
  __int64 v12; // r13
  NTSTATUS ObjectSecurity; // eax
  BOOLEAN v14; // si
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-18h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-10h] BYREF
  char v19; // [rsp+A0h] [rbp+30h] BYREF

  AccessMode = a6;
  v9 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  GrantedAccess = 0;
  v19 = 0;
  Privileges = 0LL;
  LOBYTE(a4) = a6;
  SecurityDescriptor = 0LL;
  v12 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v9];
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, &v19, a4);
  if ( ObjectSecurity < 0 )
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
  else
  {
    SeLockSubjectContext(&a3->SubjectSecurityContext);
    if ( SecurityDescriptor )
    {
      v14 = SeAccessCheck(
              SecurityDescriptor,
              &a3->SubjectSecurityContext,
              1u,
              a2,
              0,
              &Privileges,
              (PGENERIC_MAPPING)(v12 + 76),
              AccessMode,
              &GrantedAccess,
              AccessStatus);
      if ( Privileges )
      {
        SeAppendPrivileges(a3, Privileges);
        CmSiFreeMemory(Privileges);
      }
    }
    else
    {
      v14 = 1;
    }
    SeUnlockSubjectContext(&a3->SubjectSecurityContext);
    ObReleaseObjectSecurityEx(SecurityDescriptor, v19, a1);
    return v14;
  }
}
