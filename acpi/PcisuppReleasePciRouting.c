/*
 * XREFs of PcisuppReleasePciRouting @ 0x1C009A1B4
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1C0099894 (PcisuppAcquirePciInterfaces.c)
 *     PcisuppReleasePciInterfaces @ 0x1C009A0AC (PcisuppReleasePciInterfaces.c)
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
