/*
 * XREFs of ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C006CF30
 * Callers:
 *     ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x1C0005B88 (-IsInputSuppressRequested@CBaseInput@@IEBA_NXZ.c)
 *     ThreadUnlock1 @ 0x1C0030C00 (ThreadUnlock1.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     HMUnlockObjectInternal @ 0x1C0039070 (HMUnlockObjectInternal.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C006D1B8 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C006EAC4 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly.c)
 *     ThreadUnlockWorker1 @ 0x1C008DB70 (ThreadUnlockWorker1.c)
 *     ?lock@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_POWERTRANSITIONSSTATE@@@?$DomainSharedBase@$$V@@AEAAXXZ @ 0x1C0147CAC (-lock@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_POWERTRANSITIONSSTATE@@@-$DomainSharedBase.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall tagDomLock::LockExclusive(PERESOURCE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( ExIsResourceAcquiredExclusiveLite(*this) == 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*this);
}
