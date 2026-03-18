/*
 * XREFs of SeExamineGlobalSacl @ 0x140882A70
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeObjectReferenceAuditAlarm @ 0x1407225F4 (SeObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1408629D0 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     CmpExamineSaclForAuditEvent @ 0x140918574 (CmpExamineSaclForAuditEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409C6D8C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CB230 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     SepRmGlobalSaclFind @ 0x140882B96 (SepRmGlobalSaclFind.c)
 *     SeExamineSacl @ 0x1409CAE50 (SeExamineSacl.c)
 */

void __stdcall SeExamineGlobalSacl(
        PUNICODE_STRING ObjectType,
        PACL ResourceSacl,
        PACCESS_TOKEN Token,
        ACCESS_MASK DesiredAccess,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateAudit,
        PBOOLEAN GenerateAlarm)
{
  PBOOLEAN v7; // rdi
  BOOLEAN v8; // bl
  struct _KTHREAD *CurrentThread; // rax
  ACL *v14; // rcx
  char v15; // al
  BOOLEAN v16[16]; // [rsp+40h] [rbp-28h] BYREF

  v7 = GenerateAudit;
  v8 = 0;
  if ( GenerateAudit && !*GenerateAudit )
  {
    GenerateAudit = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&SepRmGlobalSaclLock, 1u);
    if ( (int)SepRmGlobalSaclFind(&GenerateAudit, 0LL, ObjectType, 0LL) >= 0 )
    {
      v14 = (ACL *)*((_QWORD *)GenerateAudit + 3);
      if ( v14 )
      {
        LOBYTE(GenerateAudit) = 0;
        v16[0] = 0;
        SeExamineSacl(v14, ResourceSacl, Token, DesiredAccess, AccessGranted, (PBOOLEAN)&GenerateAudit, v16);
        if ( *v7 || (v15 = 0, (_BYTE)GenerateAudit) )
          v15 = 1;
        *v7 = v15;
        if ( GenerateAlarm )
        {
          if ( *GenerateAlarm || v16[0] )
            v8 = 1;
          *GenerateAlarm = v8;
        }
      }
    }
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    KeLeaveCriticalRegion();
  }
}
