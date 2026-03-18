/*
 * XREFs of ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C00C3C0C
 * Callers:
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C00C1D10 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 *     ?DestroySessionGlobal@CInputManager@@SAXXZ @ 0x1C00C3BE0 (-DestroySessionGlobal@CInputManager@@SAXXZ.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CInputManager@@IEAA@XZ @ 0x1C00C3C40 (--1CInputManager@@IEAA@XZ.c)
 */

CInputManager *__fastcall CInputManager::`scalar deleting destructor'(CInputManager *this)
{
  CInputManager::~CInputManager(this);
  if ( this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
