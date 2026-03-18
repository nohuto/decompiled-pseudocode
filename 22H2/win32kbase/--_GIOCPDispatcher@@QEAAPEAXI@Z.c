/*
 * XREFs of ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C00831E8
 * Callers:
 *     IOCPDispatcher_Destroy @ 0x1C0080A80 (IOCPDispatcher_Destroy.c)
 *     KSTIOCPDispatcher_Destroy @ 0x1C0080AB0 (KSTIOCPDispatcher_Destroy.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C0083224 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0084D10 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

IOCPDispatcher *__fastcall IOCPDispatcher::`scalar deleting destructor'(IOCPDispatcher *this)
{
  *(_QWORD *)this = &IOCPDispatcher::`vftable';
  IOCPDispatcher::Close(this, 0);
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
