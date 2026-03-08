/*
 * XREFs of ??_GVPTPContact@@QEAAPEAXI@Z @ 0x1C0223E44
 * Callers:
 *     ??1VirtualTouchpadProcessor@@AEAA@XZ @ 0x1C0223D34 (--1VirtualTouchpadProcessor@@AEAA@XZ.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0225260 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1VPTPContact@@QEAA@XZ @ 0x1C0223C80 (--1VPTPContact@@QEAA@XZ.c)
 */

VPTPContact ***__fastcall VPTPContact::`scalar deleting destructor'(
        VPTPContact ***this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  VPTPContact::~VPTPContact(this, a2, a3, a4);
  if ( this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
