unsigned __int64 __fastcall DirectComposition::CGenericInkMarshaler::GetSegmentCount(
        DirectComposition::CGenericInkMarshaler *this)
{
  unsigned __int64 v1; // r8

  v1 = *((_QWORD *)this + 17);
  if ( v1 )
    return *((_QWORD *)this + 15) / v1;
  else
    return 0LL;
}
