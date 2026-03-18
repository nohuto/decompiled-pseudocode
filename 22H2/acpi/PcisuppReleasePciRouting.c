/*
 * XREFs of PcisuppReleasePciRouting @ 0x1C009A1C4
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1C00998A4 (PcisuppAcquirePciInterfaces.c)
 *     PcisuppReleasePciInterfaces @ 0x1C009A0BC (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

void PcisuppReleasePciRouting()
{
  if ( InterruptRouting )
  {
    ExFreePoolWithTag(InterruptRouting, 0);
    InterruptRouting = 0LL;
  }
}
