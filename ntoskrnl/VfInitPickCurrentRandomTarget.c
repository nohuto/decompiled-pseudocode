/*
 * XREFs of VfInitPickCurrentRandomTarget @ 0x140ABFC94
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x140AD7704 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     <none>
 */

__int64 VfInitPickCurrentRandomTarget()
{
  __int64 result; // rax

  if ( !VfRandomVerifiedDrivers )
    return 0LL;
  ++ViLoadedDriversCount;
  result = 1LL;
  if ( ((*(char *)(((unsigned __int64)(unsigned int)ViLoadedDriversCount >> 3) + qword_140D70680) >> (ViLoadedDriversCount & 7)) & 1) == 0 )
    return 0LL;
  --VfRandomVerifiedDrivers;
  return result;
}
