/*
 * XREFs of ?_CommitPlacement@CDragVisual@@AEAAXXZ @ 0x180496CAC
 * Callers:
 *     ?_OnKeyDown@CDragVisual@@AEAAX_K@Z @ 0x18049762C (-_OnKeyDown@CDragVisual@@AEAAX_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x180496C6C (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 */

void __fastcall CDragVisual::_CommitPlacement(CDragVisual *this)
{
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 32LL))(*((_QWORD *)this + 17)) )
  {
    CDragVisual::_ClearVisualFeedback(this);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 40LL))(*((_QWORD *)this + 17));
  }
}
