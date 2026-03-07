void __fastcall DirectComposition::CApplicationChannel::ClearAnimationTimeList(
        DirectComposition::CApplicationChannel *this)
{
  DirectComposition::CAnimationMarshaler **v1; // rsi
  LARGE_INTEGER PerformanceCounter; // rbx
  DirectComposition::CAnimationMarshaler **v4; // rdi
  DirectComposition::CAnimationMarshaler *v5; // rcx

  v1 = (DirectComposition::CAnimationMarshaler **)*((_QWORD *)this + 55);
  if ( v1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    do
    {
      v4 = (DirectComposition::CAnimationMarshaler **)v1[1];
      v5 = *v1;
      v1[1] = 0LL;
      DirectComposition::CAnimationMarshaler::UpdateAnimationTimeState(v5, PerformanceCounter.QuadPart);
      DirectComposition::CAnimationTimeList::Release((DirectComposition::CAnimationTimeList *)v1);
      v1 = v4;
    }
    while ( v4 );
    *((_QWORD *)this + 55) = 0LL;
  }
}
