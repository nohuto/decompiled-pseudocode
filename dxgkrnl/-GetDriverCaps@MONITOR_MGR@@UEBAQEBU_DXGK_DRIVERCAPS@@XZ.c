/*
 * XREFs of ?GetDriverCaps@MONITOR_MGR@@UEBAQEBU_DXGK_DRIVERCAPS@@XZ @ 0x1C01E04E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct _DXGK_DRIVERCAPS *__fastcall MONITOR_MGR::GetDriverCaps(MONITOR_MGR *this)
{
  return (const struct _DXGK_DRIVERCAPS *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 2216LL);
}
