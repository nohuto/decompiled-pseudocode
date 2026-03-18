/*
 * XREFs of ??_GCTransformGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C000E0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ @ 0x1C00303FC (--1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CTransformGroupMarshaler *__fastcall DirectComposition::CTransformGroupMarshaler::`scalar deleting destructor'(
        DirectComposition::CTransformGroupMarshaler *this,
        char a2)
{
  DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase((DirectComposition::CTransformGroupMarshaler *)((char *)this + 72));
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, this);
  return this;
}
