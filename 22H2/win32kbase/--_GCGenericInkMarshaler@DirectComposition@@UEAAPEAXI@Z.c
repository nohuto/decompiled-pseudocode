/*
 * XREFs of ??_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C020BDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CGenericInkMarshaler@DirectComposition@@UEAA@XZ @ 0x1C020B8E4 (--1CGenericInkMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CGenericInkMarshaler *__fastcall DirectComposition::CGenericInkMarshaler::`scalar deleting destructor'(
        DirectComposition::CGenericInkMarshaler *this,
        char a2)
{
  DirectComposition::CGenericInkMarshaler::~CGenericInkMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
