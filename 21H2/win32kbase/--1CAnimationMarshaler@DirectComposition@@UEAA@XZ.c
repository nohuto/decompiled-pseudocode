/*
 * XREFs of ??1CAnimationMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00B1A18
 * Callers:
 *     ??_GCAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00B19D4 (--_GCAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C00B1AB0 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CAnimationMarshaler::~CAnimationMarshaler(
        DirectComposition::CAnimationMarshaler *this)
{
  char *v1; // rdx
  DirectComposition::CAnimationMarshaler **v3; // rcx
  DirectComposition::CAnimationMarshaler **v4; // rdx
  DirectComposition::CAnimationTimeList *v5; // rcx
  __int64 v6; // rbx
  char *v7; // rdx

  v1 = (char *)*((_QWORD *)this + 20);
  *(_QWORD *)this = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
  *((_QWORD *)this + 2) = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
  if ( v1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v1);
  v3 = (DirectComposition::CAnimationMarshaler **)*((_QWORD *)this + 17);
  if ( v3[1] != (DirectComposition::CAnimationMarshaler *)((char *)this + 136)
    || (v4 = (DirectComposition::CAnimationMarshaler **)*((_QWORD *)this + 18),
        *v4 != (DirectComposition::CAnimationMarshaler *)((char *)this + 136)) )
  {
    __fastfail(3u);
  }
  *v4 = (DirectComposition::CAnimationMarshaler *)v3;
  v3[1] = (DirectComposition::CAnimationMarshaler *)v4;
  if ( *((_QWORD *)this + 10) )
  {
    do
    {
      v5 = (DirectComposition::CAnimationTimeList *)*((_QWORD *)this + 10);
      v6 = *((_QWORD *)v5 + 2);
      DirectComposition::CAnimationTimeList::Release(v5);
      *((_QWORD *)this + 10) = v6;
    }
    while ( v6 );
  }
  v7 = (char *)*((_QWORD *)this + 31);
  if ( v7 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v7);
}
