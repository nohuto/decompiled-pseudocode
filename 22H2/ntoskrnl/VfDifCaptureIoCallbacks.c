/*
 * XREFs of VfDifCaptureIoCallbacks @ 0x140209F48
 * Callers:
 *     VfTargetReplaceIoCallbacks @ 0x1405CF2E8 (VfTargetReplaceIoCallbacks.c)
 *     IopLoadDriver @ 0x140794AE8 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140B41264 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ViDifCheckCallbackInterception @ 0x14020A54C (ViDifCheckCallbackInterception.c)
 *     ViDifCaptureIoCallbacks @ 0x1405CF04C (ViDifCaptureIoCallbacks.c)
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
