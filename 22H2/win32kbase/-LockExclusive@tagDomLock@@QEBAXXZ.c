/*
 * XREFs of ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C005CD30
 * Callers:
 *     RIMGetCurrentPowerInputMode @ 0x1C0005D44 (RIMGetCurrentPowerInputMode.c)
 *     UserPowerInfoCallout @ 0x1C000FBD4 (UserPowerInfoCallout.c)
 *     ThreadUnlock1 @ 0x1C0045EE0 (ThreadUnlock1.c)
 *     ThreadUnlockWorker1 @ 0x1C0049E10 (ThreadUnlockWorker1.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     HMUnlockObjectInternal @ 0x1C0056E30 (HMUnlockObjectInternal.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C0059A30 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C005CC48 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 *     ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x1C00B2A4C (-IsInputSuppressRequested@CBaseInput@@IEBA_NXZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C00B9E40 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0132AD8 (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x1C01A822C (rimDisplayOffPolicyUpdateStateAndApply.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1C01AAAC4 (rimLidClosedPolicyUpdateStateAndApply.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall tagDomLock::LockExclusive(PERESOURCE *this)
{
  if ( ExIsResourceAcquiredExclusiveLite(*this) == 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1394LL);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*this);
}
