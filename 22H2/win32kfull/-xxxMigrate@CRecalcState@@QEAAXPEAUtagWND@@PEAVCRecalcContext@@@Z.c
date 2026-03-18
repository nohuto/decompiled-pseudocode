/*
 * XREFs of ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00C1394
 * Callers:
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext@@@Z @ 0x1C00C1F1C (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00C0F08 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@W4MigrateWindowOptions@@PEAK@Z @ 0x1C00C115C (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     ?GetMigrateMonitor@CRecalcState@@AEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00C1668 (-GetMigrateMonitor@CRecalcState@@AEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x1C00C3840 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

void __fastcall CRecalcState::xxxMigrate(CRecalcState *this, struct tagWND *a2, struct CRecalcContext *a3)
{
  char v6; // bl
  char v7; // dl
  int v8; // r15d
  __int64 v9; // r8
  struct tagMONITOR *MigrateMonitor; // r12
  char v11; // bp
  int v12; // eax
  int v13; // edx
  int v14; // r8d
  char v15; // al
  int v16; // edx
  int v17; // r9d
  void *v18; // r8

  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v7 = 0;
  }
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      7u,
      0x31u,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
      *(_QWORD *)a2,
      *(_DWORD *)(*((_QWORD *)this + 2) + 4LL));
  v8 = -(*(_BYTE *)a3 != 0);
  MigrateMonitor = CRecalcState::GetMigrateMonitor(this, a2, a3);
  if ( MigrateMonitor )
  {
    v11 = 0;
    if ( (gdwPUDFlags & 0x10000) != 0 && *((_DWORD *)this + 16) == 2 && *((_BYTE *)a3 + 40) )
    {
      v12 = CMonitorTopology::CompareToCurrent(*((_QWORD *)this + 2), 0LL, v9);
      if ( v12 == 16 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v13) = 0;
        }
        if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v13,
            v14,
            (unsigned int)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
            4,
            7,
            50,
            (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
        }
        *((_DWORD *)a2 + 80) |= 0x40000000u;
        v11 = 1;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v13) = 0;
        }
        if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v13,
            v14,
            (_DWORD)gFullLog,
            4,
            7,
            51,
            (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
            v12);
        }
      }
    }
    v15 = AdvancedWindowPos::xxxMigrateWindow(
            a2,
            (__int64)MigrateMonitor,
            *((_QWORD *)this + 2),
            (unsigned __int8)v8 + 2,
            (int *)a3 + 2);
    if ( v11 )
      *((_DWORD *)a2 + 80) &= ~0x40000000u;
    if ( (v15 & 1) != 0 )
    {
      *((_BYTE *)a3 + 12) = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v6 = 0;
      if ( (_BYTE)v16 || v6 )
      {
        v18 = &WPP_be08460427f83b68b58b8518e40b91a4_Traceguids;
        LOBYTE(v18) = v6;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          (_DWORD)v18,
          v17,
          5,
          7,
          52,
          (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
      }
    }
    *((_DWORD *)a3 + 1) = 4;
  }
}
