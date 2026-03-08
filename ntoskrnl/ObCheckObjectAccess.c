/*
 * XREFs of ObCheckObjectAccess @ 0x14069DB90
 * Callers:
 *     ObpGrantAccess @ 0x14069DD08 (ObpGrantAccess.c)
 *     PspReferenceCpuPartitionByHandle @ 0x1409AE694 (PspReferenceCpuPartitionByHandle.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     SeAccessCheck @ 0x140265330 (SeAccessCheck.c)
 *     ObReleaseObjectSecurityEx @ 0x1406993F0 (ObReleaseObjectSecurityEx.c)
 *     SeUnlockSubjectContext @ 0x140699470 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1406994B0 (SeLockSubjectContext.c)
 *     SeOpenObjectAuditAlarm @ 0x14069A6A0 (SeOpenObjectAuditAlarm.c)
 *     ObpGetObjectSecurity @ 0x1406DB240 (ObpGetObjectSecurity.c)
 *     SeAppendPrivileges @ 0x140761800 (SeAppendPrivileges.c)
 */

BOOLEAN __fastcall ObCheckObjectAccess(
        char *Object,
        PACCESS_STATE AccessState,
        __int64 a3,
        __int64 a4,
        PNTSTATUS AccessStatus)
{
  char v5; // di
  unsigned __int64 v7; // r10
  KPROCESSOR_MODE AccessMode; // r12
  __int64 v10; // r14
  int ObjectSecurity; // edx
  BOOLEAN v12; // r14
  ACCESS_MASK v13; // eax
  BOOLEAN result; // al
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-18h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-10h] BYREF
  UNICODE_STRING *v18; // [rsp+68h] [rbp-8h]
  char v19; // [rsp+A0h] [rbp+30h] BYREF

  v5 = 0;
  v7 = (unsigned __int8)*(Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  GrantedAccess = 0;
  v19 = 0;
  AccessMode = a4;
  Privileges = 0LL;
  SecurityDescriptor = 0LL;
  v10 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v7];
  v18 = (UNICODE_STRING *)v10;
  ObjectSecurity = ObpGetObjectSecurity(Object, &SecurityDescriptor, &v19, a4);
  if ( ObjectSecurity < 0 )
    goto LABEL_9;
  if ( !SecurityDescriptor )
  {
    AccessState->PreviouslyGrantedAccess |= AccessState->RemainingDesiredAccess;
    AccessState->RemainingDesiredAccess = 0;
    v5 = 1;
LABEL_9:
    result = v5;
    *AccessStatus = ObjectSecurity;
    return result;
  }
  SeLockSubjectContext(&AccessState->SubjectSecurityContext);
  v12 = SeAccessCheck(
          SecurityDescriptor,
          &AccessState->SubjectSecurityContext,
          1u,
          AccessState->RemainingDesiredAccess,
          AccessState->PreviouslyGrantedAccess,
          &Privileges,
          (PGENERIC_MAPPING)(v10 + 76),
          AccessMode,
          &GrantedAccess,
          AccessStatus);
  if ( Privileges )
  {
    SeAppendPrivileges(AccessState, Privileges);
    CmSiFreeMemory(Privileges);
  }
  if ( v12 )
  {
    v13 = GrantedAccess;
    AccessState->PreviouslyGrantedAccess |= GrantedAccess;
    AccessState->RemainingDesiredAccess &= ~(v13 | 0x2000000);
  }
  SeOpenObjectAuditAlarm(
    v18 + 1,
    Object,
    0LL,
    SecurityDescriptor,
    AccessState,
    0,
    v12,
    AccessMode,
    &AccessState->GenerateOnClose);
  SeUnlockSubjectContext(&AccessState->SubjectSecurityContext);
  ObReleaseObjectSecurityEx(SecurityDescriptor, v19, (__int64)Object);
  return v12;
}
