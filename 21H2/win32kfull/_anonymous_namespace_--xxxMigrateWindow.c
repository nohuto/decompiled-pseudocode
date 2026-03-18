/*
 * XREFs of _anonymous_namespace_::xxxMigrateWindow @ 0x1C00B28A8
 * Callers:
 *     ?xxxMigrate@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1C00AFC14 (-xxxMigrate@CRecalcState@@QEAA-AW4ProcessRecalcResult@@PEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@AEBVCMonitorTopology@@@Z @ 0x1C023B3FC (-xxxFullscreenRestore@CRecalcState@@QEAA-AW4ProcessRecalcResult@@PEAUtagWND@@AEBVCMonitorTopolog.c)
 *     ?xxxMigrateWindowToMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z @ 0x1C024BD78 (-xxxMigrateWindowToMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z.c)
 * Callees:
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     ?HasMaximizedState@@YA_NPEBUtagWND@@@Z @ 0x1C006F94C (-HasMaximizedState@@YA_NPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00B1A70 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ??0CSaveRestoreCheckPoint@@QEAA@PEAUtagWND@@@Z @ 0x1C0209364 (--0CSaveRestoreCheckPoint@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x1C02093B0 (--1CSaveRestoreCheckPoint@@QEAA@XZ.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C024B6D4 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 */

__int64 __fastcall anonymous_namespace_::xxxMigrateWindow(
        struct tagWND *a1,
        __int64 a2,
        struct tagRECT *a3,
        __int64 a4,
        __int64 a5,
        char a6,
        unsigned int *a7)
{
  unsigned int v9; // ebx
  __int64 Prop; // rax
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int128 v18; // [rsp+40h] [rbp-58h] BYREF
  __int64 v19; // [rsp+50h] [rbp-48h]
  _BYTE v20[24]; // [rsp+58h] [rbp-40h] BYREF

  v9 = 0;
  Prop = GetProp((__int64)a1, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
  v13 = Prop;
  if ( Prop && !a4 )
    LODWORD(a4) = Prop;
  v18 = 0LL;
  v19 = 0LL;
  ThreadLock(a2, (__int64 *)&v18);
  if ( v13 && ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 || HasMaximizedState(a1)) )
    v9 = anonymous_namespace_::xxxMigrateWindowCheckpoint((_DWORD)a1, v13, a2, a4, a5, a6, (__int64)a7);
  v16 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v16 + 31) & 0x20) == 0 )
  {
    CSaveRestoreCheckPoint::CSaveRestoreCheckPoint((CSaveRestoreCheckPoint *)v20, a1);
    v9 |= anonymous_namespace_::xxxMigrateWindowPosition(a1, a2, a3, a5, *a7);
    CSaveRestoreCheckPoint::~CSaveRestoreCheckPoint((CSaveRestoreCheckPoint *)v20);
  }
  ThreadUnlock1(v16, v14, v15);
  return v9;
}
