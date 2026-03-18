/*
 * XREFs of ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00AB2B4
 * Callers:
 *     ??_GCKeyframeAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00AB220 (--_GCKeyframeAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECBaseExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00AB270 (--_ECBaseExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECConditionalExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C02141B0 (--_ECConditionalExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECInjectionAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C02143E0 (--_ECInjectionAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(
        DirectComposition::CBaseExpressionMarshaler *this)
{
  char *v1; // rdx

  v1 = (char *)*((_QWORD *)this + 12);
  *(_QWORD *)this = &DirectComposition::CBaseExpressionMarshaler::`vftable';
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v1);
}
