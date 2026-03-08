/*
 * XREFs of ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C0095370
 * Callers:
 *     CHidInput_Destroy @ 0x1C0095310 (CHidInput_Destroy.c)
 *     CKeyboardSensor_Destroy @ 0x1C00953C0 (CKeyboardSensor_Destroy.c)
 *     CMouseSensor_Destroy @ 0x1C0095420 (CMouseSensor_Destroy.c)
 * Callees:
 *     ??1CRIMBase@@UEAA@XZ @ 0x1C0096730 (--1CRIMBase@@UEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

CHidInput *__fastcall CHidInput::`scalar deleting destructor'(CHidInput *this, char a2)
{
  *(_QWORD *)this = &CBaseInput::`vftable';
  CRIMBase::~CRIMBase(this);
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
