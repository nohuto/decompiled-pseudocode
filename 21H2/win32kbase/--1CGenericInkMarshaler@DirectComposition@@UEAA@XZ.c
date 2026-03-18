/*
 * XREFs of ??1CGenericInkMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0213F7C
 * Callers:
 *     ??_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C02142C0 (--_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CGenericInkMarshaler::~CGenericInkMarshaler(
        DirectComposition::CGenericInkMarshaler *this)
{
  char *v2; // rdx
  char *v3; // rdx

  *(_QWORD *)this = &DirectComposition::CGenericInkMarshaler::`vftable';
  v2 = (char *)*((_QWORD *)this + 13);
  if ( v2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v2);
  v3 = (char *)*((_QWORD *)this + 8);
  if ( v3 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v3);
}
