/*
 * XREFs of VfDifCaptureIoCallbacks @ 0x14037D8B0
 * Callers:
 *     IopLoadDriver @ 0x14073CD08 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A5E618 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ViDifCheckCallbackInterception @ 0x14037D908 (ViDifCheckCallbackInterception.c)
 *     ViDifCaptureIoCallbacks @ 0x1405A0BE8 (ViDifCaptureIoCallbacks.c)
 */

__int64 __fastcall VfDifCaptureIoCallbacks(__int64 a1)
{
  __int64 result; // rax

  result = ViDifCheckCallbackInterception();
  if ( (_BYTE)result )
    return ViDifCaptureIoCallbacks(a1);
  return result;
}
