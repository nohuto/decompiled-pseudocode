void __fastcall CRecalcState::xxxMigrate(CRecalcState *this, struct tagWND *a2, struct CRecalcContext *a3)
{
  char v6; // bl
  char v7; // dl
  __int64 *v8; // rdi
  int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // r12
  __int64 v15; // r8
  __int64 *v16; // rsi
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  char v20; // dl
  char v21; // al
  int v22; // edx
  int v23; // r9d
  void *v24; // r8
  __int64 v25; // [rsp+40h] [rbp-38h]
  struct tagMONITOR *MigrateMonitor; // [rsp+90h] [rbp+18h]

  v6 = 1;
  v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = (__int64 *)((char *)this + 16);
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0x17u,
      0x31u,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
      *(_QWORD *)a2,
      *(_DWORD *)(*((_QWORD *)this + 2) + 4LL));
  }
  else
  {
    v8 = (__int64 *)((char *)this + 16);
  }
  v9 = -(*(_BYTE *)a3 != 0);
  MigrateMonitor = CRecalcState::GetMigrateMonitor(this, a2, a3);
  if ( MigrateMonitor )
  {
    v14 = 0;
    v16 = v8;
    if ( (unsigned int)Feature_AnimateWorkAreaChanges__private_IsEnabledDeviceUsage(v11, v10, v12, v13)
      && (gdwPUDFlags & 0x10000) != 0
      && *((_DWORD *)this + 16) == 2
      && *((_BYTE *)a3 + 40) )
    {
      v16 = (__int64 *)((char *)this + 16);
      v19 = CMonitorTopology::CompareToCurrent(*((_QWORD *)this + 2), 0LL, v15);
      if ( v19 == 16 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
          || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v17) = 0;
        }
        if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v17,
            v18,
            (unsigned int)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
            4,
            23,
            50,
            (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids);
        }
        *((_DWORD *)a2 + 80) |= 0x40000000u;
        v14 = 1;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
          || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v20 = 0;
        }
        if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v25) = v19;
          WPP_RECORDER_AND_TRACE_SF_D(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v20,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            4u,
            0x17u,
            0x33u,
            (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
            v25);
        }
      }
    }
    v21 = AdvancedWindowPos::xxxMigrateWindow(a2, (__int64)MigrateMonitor, *v16, (unsigned __int8)v9 + 2, (int *)a3 + 2);
    if ( v14 )
      *((_DWORD *)a2 + 80) &= ~0x40000000u;
    if ( (v21 & 1) != 0 )
    {
      *((_BYTE *)a3 + 12) = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (LOBYTE(v22) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v22) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v6 = 0;
      if ( (_BYTE)v22 || v6 )
      {
        v24 = &WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids;
        LOBYTE(v24) = v6;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v22,
          (_DWORD)v24,
          v23,
          5,
          23,
          52,
          (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids);
      }
    }
    *((_DWORD *)a3 + 1) = 4;
  }
}
