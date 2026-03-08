/*
 * XREFs of ??_ECConditionalExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024A6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0069558 (--1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CConditionalExpressionMarshaler *__fastcall DirectComposition::CConditionalExpressionMarshaler::`vector deleting destructor'(
        DirectComposition::CConditionalExpressionMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CConditionalExpressionMarshaler::`vftable';
  DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(this);
  if ( (a2 & 1) != 0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
