void __fastcall DirectComposition::CApplicationChannel::NewAddingBinding(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CAnimationBinding *a2)
{
  if ( *((int *)this + 6) > 2 )
  {
    *(_QWORD *)a2 = 0LL;
  }
  else
  {
    *(_QWORD *)a2 = *((_QWORD *)this + 56);
    *((_QWORD *)this + 56) = a2;
  }
}
