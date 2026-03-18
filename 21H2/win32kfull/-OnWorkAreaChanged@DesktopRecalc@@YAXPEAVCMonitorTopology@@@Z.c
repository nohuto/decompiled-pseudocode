/*
 * XREFs of ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x1C01222F0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1C0122BD0 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@W4StartRecalcOption@@@Z @ 0x1C015CD50 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@W4StartRec.c)
 */

void __fastcall DesktopRecalc::OnWorkAreaChanged(DesktopRecalc *this, struct CMonitorTopology *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  char v8; // [rsp+58h] [rbp+10h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v8);
  if ( CRapidHpdInfo::s_pRapidHpdInfo )
  {
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        v4,
        12,
        3,
        23,
        12,
        (__int64)&WPP_09036311ad093020396ace1b470b3bee_Traceguids);
    CRapidHpdInfo::Delete(2LL, v3, v4, v5);
  }
  DesktopRecalc::StartRecalc(0LL, this, 0LL, 0LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v8, v6, v7);
}
