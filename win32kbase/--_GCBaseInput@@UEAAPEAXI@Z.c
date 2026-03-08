/*
 * XREFs of ??_GCBaseInput@@UEAAPEAXI@Z @ 0x1C020B9E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRIMBase@@UEAA@XZ @ 0x1C0096730 (--1CRIMBase@@UEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

CBaseInput *__fastcall CBaseInput::`scalar deleting destructor'(CBaseInput *this, char a2)
{
  *(_QWORD *)this = &CBaseInput::`vftable';
  CRIMBase::~CRIMBase(this);
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
