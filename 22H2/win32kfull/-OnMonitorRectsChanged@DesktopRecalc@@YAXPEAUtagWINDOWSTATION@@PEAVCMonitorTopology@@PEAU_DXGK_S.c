/*
 * XREFs of ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x1C00BFF48
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C004A500 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C006D000 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1C00BE6F8 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 *     ?ProcessModeChange@RapidHPD@@YA_NW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z @ 0x1C00BFEB8 (-ProcessModeChange@RapidHPD@@YA_NW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z.c)
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x1C00C03E0 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

void __fastcall DesktopRecalc::OnMonitorRectsChanged(
        DesktopRecalc *this,
        struct tagWINDOWSTATION *a2,
        struct CMonitorTopology *a3,
        struct _DXGK_SET_DISPLAY_CONFIG_PARAMS_EX *a4)
{
  CRapidHpdInfo *v7; // rcx
  struct CMonitorTopology *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // r9d
  const struct _GUID *v12; // r9
  volatile signed __int32 *v13; // rbx
  bool v14; // di
  int v15; // edx
  char v16; // [rsp+90h] [rbp+18h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v16);
  v7 = 0LL;
  if ( a3 )
    v7 = (CRapidHpdInfo *)*(unsigned int *)a3;
  v8 = (struct CMonitorTopology *)(((unsigned __int64)a3 + 4) & -(__int64)(a3 != 0LL));
  if ( RapidHPD::ProcessModeChange(v7, (const struct _GUID *)v8, a2) )
  {
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 97;
      LOBYTE(v15) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v10,
        v11,
        4,
        7,
        97,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
    }
  }
  else
  {
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        98,
        4,
        7,
        98,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
    }
    v12 = CRapidHpdInfo::s_pRapidHpdInfo;
    v13 = 0LL;
    if ( CRapidHpdInfo::s_pRapidHpdInfo )
    {
      LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v9,
          v10,
          (__int64)gFullLog,
          3u,
          7u,
          0xCu,
          (__int64)&WPP_cdd13d021a4138299c50903c2e0608fa_Traceguids,
          *(_DWORD *)(*(_QWORD *)CRapidHpdInfo::s_pRapidHpdInfo[2].Data4 + 4LL));
      v13 = *(volatile signed __int32 **)CRapidHpdInfo::s_pRapidHpdInfo[2].Data4;
      _InterlockedAdd(v13, 1u);
      CRapidHpdInfo::Delete(2u, v9, v10);
      if ( v13 )
        a2 = (struct tagWINDOWSTATION *)v13;
    }
    DesktopRecalc::StartRecalc(this, a2, v8, v12);
    if ( v13 && _InterlockedExchangeAdd(v13, 0xFFFFFFFF) == 1 )
      Win32FreePool((void *)v13);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v16, v9, v10);
}
