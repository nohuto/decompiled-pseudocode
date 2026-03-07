char __fastcall DirectComposition::CInteractionTrackerMarshaler::SetRemarshalingFlags(
        DirectComposition::CInteractionTrackerMarshaler *this)
{
  char v1; // di

  *((_DWORD *)this + 4) &= 0xE40203FF;
  v1 = 0;
  *((_BYTE *)this + 464) |= 4u;
  *((_DWORD *)this + 91) = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this)
    || *((float *)this + 17) != 0.0
    || *((float *)this + 18) != 0.0
    || *((float *)this + 39) != 1.0
    || *((_DWORD *)this + 90)
    || *((_QWORD *)this + 49)
    || *((_QWORD *)this + 27)
    || *((_QWORD *)this + 28)
    || *((_QWORD *)this + 41)
    || *((_QWORD *)this + 42)
    || *((_QWORD *)this + 29)
    || *((_QWORD *)this + 30)
    || *((_QWORD *)this + 31)
    || *((_QWORD *)this + 32) )
  {
    return 1;
  }
  return v1;
}
