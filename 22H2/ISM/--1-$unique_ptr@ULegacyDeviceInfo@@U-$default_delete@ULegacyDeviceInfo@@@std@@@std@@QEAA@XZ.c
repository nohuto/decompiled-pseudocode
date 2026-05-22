/*
 * XREFs of ??1?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x180075514
 * Callers:
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$9 @ 0x18004EC47 (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$9.c)
 *     _HIDDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x180051D5F (_HIDDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$2 @ 0x18007A9AF (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$2.c)
 *     _HeatDeviceCollection::OnDeviceAttach_::_1_::dtor$1 @ 0x18009ADA4 (_HeatDeviceCollection--OnDeviceAttach_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x60C);
}
