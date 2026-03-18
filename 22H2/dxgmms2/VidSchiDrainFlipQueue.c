/*
 * XREFs of VidSchiDrainFlipQueue @ 0x1C00B55E0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000B500 (VidSchIsTDRPending.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C00B5608 (VidSchiWaitForDrainFlipQueue.c)
 */

char __fastcall VidSchiDrainFlipQueue(struct _VIDSCH_GLOBAL *a1)
{
  char result; // al

  result = VidSchIsTDRPending((__int64)a1);
  if ( !result )
    return VidSchiWaitForDrainFlipQueue(a1);
  return result;
}
