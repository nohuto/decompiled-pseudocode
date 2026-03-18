/*
 * XREFs of ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C00C1C1C
 * Callers:
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C00BECC0 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 *     ?DestroySessionGlobal@CInputManager@@SAXXZ @ 0x1C00C1BF0 (-DestroySessionGlobal@CInputManager@@SAXXZ.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CInputManager@@IEAA@XZ @ 0x1C00C1C50 (--1CInputManager@@IEAA@XZ.c)
 */

CInputManager *__fastcall CInputManager::`scalar deleting destructor'(CInputManager *this)
{
  CInputManager::~CInputManager(this);
  if ( this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
