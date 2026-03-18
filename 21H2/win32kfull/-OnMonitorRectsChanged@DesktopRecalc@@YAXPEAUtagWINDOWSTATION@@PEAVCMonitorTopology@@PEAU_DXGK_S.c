/*
 * XREFs of ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@W4StartRecalcOption@@@Z @ 0x1C015CB60
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00F2300 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?ProcessModeChange@RapidHPD@@YA_NW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z @ 0x1C011E624 (-ProcessModeChange@RapidHPD@@YA_NW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1C0122BD0 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@W4StartRecalcOption@@@Z @ 0x1C015CD50 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@W4StartRec.c)
 */

void __fastcall DesktopRecalc::OnMonitorRectsChanged(
        __int64 a1,
        struct CMonitorTopology *a2,
        unsigned int *a3,
        unsigned int a4)
{
  CRapidHpdInfo *v8; // rcx
  const struct _GUID *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r9d
  bool v13; // bl
  int v14; // edx
  char v15; // bl
  int v16; // edx
  char v17; // [rsp+80h] [rbp+18h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v17);
  v8 = 0LL;
  if ( a3 )
    v8 = (CRapidHpdInfo *)*a3;
  v9 = (const struct _GUID *)((unsigned __int64)(a3 + 1) & -(__int64)(a3 != 0LL));
  if ( RapidHPD::ProcessModeChange(v8, v9, a2) )
  {
    v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 88;
      LOBYTE(v14) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v11,
        v12,
        4,
        23,
        88,
        (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
    }
  }
  else
  {
    v15 = 1;
    LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v11,
        89,
        4,
        23,
        89,
        (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
    }
    if ( CRapidHpdInfo::s_pRapidHpdInfo )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v15 = 0;
      }
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 12;
        LOBYTE(v16) = v15;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v11,
          v12,
          3,
          23,
          12,
          (__int64)&WPP_09036311ad093020396ace1b470b3bee_Traceguids);
      }
      CRapidHpdInfo::Delete(2u, v10, v11);
    }
    DesktopRecalc::StartRecalc(a1, a2, v9, a4);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v17, v10, v11);
}
