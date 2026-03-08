/*
 * XREFs of KeIsKernelCetEnabled @ 0x140384804
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     PiIsDriverBlocked @ 0x14079DF64 (PiIsDriverBlocked.c)
 *     VslStartSecureProcessor @ 0x14094009C (VslStartSecureProcessor.c)
 *     KdInitSystem @ 0x140AAE040 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

bool KeIsKernelCetEnabled()
{
  return (_BYTE)KiKernelCetEnabled != 0;
}
