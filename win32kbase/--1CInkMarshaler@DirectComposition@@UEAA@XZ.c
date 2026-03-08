/*
 * XREFs of ??1CInkMarshaler@DirectComposition@@UEAA@XZ @ 0x1C024F99C
 * Callers:
 *     ??_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024A900 (--_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CInkMarshaler::~CInkMarshaler(DirectComposition::CInkMarshaler *this)
{
  char *v1; // rdx

  *(_QWORD *)this = &DirectComposition::CInkMarshaler::`vftable';
  v1 = (char *)*((_QWORD *)this + 14);
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
}
