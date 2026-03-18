/*
 * XREFs of ?Dispose@FxCompanionTarget@@EEAAEXZ @ 0x1C0043640
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C0013DA4 (WPP_IFR_SF_qq.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C0017CE0 (--0FxCREvent@@QEAA@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?CloseCompanionLibraryInterface@FxCompanionLibrary@@AEAAXXZ @ 0x1C00426B8 (-CloseCompanionLibraryInterface@FxCompanionLibrary@@AEAAXXZ.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C0059E94 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 */

unsigned __int8 __fastcall FxCompanionTarget::Dispose(FxCompanionTarget *this, unsigned __int8 a2)
{
  const void *_a1; // rax
  FxCompanionLibrary *CompanionLibrary; // rbx
  FxCREvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  FxCREvent::FxCREvent(&eventOnStack, a2);
  KeInitializeEvent(&eventOnStack.m_Event.m_Event, SynchronizationEvent, 0);
  eventOnStack.m_Event.m_DbgFlagIsInitialized = 1;
  if ( (this->m_ObjectFlags & 0x400) != 0 )
    FxObject::CallCleanupCallbacks(this);
  this->m_DisposeEvent = &eventOnStack;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  WPP_IFR_SF_qq(
    this->m_Globals,
    4u,
    0xCu,
    0xEu,
    (const _GUID *)&WPP_FxCompanionTarget_cpp_Traceguids,
    _a1,
    &eventOnStack);
  if ( _InterlockedExchangeAdd(&this->m_PendingTaskCount, 0xFFFFFFFF) > 1 )
  {
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&eventOnStack, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
  this->m_DisposeEvent = 0LL;
  if ( this->m_RdDeviceCompanion )
  {
    CompanionLibrary = FxLibraryGlobals.CompanionLibrary;
    ((void (__fastcall *)(ICompanionLibrary *))FxLibraryGlobals.CompanionLibrary->m_RdCompanionLibrary->UnloadCompanion)(FxLibraryGlobals.CompanionLibrary->m_RdCompanionLibrary);
    FxCompanionLibrary::CloseCompanionLibraryInterface(CompanionLibrary);
    this->m_RdDeviceCompanion = 0LL;
  }
  return 0;
}
