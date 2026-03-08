/*
 * XREFs of ??_ECAtlasedRectsGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024C6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ @ 0x1C0068D5C (--1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CAtlasedRectsGroupMarshaler *__fastcall DirectComposition::CAtlasedRectsGroupMarshaler::`vector deleting destructor'(
        DirectComposition::CAtlasedRectsGroupMarshaler *this,
        char a2)
{
  DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase((DirectComposition::CAtlasedRectsGroupMarshaler *)((char *)this + 64));
  if ( (a2 & 1) != 0 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
