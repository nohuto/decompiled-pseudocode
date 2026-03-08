/*
 * XREFs of ??_GCTableTransferEffectMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024AAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CTableTransferEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x1C024F144 (--1CTableTransferEffectMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CTableTransferEffectMarshaler *__fastcall DirectComposition::CTableTransferEffectMarshaler::`scalar deleting destructor'(
        DirectComposition::CTableTransferEffectMarshaler *this,
        char a2)
{
  DirectComposition::CTableTransferEffectMarshaler::~CTableTransferEffectMarshaler(this);
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
