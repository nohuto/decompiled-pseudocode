void CTopologyManager::OnDriverUnload(void)
{
  CMonitorTopology *v0; // rcx
  bool v1; // dl

  v0 = qword_1C0361320;
  if ( qword_1C0361320 )
  {
    v1 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v1,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (_DWORD)WPP_GLOBAL_Control,
        4,
        23,
        23,
        (__int64)&WPP_aeca42301358371308ca40d05b2a9235_Traceguids);
      v0 = qword_1C0361320;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v0, 0xFFFFFFFF) == 1 )
      Win32FreePool(v0);
    qword_1C0361320 = 0LL;
  }
}
