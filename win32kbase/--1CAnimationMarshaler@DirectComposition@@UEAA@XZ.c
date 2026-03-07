void __fastcall DirectComposition::CAnimationMarshaler::~CAnimationMarshaler(
        DirectComposition::CAnimationMarshaler *this)
{
  char *v2; // rax
  __int64 v3; // rdx
  char **v4; // rcx
  DirectComposition::CAnimationTimeList *v5; // rcx
  DirectComposition::CAnimationTimeList *v6; // rbx
  char *v7; // rdx

  *(_QWORD *)this = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
  *((_QWORD *)this + 2) = &DirectComposition::CAnimationMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
  v2 = (char *)this + 128;
  v3 = *((_QWORD *)this + 16);
  if ( *(DirectComposition::CAnimationMarshaler **)(v3 + 8) != (DirectComposition::CAnimationMarshaler *)((char *)this + 128)
    || (v4 = (char **)*((_QWORD *)this + 17), *v4 != v2) )
  {
    __fastfail(3u);
  }
  *v4 = (char *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  v5 = (DirectComposition::CAnimationTimeList *)*((_QWORD *)this + 9);
  if ( v5 )
  {
    do
    {
      v6 = (DirectComposition::CAnimationTimeList *)*((_QWORD *)v5 + 2);
      DirectComposition::CAnimationTimeList::Release(v5);
      *((_QWORD *)this + 9) = v6;
      v5 = v6;
    }
    while ( v6 );
  }
  v7 = (char *)*((_QWORD *)this + 29);
  if ( v7 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
}
