/*
 * XREFs of ?GetDriverWorkarounds@MONITOR_MGR@@UEBAAEBUDRIVER_WORKAROUNDS@@XZ @ 0x1C01E0520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct DRIVER_WORKAROUNDS *__fastcall MONITOR_MGR::GetDriverWorkarounds(MONITOR_MGR *this)
{
  return *(const struct DRIVER_WORKAROUNDS **)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 2824LL);
}
