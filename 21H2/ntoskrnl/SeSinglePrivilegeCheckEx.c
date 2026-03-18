/*
 * XREFs of SeSinglePrivilegeCheckEx @ 0x140724418
 * Callers:
 *     SepCheckForCriticalAceRemoval @ 0x140207028 (SepCheckForCriticalAceRemoval.c)
 *     CmpSetAccessStateForBackupRestore @ 0x1406B52CC (CmpSetAccessStateForBackupRestore.c)
 *     SepValidOwnerSubjectContext @ 0x1406BBE6C (SepValidOwnerSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     SepValidLabelSubjectContext @ 0x14079DB4C (SepValidLabelSubjectContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SePrivilegedServiceAuditAlarm @ 0x140726520 (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x14072B5E0 (SePrivilegeCheck.c)
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
