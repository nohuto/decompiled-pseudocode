/*
 * XREFs of ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0059AE0
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
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0130400 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0132AD8 (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x1C01A822C (rimDisplayOffPolicyUpdateStateAndApply.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1C01AAAC4 (rimLidClosedPolicyUpdateStateAndApply.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

PERESOURCE *__fastcall GetDomainLockRef(int a1)
{
  switch ( a1 )
  {
    case 0:
      return (PERESOURCE *)&gDomainProcessInfoLock;
    case 1:
      return (PERESOURCE *)&gDomainThreadInfoLock;
    case 2:
      return (PERESOURCE *)&gDomainDesktopLock;
    case 4:
      return (PERESOURCE *)&gDomainPostLock;
    case 3:
      return (PERESOURCE *)&gDomainSmsLock;
    case 5:
      return (PERESOURCE *)&gDomainQueueLock;
    case 8:
      return (PERESOURCE *)&gDomainHookLock;
    case 9:
      return (PERESOURCE *)&gDomainWinEventLock;
    case 11:
      return (PERESOURCE *)&gDomainClientLibLock;
    case 10:
      return (PERESOURCE *)&gDomainWindowLock;
    case 13:
      return (PERESOURCE *)&gDomainPowerTransitionsStateLock;
    case 12:
      return (PERESOURCE *)&gDomainTlLock;
    case 14:
      return &gDomainHandleManagerLock;
    case 15:
      return (PERESOURCE *)&gDomainRawInputLock;
    case 16:
      return (PERESOURCE *)&gDomainAsyncKeyStateLock;
    case 17:
      return (PERESOURCE *)&gDomainJobLock;
    case 6:
      return (PERESOURCE *)&gDomainForegroundLock;
    case 7:
      return (PERESOURCE *)&gDomainActiveLock;
    case 18:
      return (PERESOURCE *)&gDomainInputDelegationLock;
    case 19:
      return (PERESOURCE *)&gDomainQueueMgmtLock;
    case 20:
      return (PERESOURCE *)&gDomainThreadRundownLock;
    case 21:
      return (PERESOURCE *)&gDomainEtwLock;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 256LL);
  return (PERESOURCE *)&gDomainDummyLock;
}
