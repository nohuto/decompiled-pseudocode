/*
 * XREFs of ??_GCRIMBase@@UEAAPEAXI@Z @ 0x1C020BA30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRIMBase@@UEAA@XZ @ 0x1C0096730 (--1CRIMBase@@UEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

CRIMBase *__fastcall CRIMBase::`scalar deleting destructor'(CRIMBase *this, char a2)
{
  CRIMBase::~CRIMBase(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
