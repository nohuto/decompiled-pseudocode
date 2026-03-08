/*
 * XREFs of IopCreateSecurityCheck @ 0x1402ED19C
 * Callers:
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheck @ 0x140265330 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     SeUnlockSubjectContext @ 0x140699470 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1406994B0 (SeLockSubjectContext.c)
 *     SeOpenObjectAuditAlarm @ 0x14069A6A0 (SeOpenObjectAuditAlarm.c)
 *     SeAppendPrivileges @ 0x140761800 (SeAppendPrivileges.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

BOOLEAN __fastcall IopCreateSecurityCheck(
        __int64 a1,
        void *a2,
        struct _ACCESS_STATE *a3,
        int a4,
        int a5,
        PPRIVILEGE_SET Privileges,
        PACCESS_MASK GrantedAccess,
        PUNICODE_STRING AbsoluteObjectName,
        PUNICODE_STRING ObjectTypeName,
        __int64 a10,
        char a11)
{
  int v11; // ebx
  __int64 v16; // r13
  PACCESS_MASK v17; // rsi
  BOOLEAN v18; // bp
  int v20; // eax
  NTSTATUS AccessStatus; // [rsp+98h] [rbp+20h] BYREF

  AccessStatus = 0;
  v11 = 0;
  if ( a5 != 1 )
  {
    v20 = *(_DWORD *)(a1 + 52);
    if ( (v20 & 0x40001) != 0 || IopRequireDeviceAccessCheck && (v20 & 0x100000) != 0 )
      v11 = 2;
  }
  v16 = a10;
  --*(_WORD *)(a10 + 484);
  ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
  SeLockSubjectContext(&a3->SubjectSecurityContext);
  v17 = GrantedAccess;
  v18 = SeAccessCheck(
          *(PSECURITY_DESCRIPTOR *)(a1 + 272),
          &a3->SubjectSecurityContext,
          1u,
          a4 | v11,
          0,
          &Privileges,
          (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
          1,
          GrantedAccess,
          &AccessStatus);
  if ( Privileges )
  {
    SeAppendPrivileges(a3, Privileges);
    ExFreePoolWithTag(Privileges, 0);
  }
  if ( v11 && (v11 & a4) == 0 )
    *v17 &= ~v11;
  if ( a11 && v18 )
  {
    a3->PreviouslyGrantedAccess |= *v17;
    a3->RemainingDesiredAccess &= ~(*v17 | 0x2000000);
  }
  if ( a2 )
    SeOpenObjectAuditAlarm(
      ObjectTypeName,
      a2,
      AbsoluteObjectName,
      *(PSECURITY_DESCRIPTOR *)(a1 + 272),
      a3,
      0,
      v18,
      1,
      &a3->GenerateOnClose);
  SeUnlockSubjectContext(&a3->SubjectSecurityContext);
  ExReleaseResourceLite(&IopSecurityResource);
  KeLeaveCriticalRegionThread(v16);
  return v18;
}
