__int64 __fastcall RIMGetMonitorPhysicalSize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // edx
  int v5; // r8d
  __int64 v6; // rcx
  signed int v7; // eax
  signed int v8; // ecx
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF

  v10 = 0;
  v11 = 0;
  v2 = a2;
  *(_OWORD *)a1 = 0LL;
  if ( !a2 )
    v2 = *((_QWORD *)gpDispInfo + 12);
  if ( (int)GetMonitorPhysicalDimensions(*(_QWORD *)(v2 + 80), &v10, &v11, 0LL, 0LL) < 0
    && ((v6 = *((_QWORD *)gpDispInfo + 12), v2 == v6)
     || (int)GetMonitorPhysicalDimensions(*(_QWORD *)(v6 + 80), &v10, &v11, 0LL, 0LL) < 0) )
  {
    *(_DWORD *)(a1 + 8) = 20320;
    *(_DWORD *)(a1 + 12) = 15240;
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v5,
        (_DWORD)gRimLog,
        3,
        1,
        17,
        (__int64)&WPP_aa84a250efe730432bc7145be823620d_Traceguids);
    }
  }
  else
  {
    v7 = 1000 * v10;
    v8 = 1000 * v11;
    *(_DWORD *)(a1 + 8) = 1000 * v10;
    *(_DWORD *)(a1 + 12) = v8;
    if ( v7 <= 0 || v8 <= 0 )
    {
      *(_DWORD *)(a1 + 8) = 20320;
      *(_DWORD *)(a1 + 12) = 15240;
    }
  }
  return a1;
}
