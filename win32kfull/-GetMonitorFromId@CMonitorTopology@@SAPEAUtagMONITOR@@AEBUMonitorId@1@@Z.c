struct tagMONITOR *__fastcall CMonitorTopology::GetMonitorFromId(
        const struct CMonitorTopology::MonitorId *a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  CMonitorTopology *v5; // rdi
  __int64 v6; // rbp
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // r9
  bool v11; // bl
  int v12; // edx

  if ( *((_BYTE *)a1 + 21) )
  {
    v5 = qword_1C0361320;
    v6 = 0LL;
    v7 = 0;
    if ( *((_DWORD *)qword_1C0361320 + 2) )
    {
      while ( !(unsigned __int8)AreHashesEqual((char *)v5 + 72 * v7 + 60, a1, a3) )
      {
        v5 = qword_1C0361320;
        if ( ++v7 >= *((_DWORD *)qword_1C0361320 + 2) )
          return (struct tagMONITOR *)v6;
      }
      v6 = ValidateHmonitor(*((_QWORD *)v5 + 9 * v7 + 2), v8, a3, v9);
      if ( !v6 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 264LL);
    }
    return (struct tagMONITOR *)v6;
  }
  else
  {
    v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 14;
      LOBYTE(v12) = v11;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        a3,
        a4,
        3,
        23,
        14,
        (__int64)&WPP_aeca42301358371308ca40d05b2a9235_Traceguids);
    }
    return 0LL;
  }
}
