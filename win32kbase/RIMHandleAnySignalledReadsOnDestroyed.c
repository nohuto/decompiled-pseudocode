void __fastcall RIMHandleAnySignalledReadsOnDestroyed(__int64 a1)
{
  bool v2; // dl
  __int64 v3; // rcx
  bool v4; // dl
  __int64 v5; // r9
  __int64 v6; // r8
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rdx

  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      50,
      (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids);
  v3 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)a1 == 4 && (*(_DWORD *)(v3 + 260) & 8) != 0 )
  {
    v5 = *(_QWORD *)(v3 + 408);
    if ( (*(_DWORD *)(v3 + 256) & 0x2000) != 0 )
    {
      v6 = *(_QWORD *)(v3 + 96);
    }
    else
    {
      v6 = *(_QWORD *)(v3 + 416);
      if ( !v6 )
        v6 = *(_QWORD *)(v3 + 88);
    }
    if ( *(_DWORD *)(v5 + 848) )
    {
      v8 = *(_QWORD **)(v5 + 864);
      if ( (unsigned __int64)v8 >= MmUserProbeAddress )
        v8 = (_QWORD *)MmUserProbeAddress;
      if ( *v8 == v6 )
      {
        v9 = *(_QWORD **)(v5 + 864);
        if ( (unsigned __int64)v9 >= MmUserProbeAddress )
          v9 = (_QWORD *)MmUserProbeAddress;
        *v9 = -1LL;
      }
    }
    else
    {
      v7 = *(_QWORD **)(v5 + 864);
      if ( *v7 == v6 )
        *v7 = -1LL;
    }
  }
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      52,
      (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids);
}
