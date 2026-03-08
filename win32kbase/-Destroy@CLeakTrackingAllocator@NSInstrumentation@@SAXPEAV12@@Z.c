/*
 * XREFs of ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D4B54
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C015C290 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1C019AFB8 (-CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 * Callees:
 *     ??1CLeakTrackingAllocator@NSInstrumentation@@QEAA@XZ @ 0x1C00D4B84 (--1CLeakTrackingAllocator@NSInstrumentation@@QEAA@XZ.c)
 *     ?PersistState@CLeakTrackingAllocator@NSInstrumentation@@AEAAXXZ @ 0x1C00D4D04 (-PersistState@CLeakTrackingAllocator@NSInstrumentation@@AEAAXXZ.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::Destroy(
        struct NSInstrumentation::CLeakTrackingAllocator *this)
{
  NSInstrumentation::CLeakTrackingAllocator::PersistState(this);
  NSInstrumentation::CLeakTrackingAllocator::~CLeakTrackingAllocator(this);
  if ( *((_BYTE *)this + 144) )
    ExFreePoolWithTag(this, 0);
}
