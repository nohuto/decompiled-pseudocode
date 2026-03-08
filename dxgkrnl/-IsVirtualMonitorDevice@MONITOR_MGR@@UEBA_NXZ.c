/*
 * XREFs of ?IsVirtualMonitorDevice@MONITOR_MGR@@UEBA_NXZ @ 0x1C01D32B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MONITOR_MGR::IsVirtualMonitorDevice(MONITOR_MGR *this)
{
  return (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 436LL) & 0x40000) != 0;
}
