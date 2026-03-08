/*
 * XREFs of FinalizeBootLogo @ 0x14054C3BC
 * Callers:
 *     StartFirstUserProcess @ 0x140B662B4 (StartFirstUserProcess.c)
 * Callees:
 *     InbvAcquireLock @ 0x14054C0FC (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x14054C18C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x14054C22C (InbvReleaseLock.c)
 */

__int64 (*FinalizeBootLogo())(void)
{
  InbvAcquireLock();
  if ( !(unsigned int)InbvGetDisplayState() )
    VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
  PltRotBarStatus = 3;
  return InbvReleaseLock();
}
