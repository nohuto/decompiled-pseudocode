/*
 * XREFs of ??1CEffectInputSet@DirectComposition@@QEAA@XZ @ 0x1C024D644
 * Callers:
 *     ??1CFilterEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x1C024D39C (--1CFilterEffectMarshaler@DirectComposition@@UEAA@XZ.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall DirectComposition::CEffectInputSet::~CEffectInputSet(DirectComposition::CEffectInputSet *this)
{
  char *v1; // rdx
  char *v3; // rdx

  v1 = (char *)*((_QWORD *)this + 2);
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
  v3 = (char *)*((_QWORD *)this + 3);
  if ( v3 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
}
