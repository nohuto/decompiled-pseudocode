/*
 * XREFs of SeSinglePrivilegeCheckEx @ 0x1406BA46C
 * Callers:
 *     SepCheckForCriticalAceRemoval @ 0x1402438A8 (SepCheckForCriticalAceRemoval.c)
 *     SepValidOwnerSubjectContext @ 0x14069D3EC (SepValidOwnerSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x1407BF100 (RtlpSetSecurityObject.c)
 *     CmpSetAccessStateForBackupRestore @ 0x14087BCE8 (CmpSetAccessStateForBackupRestore.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SePrivilegedServiceAuditAlarm @ 0x140699B5C (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x1407B9710 (SePrivilegeCheck.c)
 */

BOOLEAN __fastcall SeSinglePrivilegeCheckEx(LUID a1, struct _SECURITY_SUBJECT_CONTEXT *a2, KPROCESSOR_MODE a3)
{
  BOOLEAN v5; // al
  BOOLEAN v6; // di
  struct _PRIVILEGE_SET v8; // [rsp+20h] [rbp-28h] BYREF

  v8.PrivilegeCount = 1;
  v8.Control = 1;
  v8.Privilege[0].Luid = a1;
  v8.Privilege[0].Attributes = 0;
  v5 = SePrivilegeCheck(&v8, a2, a3);
  v6 = v5;
  if ( a3 )
    SePrivilegedServiceAuditAlarm(0, (__int64 *)a2, (__int64)&v8, v5);
  return v6;
}
