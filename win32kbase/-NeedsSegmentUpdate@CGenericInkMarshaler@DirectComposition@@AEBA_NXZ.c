char __fastcall DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(
        DirectComposition::CGenericInkMarshaler *this)
{
  __int64 v1; // r8
  char v2; // dl

  v1 = *((_QWORD *)this + 17);
  v2 = 0;
  if ( v1
    && (v1 * (unsigned __int64)*((unsigned int *)this + 37) < *((_QWORD *)this + 15)
     || *((_BYTE *)this + 152)
     || (*((_DWORD *)this + 4) & 0x40) == 0) )
  {
    return 1;
  }
  return v2;
}
