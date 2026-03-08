/*
 * XREFs of ?DisableHardwareCursor@CCursorState@@QEAAXU_LUID@@I@Z @ 0x180276828
 * Callers:
 *     ?DisableHardwareCursor@COverlayContext@@AEAAXXZ @ 0x1800CA2C8 (-DisableHardwareCursor@COverlayContext@@AEAAXXZ.c)
 * Callees:
 *     ?EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z @ 0x180276CA8 (-EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z.c)
 *     ?FindMonitorData@CCursorState@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMonitorData@CCursorState@@@std@@@std@@@std@@U_LUID@@I@Z @ 0x180276D34 (-FindMonitorData@CCursorState@@AEAA-AV-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UMonito.c)
 *     ?erase@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMonitorData@CCursorState@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMonitorData@CCursorState@@@std@@@std@@@2@@Z @ 0x180278964 (-erase@-$vector@UMonitorData@CCursorState@@V-$allocator@UMonitorData@CCursorState@@@std@@@std@@Q.c)
 */

void __fastcall CCursorState::DisableHardwareCursor(
        struct CCursorState::MonitorData **this,
        struct _LUID a2,
        unsigned int a3)
{
  struct CCursorState::MonitorData *v4; // rbx
  CCursorState *v5; // rcx
  struct CCursorState::MonitorData *v6; // [rsp+30h] [rbp+8h] BYREF

  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CCursorState::FindMonitorData)(this, &v6, a2, a3);
  v4 = v6;
  if ( v6 != this[11] )
  {
    EnterCriticalSection(&g_CursorManager);
    CCursorState::EnsureHardwareOverlayCleared(v5, v4);
    std::vector<CCursorState::MonitorData>::erase(this + 10, &v6, v4);
    LeaveCriticalSection(&g_CursorManager);
  }
}
