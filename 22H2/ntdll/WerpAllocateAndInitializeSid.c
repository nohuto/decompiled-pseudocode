/*
 * XREFs of WerpAllocateAndInitializeSid @ 0x1800DD76C
 * Callers:
 *     SendMessageToWERService @ 0x1800DD34C (SendMessageToWERService.c)
 * Callees:
 *     RtlInitializeSid @ 0x180040070 (RtlInitializeSid.c)
 *     ZwAllocateVirtualMemory @ 0x18009D7E0 (ZwAllocateVirtualMemory.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     WerpFreeSid @ 0x1800DDA7C (WerpFreeSid.c)
 */

__int64 __fastcall WerpAllocateAndInitializeSid(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  if ( a11 )
    return (unsigned int)ZwAllocateVirtualMemory();
  else
    return 3221225485LL;
}
