/*
 * XREFs of VfDifCaptureIoCallbacks @ 0x1403035C4
 * Callers:
 *     VfTargetReplaceIoCallbacks @ 0x1405CCE38 (VfTargetReplaceIoCallbacks.c)
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140B58C28 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ViDifCheckCallbackInterception @ 0x140303BC8 (ViDifCheckCallbackInterception.c)
 *     ViDifCaptureIoCallbacks @ 0x1405CCB9C (ViDifCaptureIoCallbacks.c)
 */

char __fastcall VfDifCaptureIoCallbacks(__int64 a1)
{
  char result; // al

  result = ViDifCheckCallbackInterception();
  if ( result )
  {
    ViDifCaptureIoCallbacks(a1);
    return 1;
  }
  return result;
}
