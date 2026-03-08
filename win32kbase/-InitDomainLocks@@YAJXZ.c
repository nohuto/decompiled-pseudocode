/*
 * XREFs of ?InitDomainLocks@@YAJXZ @ 0x1C00C310C
 * Callers:
 *     InitCreateUserCrit @ 0x1C031F55C (InitCreateUserCrit.c)
 * Callees:
 *     ?LockInitialize@tagDomLock@@QEBAJXZ @ 0x1C00C3310 (-LockInitialize@tagDomLock@@QEBAJXZ.c)
 */

__int64 InitDomainLocks(void)
{
  __int64 result; // rax

  gObjDummyLock = 0LL;
  qword_1C02D2E70 = 0LL;
  gHidCountersLock = 0LL;
  qword_1C02D2EA8 = 0LL;
  gpsiLock = 0LL;
  qword_1C02D2E90 = 0LL;
  gValidLockListEntryPushLock = 0LL;
  dword_1C02D2E78 = 0;
  dword_1C02D2EB0 = 0;
  dword_1C02D2E98 = 0;
  result = tagDomLock::LockInitialize((tagDomLock *)&gDomainProcessInfoLock);
  if ( (int)result >= 0 )
  {
    result = tagDomLock::LockInitialize((tagDomLock *)&gDomainThreadInfoLock);
    if ( (int)result >= 0 )
    {
      result = tagDomLock::LockInitialize((tagDomLock *)&gDomainPostLock);
      if ( (int)result >= 0 )
      {
        result = tagDomLock::LockInitialize((tagDomLock *)&gDomainQueueLock);
        if ( (int)result >= 0 )
        {
          result = tagDomLock::LockInitialize((tagDomLock *)&gDomainHookLock);
          if ( (int)result >= 0 )
          {
            result = tagDomLock::LockInitialize((tagDomLock *)&gDomainWinEventLock);
            if ( (int)result >= 0 )
            {
              result = tagDomLock::LockInitialize((tagDomLock *)&gDomainWindowLock);
              if ( (int)result >= 0 )
              {
                result = tagDomLock::LockInitialize((tagDomLock *)&gDomainHandleManagerLock);
                if ( (int)result >= 0 )
                {
                  result = tagDomLock::LockInitialize((tagDomLock *)&gDomainClientLibLock);
                  if ( (int)result >= 0 )
                  {
                    result = tagDomLock::LockInitialize((tagDomLock *)&gDomainPowerTransitionsStateLock);
                    if ( (int)result >= 0 )
                    {
                      result = tagDomLock::LockInitialize((tagDomLock *)&gDomainDummyLock);
                      if ( (int)result >= 0 )
                      {
                        result = tagDomLock::LockInitialize((tagDomLock *)&gDomainTlLock);
                        if ( (int)result >= 0 )
                        {
                          result = tagDomLock::LockInitialize((tagDomLock *)&gDomainRawInputLock);
                          if ( (int)result >= 0 )
                          {
                            result = tagDomLock::LockInitialize((tagDomLock *)&gDomainAsyncKeyStateLock);
                            if ( (int)result >= 0 )
                            {
                              result = tagDomLock::LockInitialize((tagDomLock *)&gDomainDesktopLock);
                              if ( (int)result >= 0 )
                              {
                                result = tagDomLock::LockInitialize((tagDomLock *)&gDomainJobLock);
                                if ( (int)result >= 0 )
                                {
                                  result = tagDomLock::LockInitialize((tagDomLock *)&gDomainForegroundLock);
                                  if ( (int)result >= 0 )
                                  {
                                    result = tagDomLock::LockInitialize((tagDomLock *)&gDomainActiveLock);
                                    if ( (int)result >= 0 )
                                    {
                                      result = tagDomLock::LockInitialize((tagDomLock *)&gDomainInputDelegationLock);
                                      if ( (int)result >= 0 )
                                      {
                                        result = tagDomLock::LockInitialize((tagDomLock *)&gDomainQueueMgmtLock);
                                        if ( (int)result >= 0 )
                                        {
                                          result = tagDomLock::LockInitialize((tagDomLock *)&gDomainThreadRundownLock);
                                          if ( (int)result >= 0 )
                                            return tagDomLock::LockInitialize((tagDomLock *)&gDomainEtwLock);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
