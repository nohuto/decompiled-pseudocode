/*
 * XREFs of ?GetDriverGlobals@FxRequestOutputBuffer@@UEAAPEAU_FX_DRIVER_GLOBALS@@XZ @ 0x1C0009620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

FxRequestOutputBuffer_vtbl *__fastcall FxRequestOutputBuffer::GetDriverGlobals(FxRequestOutputBuffer *this)
{
  return this[-16].__vftable;
}
