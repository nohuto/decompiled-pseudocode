/*
 * XREFs of ??_ECLineGeometryMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024A550
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CLineGeometryMarshaler *__fastcall DirectComposition::CLineGeometryMarshaler::`vector deleting destructor'(
        DirectComposition::CLineGeometryMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CGeometryMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
