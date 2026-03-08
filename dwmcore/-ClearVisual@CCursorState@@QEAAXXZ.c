/*
 * XREFs of ?ClearVisual@CCursorState@@QEAAXXZ @ 0x1802764C8
 * Callers:
 *     ??1CCursorVisual@@MEAA@XZ @ 0x1802253C0 (--1CCursorVisual@@MEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@YAXPEAUMonitorData@CCursorState@@QEAU12@AEAV?$allocator@UMonitorData@CCursorState@@@0@@Z @ 0x180274A14 (--$_Destroy_range@V-$allocator@UMonitorData@CCursorState@@@std@@@std@@YAXPEAUMonitorData@CCursor.c)
 *     ?EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z @ 0x180276CA8 (-EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z.c)
 */

void __fastcall CCursorState::ClearVisual(CCursorState *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  CCursorState *v4; // rcx
  struct CCursorState::MonitorData *v5; // rsi
  struct CCursorState::MonitorData *i; // rdi

  v2 = *((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v2 )
  {
    v3 = *(int *)(*(_QWORD *)(v2 + 8) + 4LL) + v2 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_BYTE *)this + 106) = 0;
  EnterCriticalSection(&g_CursorManager);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 73) = 0;
  v5 = (struct CCursorState::MonitorData *)*((_QWORD *)this + 11);
  for ( i = (struct CCursorState::MonitorData *)*((_QWORD *)this + 10);
        i != v5;
        i = (struct CCursorState::MonitorData *)((char *)i + 144) )
  {
    CCursorState::EnsureHardwareOverlayCleared(v4, i);
  }
  std::_Destroy_range<std::allocator<CCursorState::MonitorData>>(*((_QWORD *)this + 10), *((_QWORD *)this + 11));
  *((_QWORD *)this + 11) = *((_QWORD *)this + 10);
  LeaveCriticalSection(&g_CursorManager);
}
