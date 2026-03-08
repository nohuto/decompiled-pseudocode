/*
 * XREFs of ?LockExclusive@tagObjLock@@QEBAXXZ @ 0x1C009B720
 * Callers:
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0072AEC (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ?DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1C017BC2C (-DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall tagObjLock::LockExclusive(struct _KTHREAD **this)
{
  if ( this[1] == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1315LL);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  this[1] = KeGetCurrentThread();
}
