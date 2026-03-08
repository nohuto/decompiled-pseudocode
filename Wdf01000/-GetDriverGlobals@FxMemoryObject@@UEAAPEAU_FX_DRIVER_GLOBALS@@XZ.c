/*
 * XREFs of ?GetDriverGlobals@FxMemoryObject@@UEAAPEAU_FX_DRIVER_GLOBALS@@XZ @ 0x1C00095B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_FX_DRIVER_GLOBALS *__fastcall FxMemoryObject::GetDriverGlobals(FxMemoryObject *this)
{
  return (_FX_DRIVER_GLOBALS *)this[-1].m_ChildListHead.Flink;
}
