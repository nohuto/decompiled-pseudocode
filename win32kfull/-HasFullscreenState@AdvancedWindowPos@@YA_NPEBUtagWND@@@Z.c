/*
 * XREFs of ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z @ 0x1C00FEDA4
 * Callers:
 *     ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00FD034 (--0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z.c)
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x1C0228FD4 (-ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 */

char __fastcall AdvancedWindowPos::HasFullscreenState(AdvancedWindowPos *this, const struct tagWND *a2)
{
  __int64 v2; // rdx
  char v4; // bl
  __int64 Prop; // rax

  v2 = *((_QWORD *)this + 5);
  if ( (*(_BYTE *)(v2 + 20) & 0x40) != 0 )
    return 1;
  if ( (*(_BYTE *)(v2 + 31) & 0x20) == 0 )
    return 0;
  v4 = 1;
  Prop = GetProp((__int64)this, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
  if ( !Prop || (*(_DWORD *)(Prop + 48) & 0x100) == 0 )
    return 0;
  return v4;
}
