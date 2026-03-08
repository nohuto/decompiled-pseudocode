/*
 * XREFs of ??_GCHostVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00A13A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0068CC8 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CHostVisualMarshaler *__fastcall DirectComposition::CHostVisualMarshaler::`scalar deleting destructor'(
        DirectComposition::CHostVisualMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualMarshaler,2>::`vftable';
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
