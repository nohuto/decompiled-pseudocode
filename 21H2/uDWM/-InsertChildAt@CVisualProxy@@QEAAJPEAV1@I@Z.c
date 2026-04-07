/*
 * XREFs of ?InsertChildAt@CVisualProxy@@QEAAJPEAV1@I@Z @ 0x180040234
 * Callers:
 *     ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x1800199F8 (-ConnectToParent@CVisual@@QEAAJ_N@Z.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180052820 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualProxy::InsertChildAt(CVisualProxy *this, struct CVisualProxy *a2, unsigned int a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 448LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL),
           a3);
}
