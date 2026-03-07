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
