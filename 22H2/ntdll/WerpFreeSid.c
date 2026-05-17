/*
 * XREFs of WerpFreeSid @ 0x1800DDA7C
 * Callers:
 *     SendMessageToWERService @ 0x1800DD34C (SendMessageToWERService.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DD76C (WerpAllocateAndInitializeSid.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009D8A0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall WerpFreeSid(__int64 a1)
{
  if ( a1 )
    return ZwFreeVirtualMemory();
  else
    return 3221225485LL;
}
