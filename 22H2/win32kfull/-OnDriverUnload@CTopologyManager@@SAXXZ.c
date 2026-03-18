/*
 * XREFs of ?OnDriverUnload@CTopologyManager@@SAXXZ @ 0x1C00BF49C
 * Callers:
 *     EditionBaseDriverUnloadUninitialize @ 0x1C00BECD0 (EditionBaseDriverUnloadUninitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void CTopologyManager::OnDriverUnload(void)
{
  CMonitorTopology *v0; // rcx
  bool v1; // dl

  v0 = qword_1C035E338;
  if ( qword_1C035E338 )
  {
    v1 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v1,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (_DWORD)WPP_GLOBAL_Control,
        4,
        7,
        22,
        (__int64)&WPP_b503bcdc7a733346aed43161a8297e0b_Traceguids);
      v0 = qword_1C035E338;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v0, 0xFFFFFFFF) == 1 )
      Win32FreePool(v0);
    qword_1C035E338 = 0LL;
  }
}
