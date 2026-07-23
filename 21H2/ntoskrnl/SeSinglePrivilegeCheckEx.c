/*
 * XREFs of SeSinglePrivilegeCheckEx @ 0x1406937A8
 * Callers:
 *     SepCheckForCriticalAceRemoval @ 0x14026CF4C (SepCheckForCriticalAceRemoval.c)
 *     SepValidOwnerSubjectContext @ 0x1405FBEDC (SepValidOwnerSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     SepValidLabelSubjectContext @ 0x1406974CC (SepValidLabelSubjectContext.c)
 *     CmpSetAccessStateForBackupRestore @ 0x14076F0B4 (CmpSetAccessStateForBackupRestore.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     SePrivilegeCheck @ 0x140649D60 (SePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14069382C (SePrivilegedServiceAuditAlarm.c)
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
