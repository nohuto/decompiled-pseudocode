/*
 * XREFs of ?SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z @ 0x1C00C1260
 * Callers:
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext@@@Z @ 0x1C00C1F1C (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C006696C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00C23C4 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@.c)
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x1C00C3840 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1C02265BC (-s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 */

void __fastcall CRecalcProp::SetStateAfterProcessing(CRecalcProp *this, struct CMonitorTopology *a2, __int64 a3)
{
  char v3; // bl
  unsigned int v6; // eax
  int v7; // edx
  int v8; // r8d
  __int64 v9; // r9
  char v10; // dl
  const char *v11; // r9

  v3 = 1;
  if ( (unsigned int)(*((_DWORD *)this + 6) - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2568LL);
  v6 = CMonitorTopology::CompareToCurrent(a2, 0LL, a3);
  *((_DWORD *)this + 6) = *((_QWORD *)this + 4) != 0LL;
  v9 = v6;
  if ( v6 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v7) = 0;
    }
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        (_DWORD)gFullLog,
        4,
        7,
        79,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
        v6);
    }
    if ( (unsigned __int8)CRecalcProp::CreateForTopologyChange(**((_QWORD **)this + 2), a2, 0LL, v9) )
      CRecalcProp::s_PostRecalcForWindow(*((struct tagWND **)this + 2));
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v10 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v3 = 0;
  if ( v10 || v3 )
  {
    v11 = "has pending recalc state";
    if ( !*((_QWORD *)this + 4) )
      v11 = "in free state";
    WPP_RECORDER_AND_TRACE_SF_qs(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v3,
      (__int64)gFullLog,
      5u,
      7u,
      0x50u,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
      **((_QWORD **)this + 2),
      v11);
  }
}
