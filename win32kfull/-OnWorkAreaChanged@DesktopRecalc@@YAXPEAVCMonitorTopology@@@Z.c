void __fastcall DesktopRecalc::OnWorkAreaChanged(DesktopRecalc *this, struct CMonitorTopology *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  const struct _GUID *v5; // r9
  volatile signed __int32 *v6; // rbx
  char v7; // [rsp+68h] [rbp+10h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v7);
  v5 = CRapidHpdInfo::s_pRapidHpdInfo;
  v6 = 0LL;
  if ( CRapidHpdInfo::s_pRapidHpdInfo )
  {
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v3,
        v4,
        (__int64)gFullLog,
        3u,
        0x17u,
        0xCu,
        (__int64)&WPP_cdd13d021a4138299c50903c2e0608fa_Traceguids,
        *(_DWORD *)(*(_QWORD *)CRapidHpdInfo::s_pRapidHpdInfo[2].Data4 + 4LL));
    v6 = *(volatile signed __int32 **)CRapidHpdInfo::s_pRapidHpdInfo[2].Data4;
    _InterlockedIncrement(v6);
    CRapidHpdInfo::Delete(2u, v3, v4);
    if ( v6 )
      this = (DesktopRecalc *)v6;
  }
  DesktopRecalc::StartRecalc(0LL, this, 0LL, v5);
  if ( v6 && _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
    Win32FreePool((void *)v6);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v7);
}
