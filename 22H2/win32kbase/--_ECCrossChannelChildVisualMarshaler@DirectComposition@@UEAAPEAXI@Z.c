/*
 * XREFs of ??_ECCrossChannelChildVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00083C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0030364 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CCrossChannelChildVisualMarshaler *__fastcall DirectComposition::CCrossChannelChildVisualMarshaler::`vector deleting destructor'(
        DirectComposition::CCrossChannelChildVisualMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CCrossChannelChildVisualMarshaler::`vftable';
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
