/*
 * XREFs of ??1CGenericInkMarshaler@DirectComposition@@UEAA@XZ @ 0x1C024A2D4
 * Callers:
 *     ??_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C024A790 (--_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CGenericInkMarshaler::~CGenericInkMarshaler(
        DirectComposition::CGenericInkMarshaler *this)
{
  char *v2; // rdx
  char *v3; // rdx

  *(_QWORD *)this = &DirectComposition::CGenericInkMarshaler::`vftable';
  v2 = (char *)*((_QWORD *)this + 12);
  if ( v2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
  v3 = (char *)*((_QWORD *)this + 7);
  if ( v3 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
}
