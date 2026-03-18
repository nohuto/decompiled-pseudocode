/*
 * XREFs of ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C006EB70
 * Callers:
 *     ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x1C0005B88 (-IsInputSuppressRequested@CBaseInput@@IEBA_NXZ.c)
 *     ThreadUnlock1 @ 0x1C0030C00 (ThreadUnlock1.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     HMUnlockObjectInternal @ 0x1C0039070 (HMUnlockObjectInternal.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C006D1B8 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C006EAC4 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly.c)
 *     ThreadUnlockWorker1 @ 0x1C008DB70 (ThreadUnlockWorker1.c)
 *     ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0144930 (-GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_POWERTRANSITIONSSTATE@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1C0146A58 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_POWERTRANSITIONSSTATE@@@-$DomainSharedBase@$$.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

PERESOURCE *__fastcall GetDomainLockRef(__int64 a1, __int64 a2, __int64 a3)
{
  switch ( (_DWORD)a1 )
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
    case 0xB:
      return (PERESOURCE *)&gDomainClientLibLock;
    case 0xA:
      return (PERESOURCE *)&gDomainWindowLock;
    case 0xD:
      return (PERESOURCE *)&gDomainPowerTransitionsStateLock;
    case 0xC:
      return (PERESOURCE *)&gDomainTlLock;
    case 0xE:
      return &gDomainHandleManagerLock;
    case 0xF:
      return (PERESOURCE *)&gDomainRawInputLock;
    case 0x10:
      return (PERESOURCE *)&gDomainAsyncKeyStateLock;
    case 0x11:
      return (PERESOURCE *)&gDomainJobLock;
    case 6:
      return (PERESOURCE *)&gDomainForegroundLock;
    case 7:
      return (PERESOURCE *)&gDomainActiveLock;
    case 0x12:
      return (PERESOURCE *)&gDomainInputDelegationLock;
    case 0x13:
      return (PERESOURCE *)&gDomainQueueMgmtLock;
    case 0x14:
      return (PERESOURCE *)&gDomainThreadRundownLock;
    case 0x15:
      return (PERESOURCE *)&gDomainEtwLock;
  }
  MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  return (PERESOURCE *)&gDomainDummyLock;
}
