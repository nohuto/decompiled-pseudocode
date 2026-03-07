char __fastcall CRecalcState::MinimizeOnMonitorRemove(
        CRecalcState *this,
        struct tagWND *a2,
        const struct CMonitorTopology::MonitorData *a3,
        const struct CRecalcContext *a4)
{
  DesktopRecalcSettings *v8; // rcx
  __int64 v10; // rdx
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v11; // r8
  int v12; // r9d
  PDEVICE_OBJECT v13; // rcx
  char i; // bl
  __int16 v15; // ax
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int128 v18; // xmm0
  int v19; // edx
  int v20; // r8d
  __int64 v21; // r9
  __int64 v22; // [rsp+50h] [rbp-68h] BYREF
  int v23; // [rsp+58h] [rbp-60h]
  int v24; // [rsp+5Ch] [rbp-5Ch]
  __int128 v25; // [rsp+60h] [rbp-58h]
  int v26; // [rsp+70h] [rbp-48h]

  if ( !CRecalcState::IsWindowEligibleForMinimize(this, a2) || !DesktopRecalcSettings::ShouldMinimizeOnMonitorRemove(v8) )
    return 0;
  if ( *(_BYTE *)a4 )
  {
    v13 = WPP_GLOBAL_Control;
    i = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      i = 0;
    if ( !(_BYTE)v10 && !i )
      return 0;
    v15 = 41;
    goto LABEL_30;
  }
  v10 = *((_QWORD *)this + 2);
  v16 = 0;
  for ( i = 1; v16 < *(_DWORD *)(v10 + 8); ++v16 )
  {
    v17 = v10 + 8 * (v16 + 8LL * v16 + 2);
    if ( a3 != (const struct CMonitorTopology::MonitorData *)v17
      && CMonitorTopology::GetMonitorFromId(
           (const struct CMonitorTopology::MonitorId *)(v17 + 44),
           v10,
           (__int64)v11,
           v12) )
    {
      break;
    }
    v10 = *((_QWORD *)this + 2);
  }
  if ( v16 == *(_DWORD *)(*((_QWORD *)this + 2) + 8LL) )
  {
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      i = 0;
    if ( !(_BYTE)v10 && !i )
      return 0;
    v15 = 42;
LABEL_30:
    LOBYTE(v11) = i;
    WPP_RECORDER_AND_TRACE_SF_(
      v13->AttachedDevice,
      v10,
      (_DWORD)v11,
      v12,
      5,
      23,
      v15,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids);
    return 0;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v10) = 0;
  }
  LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      (_DWORD)v11,
      v12,
      4,
      23,
      43,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids);
  v18 = *(_OWORD *)((char *)this + 28);
  v22 = 0LL;
  v23 = 2;
  v25 = v18;
  v24 = 19;
  v26 = 0;
  AdvancedWindowPos::xxxApplyWindowPos(a2, (struct tagWND *)&v22, v11);
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 31LL) & 0x20) == 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      i = 0;
    }
    if ( i || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        i,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        v21,
        3u,
        0x17u,
        0x2Cu,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
        *(_QWORD *)a2);
    return 0;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
    || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v19) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v20) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v20) = 0;
  }
  if ( (_BYTE)v19 || (_BYTE)v20 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v19,
      v20,
      v21,
      5,
      23,
      45,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids);
  return 1;
}
