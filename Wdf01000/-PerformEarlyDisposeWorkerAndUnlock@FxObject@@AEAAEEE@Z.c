/*
 * XREFs of ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C0001D4C
 * Callers:
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C0001178 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0003ED0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 * Callees:
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C00033E8 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C000536C (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?ShouldDeferDisposeLocked@FxObject@@AEAAEPEAE@Z @ 0x1C0006500 (-ShouldDeferDisposeLocked@FxObject@@AEAAEPEAE@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C0047758 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

unsigned __int8 __fastcall FxObject::PerformEarlyDisposeWorkerAndUnlock(
        FxObject *this,
        unsigned __int8 OldIrql,
        unsigned __int8 CanDefer)
{
  unsigned __int8 PreviousIrql; // [rsp+38h] [rbp+10h] BYREF

  PreviousIrql = OldIrql;
  FxObject::SetObjectStateLocked(this, FxObjectStateDisposingEarly);
  if ( !CanDefer || !FxObject::ShouldDeferDisposeLocked(this, &PreviousIrql) )
    return FxObject::PerformDisposingDisposeChildrenLocked(this, OldIrql, CanDefer);
  FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDisposing);
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, OldIrql);
  return 0;
}
