/*
 * XREFs of SeSinglePrivilegeCheckEx @ 0x140627698
 * Callers:
 *     SepCheckForCriticalAceRemoval @ 0x14027EFAC (SepCheckForCriticalAceRemoval.c)
 *     SepValidLabelSubjectContext @ 0x140607A3C (SepValidLabelSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     SepValidOwnerSubjectContext @ 0x14069CE0C (SepValidOwnerSubjectContext.c)
 *     CmpSetAccessStateForBackupRestore @ 0x14076EEF4 (CmpSetAccessStateForBackupRestore.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14062771C (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x140654F40 (SePrivilegeCheck.c)
 */

BOOLEAN __fastcall SeSinglePrivilegeCheckEx(LUID a1, struct _SECURITY_SUBJECT_CONTEXT *a2, KPROCESSOR_MODE a3)
{
  BOOLEAN v5; // al
  __int64 v6; // r9
  BOOLEAN v7; // di
  struct _PRIVILEGE_SET v9; // [rsp+20h] [rbp-28h] BYREF

  v9.PrivilegeCount = 1;
  v9.Control = 1;
  v9.Privilege[0].Luid = a1;
  v9.Privilege[0].Attributes = 0;
  v5 = SePrivilegeCheck(&v9, a2, a3);
  v7 = v5;
  if ( a3 )
  {
    LOBYTE(v6) = v5;
    SePrivilegedServiceAuditAlarm(0LL, a2, &v9, v6);
  }
  return v7;
}
