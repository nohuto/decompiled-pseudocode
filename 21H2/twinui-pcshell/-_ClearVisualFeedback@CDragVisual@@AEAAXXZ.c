/*
 * XREFs of ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x180496C6C
 * Callers:
 *     ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x1804965F0 (-SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z.c)
 *     ?_CancelPlacement@CDragVisual@@AEAAXXZ @ 0x180496BB0 (-_CancelPlacement@CDragVisual@@AEAAXXZ.c)
 *     ?_CommitPlacement@CDragVisual@@AEAAXXZ @ 0x180496CAC (-_CommitPlacement@CDragVisual@@AEAAXXZ.c)
 *     ?_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1804974C8 (-_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnKeyDown@CDragVisual@@AEAAX_K@Z @ 0x18049762C (-_OnKeyDown@CDragVisual@@AEAAX_K@Z.c)
 *     ?_OnStartDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x180497E74 (-_OnStartDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180498A18 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDragVisual::_ClearVisualFeedback(CDragVisual *this)
{
  if ( *((_DWORD *)this + 37) == 6 && !*((_BYTE *)this + 326) )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 17) + 64LL))(
      *((_QWORD *)this + 17),
      0LL,
      0LL,
      0LL);
}
