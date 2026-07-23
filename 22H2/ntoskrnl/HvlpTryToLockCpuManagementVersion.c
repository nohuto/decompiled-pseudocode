/*
 * XREFs of HvlpTryToLockCpuManagementVersion @ 0x1404FA6D0
 * Callers:
 *     HvlpDetermineEnlightenments @ 0x1404FA044 (HvlpDetermineEnlightenments.c)
 * Callees:
 *     HvlpGetRegister64 @ 0x1404F9E90 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1404F9F80 (HvlpSetRegister64.c)
 */

char HvlpTryToLockCpuManagementVersion()
{
  char v0; // bl
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 1LL;
  v0 = 0;
  HvlpSetRegister64(589831, 1uLL);
  HvlpGetRegister64(589831, &v2);
  if ( (v2 & 0x4000000000000000LL) != 0 )
  {
    HvlpSetRegister64(589831, 0x8000000000000001uLL);
    return 1;
  }
  return v0;
}
