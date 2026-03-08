/*
 * XREFs of HalpTimerRegisterBuiltinPluginsCommon @ 0x1403A08C4
 * Callers:
 *     HalpTimerInitializeEarlyStallSource @ 0x1403A05F0 (HalpTimerInitializeEarlyStallSource.c)
 *     HalpInitializeTimers @ 0x1403A06E0 (HalpInitializeTimers.c)
 * Callees:
 *     HalpWdatDiscover @ 0x140375F28 (HalpWdatDiscover.c)
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403A08F8 (HalpTimerRegisterBuiltinPlugins.c)
 *     HalpHvDiscover @ 0x1403A09D8 (HalpHvDiscover.c)
 */

__int64 __fastcall HalpTimerRegisterBuiltinPluginsCommon(int a1)
{
  __int64 result; // rax

  result = HalpTimerRegisterBuiltinPlugins();
  if ( (int)result >= 0 && a1 == 1 )
  {
    result = HalpHvDiscover();
    if ( (int)result >= 0 )
      return HalpWdatDiscover();
  }
  return result;
}
