/*
 * XREFs of PopGetLockConsoleTimeoutUnsafe @ 0x1405D8EC8
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1405D8DC4 (PopSessionWinlogonNotification.c)
 *     PopGetLockConsoleTimeout @ 0x14067208C (PopGetLockConsoleTimeout.c)
 *     PopActiveLockScreenPowerRequest @ 0x1408F5090 (PopActiveLockScreenPowerRequest.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 PopGetLockConsoleTimeoutUnsafe()
{
  unsigned int v0; // ebx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  v0 = PopAdaptiveLockConsoleTimeout;
  if ( PopAdaptiveLockConsoleTimeout > (unsigned int)PopDisplayTimeout )
  {
    if ( PopEnforceConsoleLockScreenTimeout )
    {
      if ( (unsigned int)dword_140C02228 > 5 && tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL) )
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02228,
          (unsigned __int8 *)byte_140029D9B,
          0LL,
          0LL,
          2u,
          &v2);
    }
    else
    {
      return (unsigned int)PopDisplayTimeout;
    }
  }
  return v0;
}
