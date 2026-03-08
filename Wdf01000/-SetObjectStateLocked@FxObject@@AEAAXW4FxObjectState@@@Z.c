/*
 * XREFs of ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C000536C
 * Callers:
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C0001178 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C0001304 (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C0001D4C (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C00032C0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C00033E8 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?DeleteWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C0003460 (-DeleteWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C00034D0 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003A80 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0003ED0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C0006410 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C0008570 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C0047694 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C0047758 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqdd @ 0x1C0019480 (WPP_IFR_SF_qqdd.c)
 */

void __fastcall FxObject::SetObjectStateLocked(FxObject *this, unsigned int NewState)
{
  const void *_a2; // rax
  _FX_DRIVER_GLOBALS *v5; // r10

  if ( _bittest16((const signed __int16 *)&this->24, 9u) )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      _a2 = FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qqdd(v5, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, NewState);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = NewState;
  }
  this->m_ObjectState = NewState;
}
