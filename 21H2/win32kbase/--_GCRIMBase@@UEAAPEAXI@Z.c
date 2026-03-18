/*
 * XREFs of ??_GCRIMBase@@UEAAPEAXI@Z @ 0x1C01DC250
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRIMBase@@UEAA@XZ @ 0x1C005CD24 (--1CRIMBase@@UEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

CRIMBase *__fastcall CRIMBase::`scalar deleting destructor'(CRIMBase *this, char a2)
{
  CRIMBase::~CRIMBase(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return this;
}
