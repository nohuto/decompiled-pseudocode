/*
 * XREFs of ??_GCGeometry2DGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024C7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ @ 0x1C0068D5C (--1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CGeometry2DGroupMarshaler *__fastcall DirectComposition::CGeometry2DGroupMarshaler::`scalar deleting destructor'(
        DirectComposition::CGeometry2DGroupMarshaler *this,
        char a2)
{
  DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase((DirectComposition::CGeometry2DGroupMarshaler *)((char *)this + 56));
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
