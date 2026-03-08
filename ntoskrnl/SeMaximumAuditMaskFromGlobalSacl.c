/*
 * XREFs of SeMaximumAuditMaskFromGlobalSacl @ 0x1409CF634
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14069A700 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14076AA40 (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     SeMaximumAuditMask @ 0x1405B55B8 (SeMaximumAuditMask.c)
 *     SepRmGlobalSaclFind @ 0x1408A1C12 (SepRmGlobalSaclFind.c)
 */

void __stdcall SeMaximumAuditMaskFromGlobalSacl(
        PUNICODE_STRING ObjectTypeName,
        ACCESS_MASK GrantedAccess,
        PACCESS_TOKEN Token,
        PACCESS_MASK AuditMask)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+40h] [rbp+8h] BYREF

  if ( ObjectTypeName && ObjectTypeName->Buffer )
  {
    v9 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&SepRmGlobalSaclLock, 1u);
    if ( (int)SepRmGlobalSaclFind(&v9, 0LL, ObjectTypeName, 0) >= 0 )
    {
      v10 = 0;
      SeMaximumAuditMask(v9[3], GrantedAccess, (__int64)Token, &v10);
      *AuditMask |= v10;
    }
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    KeLeaveCriticalRegion();
  }
}
