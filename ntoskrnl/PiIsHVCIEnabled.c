/*
 * XREFs of PiIsHVCIEnabled @ 0x140956D1C
 * Callers:
 *     PiIsDriverBlocked @ 0x14079DF64 (PiIsDriverBlocked.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 */

bool PiIsHVCIEnabled()
{
  char v0; // bl
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 8LL;
  if ( (int)ZwQuerySystemInformation(103LL, (__int64)&v2) >= 0 )
    return (v2 & 0x40000000000LL) != 0;
  return v0;
}
