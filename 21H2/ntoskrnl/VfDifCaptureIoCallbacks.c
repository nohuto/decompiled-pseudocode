/*
 * XREFs of VfDifCaptureIoCallbacks @ 0x14037DA90
 * Callers:
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A5F618 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ViDifCheckCallbackInterception @ 0x14037DAE8 (ViDifCheckCallbackInterception.c)
 *     ViDifCaptureIoCallbacks @ 0x1405A0ED8 (ViDifCaptureIoCallbacks.c)
 */

__int64 __fastcall VfDifCaptureIoCallbacks(__int64 a1)
{
  __int64 result; // rax

  result = ViDifCheckCallbackInterception();
  if ( (_BYTE)result )
    return ViDifCaptureIoCallbacks(a1);
  return result;
}
