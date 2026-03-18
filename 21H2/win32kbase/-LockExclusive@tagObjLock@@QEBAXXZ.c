/*
 * XREFs of ?LockExclusive@tagObjLock@@QEBAXXZ @ 0x1C0086F10
 * Callers:
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00337E0 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ?DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1C0166160 (-DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall tagObjLock::LockExclusive(struct _KTHREAD **this, __int64 a2, __int64 a3)
{
  if ( this[1] == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  this[1] = KeGetCurrentThread();
}
