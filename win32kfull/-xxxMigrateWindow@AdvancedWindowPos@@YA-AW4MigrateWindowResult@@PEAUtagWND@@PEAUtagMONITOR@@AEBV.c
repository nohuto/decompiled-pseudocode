/*
 * XREFs of ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@W4MigrateWindowOptions@@PEAK@Z @ 0x1C00FB208
 * Callers:
 *     ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00FB37C (-xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z @ 0x1C01EC8EC (-xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C022181C (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1C0229464 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C0031BD4 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x1C00FB0F4 (--1CSaveRestoreCheckPoint@@QEAA@XZ.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00FBCB8 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C023F6F0 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 */

__int64 __fastcall AdvancedWindowPos::xxxMigrateWindow(struct tagWND *a1, __int64 a2, __int64 a3, char a4, int *a5)
{
  unsigned int v6; // edi
  __int64 Prop; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int128 *v13; // rax
  __int128 v14; // xmm0
  int v16; // [rsp+20h] [rbp-58h]
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h]
  __int64 v19; // [rsp+48h] [rbp-30h] BYREF
  __int128 v20; // [rsp+50h] [rbp-28h]

  v6 = 0;
  Prop = GetProp((__int64)a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
  v18 = 0LL;
  v17 = 0LL;
  ThreadLock(a2, &v17);
  if ( Prop && ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) != 0 || IsSemiMaximized(a1)) )
    v6 = anonymous_namespace_::xxxMigrateWindowCheckpoint(a1, a4, (__int64)a5);
  v12 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v12 + 31) & 0x20) == 0 )
  {
    v19 = *(_QWORD *)a1;
    v13 = (__int128 *)GetProp((__int64)a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
    if ( v13 )
      v14 = *v13;
    else
      v14 = 0LL;
    v16 = *a5;
    v20 = v14;
    anonymous_namespace_::xxxMigrateWindowPosition((struct tagRECT *)a1, v16);
    CSaveRestoreCheckPoint::~CSaveRestoreCheckPoint((CSaveRestoreCheckPoint *)&v19);
  }
  ThreadUnlock1(v12, v10, v11);
  return v6;
}
