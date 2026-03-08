/*
 * XREFs of ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C009653C
 * Callers:
 *     IOCPDispatcher_Destroy @ 0x1C0095480 (IOCPDispatcher_Destroy.c)
 *     KSTIOCPDispatcher_Destroy @ 0x1C00954B0 (KSTIOCPDispatcher_Destroy.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C0096578 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0093DD0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

IOCPDispatcher *__fastcall IOCPDispatcher::`scalar deleting destructor'(IOCPDispatcher *this)
{
  *(_QWORD *)this = &IOCPDispatcher::`vftable';
  IOCPDispatcher::Close(this, 0);
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
