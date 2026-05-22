/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0bc706ec02677b88b1bea7627a07e2d6__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call @ 0x1800D3BC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?CheckIfHmdNodeIsNeeded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800CF258 (-CheckIfHmdNodeIsNeeded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_0bc706ec02677b88b1bea7627a07e2d6__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const___::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v4; // rdx

  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 168LL))(*a2, 0LL);
  v3 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 8) + 432LL);
  EnterCriticalSection(v3);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::CheckIfHmdNodeIsNeeded(
    *(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection **)(a1 + 8),
    v4);
  if ( v3 )
    LeaveCriticalSection(v3);
}
