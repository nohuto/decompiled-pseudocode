/*
 * XREFs of ?GetDefaultIoTarget@FxMpDevice@@UEAAPEAVFxIoTarget@@XZ @ 0x1C0009580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

FxIoTarget *__fastcall FxMpDevice::GetDefaultIoTarget(FxMpDevice *this)
{
  return this->m_DefaultTarget;
}
