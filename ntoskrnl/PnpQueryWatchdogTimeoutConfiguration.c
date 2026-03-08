/*
 * XREFs of PnpQueryWatchdogTimeoutConfiguration @ 0x140B61878
 * Callers:
 *     PnpInitializePnpWatchdogs @ 0x140B6180C (PnpInitializePnpWatchdogs.c)
 * Callees:
 *     PnpGetRegistryDword @ 0x14039BC5C (PnpGetRegistryDword.c)
 */

__int64 __fastcall PnpQueryWatchdogTimeoutConfiguration(void *a1)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( (int)PnpGetRegistryDword(a1, (__int64)L"WatchdogFirstChanceInMs", &v3) < 0
    || (PnpWatchdogTimeoutFirstChance = v3, v3 - 1 > 0xFFFFFFFD) )
  {
    PnpWatchdogTimeoutFirstChance = 10000;
  }
  result = PnpGetRegistryDword(a1, (__int64)L"WatchdogSecondChanceInMs", &v3);
  if ( (int)result < 0 || (result = v3, PnpWatchdogTimeoutSecondChance = v3, PnpWatchdogTimeoutFirstChance >= v3) )
    PnpWatchdogTimeoutSecondChance = 360000;
  return result;
}
