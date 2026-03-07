void __fastcall DesktopRecalc::OnMonitorRectsChanged(
        DesktopRecalc *this,
        struct tagWINDOWSTATION *a2,
        struct CMonitorTopology *a3,
        struct _DXGK_SET_DISPLAY_CONFIG_PARAMS_EX *a4)
{
  __int64 v7; // rcx
  struct CMonitorTopology *v8; // r12
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
    v7 = *(unsigned int *)a3;
  v8 = (struct CMonitorTopology *)(((unsigned __int64)a3 + 4) & -(__int64)(a3 != 0LL));
  if ( (unsigned __int8)RapidHPD::ProcessModeChange(v7, v8, a2) )
  {
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 97;
      LOBYTE(v15) = v14;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v10,
        v11,
        4,
        23,
        97,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids);
    }
  }
  else
  {
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
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
        23,
        98,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids);
    }
    v12 = CRapidHpdInfo::s_pRapidHpdInfo;
    v13 = 0LL;
    if ( CRapidHpdInfo::s_pRapidHpdInfo )
    {
      LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v9,
          v10,
          (__int64)gFullLog,
          3u,
          0x17u,
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
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v16);
}
