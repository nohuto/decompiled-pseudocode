/*
 * XREFs of FinalizeBootLogo @ 0x1404FEE3C
 * Callers:
 *     StartFirstUserProcess @ 0x140A4BB74 (StartFirstUserProcess.c)
 * Callees:
 *     InbvAcquireLock @ 0x1404FEB7C (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x1404FEC0C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1404FECAC (InbvReleaseLock.c)
 */

__int64 (*FinalizeBootLogo())(void)
{
  InbvAcquireLock();
  if ( !(unsigned int)InbvGetDisplayState() )
    VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
  PltRotBarStatus = 3;
  return InbvReleaseLock();
}
