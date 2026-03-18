/*
 * XREFs of SeMaximumAuditMaskFromGlobalSacl @ 0x1409D24D4
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406C0580 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1407BC7B0 (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     SeMaximumAuditMask @ 0x1405B7A68 (SeMaximumAuditMask.c)
 *     SepRmGlobalSaclFind @ 0x1408A6A92 (SepRmGlobalSaclFind.c)
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
