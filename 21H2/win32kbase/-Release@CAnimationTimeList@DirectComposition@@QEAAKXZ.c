/*
 * XREFs of ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C00B1AB0
 * Callers:
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C000B908 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0013470 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ??1CAnimationMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00B1A18 (--1CAnimationMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C00B3AF0 (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CAnimationTimeList::Release(DirectComposition::CAnimationTimeList *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 12);
  if ( !v1 && this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)this);
  return v1;
}
