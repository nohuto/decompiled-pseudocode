/*
 * XREFs of ?UpdateCurrent@CTopologyManager@@SAXXZ @ 0x1C0067830
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0063D18 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x1C0067928 (-CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ.c)
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@XZ @ 0x1C0067FB0 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void CTopologyManager::UpdateCurrent(void)
{
  struct CMonitorTopology *TopologySnapshot; // rax
  int v1; // edx
  int v2; // r8d
  struct CMonitorTopology *v3; // rbx
  int v4; // edx
  int v5; // r8d
  void *v6; // rdx

  TopologySnapshot = CMonitorTopology::CreateTopologySnapshot();
  v3 = TopologySnapshot;
  if ( TopologySnapshot )
  {
    if ( !qword_1C02965B0 )
    {
LABEL_5:
      qword_1C02965B0 = v3;
      return;
    }
    if ( (unsigned int)CMonitorTopology::CompareToCurrent(TopologySnapshot) )
    {
      v6 = qword_1C02965B0;
      qword_1C02965B0 = 0LL;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
      {
        if ( v6 )
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            v6);
      }
      goto LABEL_5;
    }
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v5,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        27,
        19,
        (__int64)&WPP_7ce4f07ab0303d88d561900b9efa555c_Traceguids);
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 1 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v3);
  }
  else
  {
    LOBYTE(v1) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v1,
        v2,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        27,
        18,
        (__int64)&WPP_7ce4f07ab0303d88d561900b9efa555c_Traceguids);
    }
  }
}
