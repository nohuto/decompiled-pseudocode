/*
 * XREFs of ??8CachedLuminanceData@MonitorColorState@DxgMonitor@@QEBA_NAEBU012@@Z @ 0x1C03C9350
 * Callers:
 *     ?SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z @ 0x1C03C9714 (-SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DxgMonitor::MonitorColorState::CachedLuminanceData::operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2];
}
