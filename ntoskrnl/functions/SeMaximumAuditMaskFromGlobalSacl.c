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
