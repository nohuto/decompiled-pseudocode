void __fastcall DirectComposition::CApplicationChannel::AddAnimationTimeListEntry(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CAnimationTimeList *a2)
{
  if ( (*((_DWORD *)a2 + 6) & 1) == 0 )
  {
    *((_QWORD *)a2 + 1) = *((_QWORD *)this + 55);
    *((_QWORD *)this + 55) = a2;
    *((_DWORD *)a2 + 6) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)a2 + 12);
  }
}
