void CTopologyManager::UpdateCurrent(void)
{
  struct CMonitorTopology *TopologySnapshot; // rax
  int v1; // edx
  __int64 v2; // r8
  CMonitorTopology *v3; // rbx
  int v4; // edx
  int v5; // r8d
  CMonitorTopology *v6; // rcx

  TopologySnapshot = CMonitorTopology::CreateTopologySnapshot();
  v3 = TopologySnapshot;
  if ( TopologySnapshot )
  {
    if ( !qword_1C0361320 )
    {
LABEL_6:
      qword_1C0361320 = v3;
      return;
    }
    if ( (unsigned int)CMonitorTopology::CompareToCurrent(TopologySnapshot, 0LL, v2) )
    {
      v6 = qword_1C0361320;
      qword_1C0361320 = 0LL;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
        Win32FreePool(v6);
      goto LABEL_6;
    }
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v5,
        22,
        4,
        23,
        22,
        (__int64)&WPP_aeca42301358371308ca40d05b2a9235_Traceguids);
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 1 )
      Win32FreePool(v3);
  }
  else
  {
    LOBYTE(v1) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v1,
        v2,
        21,
        2,
        23,
        21,
        (__int64)&WPP_aeca42301358371308ca40d05b2a9235_Traceguids);
    }
  }
}
