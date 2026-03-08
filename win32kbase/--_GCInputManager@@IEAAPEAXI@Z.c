/*
 * XREFs of ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C00D189C
 * Callers:
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C00CE140 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 *     ?DestroySessionGlobal@CInputManager@@SAXXZ @ 0x1C00D1870 (-DestroySessionGlobal@CInputManager@@SAXXZ.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CInputManager@@IEAA@XZ @ 0x1C00D18D0 (--1CInputManager@@IEAA@XZ.c)
 */

CInputManager *__fastcall CInputManager::`scalar deleting destructor'(CInputManager *this)
{
  CInputManager::~CInputManager(this);
  if ( this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
