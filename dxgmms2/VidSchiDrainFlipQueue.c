/*
 * XREFs of VidSchiDrainFlipQueue @ 0x1C00B5A60
 * Callers:
 *     <none>
 * Callees:
 *     VidSchIsTDRPending @ 0x1C0007920 (VidSchIsTDRPending.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C00B5A88 (VidSchiWaitForDrainFlipQueue.c)
 */

char __fastcall VidSchiDrainFlipQueue(struct _VIDSCH_GLOBAL *a1)
{
  char result; // al

  result = VidSchIsTDRPending((__int64)a1);
  if ( !result )
    return VidSchiWaitForDrainFlipQueue(a1);
  return result;
}
