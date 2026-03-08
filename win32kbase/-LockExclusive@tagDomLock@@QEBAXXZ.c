/*
 * XREFs of ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003A300
 * Callers:
 *     ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x1C0008588 (-IsInputSuppressRequested@CBaseInput@@IEBA_NXZ.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C003A418 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C003B2D0 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly.c)
 *     ThreadUnlock1 @ 0x1C003B460 (ThreadUnlock1.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     HMUnlockObjectInternal @ 0x1C0072A40 (HMUnlockObjectInternal.c)
 *     ThreadUnlockWorker1 @ 0x1C009E600 (ThreadUnlockWorker1.c)
 *     RIMGetCurrentPowerInputMode @ 0x1C00BC3E0 (RIMGetCurrentPowerInputMode.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C00CFA4C (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?lock@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_POWERTRANSITIONSSTATE@@@?$DomainSharedBase@$$V@@AEAAXXZ @ 0x1C00CFB20 (-lock@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_POWERTRANSITIONSSTATE@@@-$DomainSharedBase.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C015A5E8 (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x1C01D6304 (rimDisplayOffPolicyUpdateStateAndApply.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1C01D8B9C (rimLidClosedPolicyUpdateStateAndApply.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall tagDomLock::LockExclusive(PERESOURCE *this)
{
  if ( ExIsResourceAcquiredExclusiveLite(*this) == 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1411LL);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*this);
}
