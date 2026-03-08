/*
 * XREFs of ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C00033E8
 * Callers:
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C0001D4C (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0003ED0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C0047694 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C00034D0 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0003ED0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C000536C (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

unsigned __int8 __fastcall FxObject::PerformDisposingDisposeChildrenLocked(
        FxObject *this,
        unsigned __int8 OldIrql,
        unsigned __int8 CanDefer)
{
  FxObject::SetObjectStateLocked(this, FxObjectStateDisposingDisposeChildren);
  if ( !FxObject::DisposeChildrenWorker(this, FxObjectStateDeferedDisposing, OldIrql, CanDefer) )
    return 0;
  if ( (this->m_ObjectFlags & 0x104) == 0x104 )
    FxObject::DeletedAndDisposedWorkerLocked(this, OldIrql, 0);
  else
    FxObject::SetObjectStateLocked(this, FxObjectStateDisposed);
  return 1;
}
