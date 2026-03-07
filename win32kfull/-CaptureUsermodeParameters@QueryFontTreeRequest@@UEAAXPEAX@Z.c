void __fastcall QueryFontTreeRequest::CaptureUsermodeParameters(QueryFontTreeRequest *this, _QWORD *a2)
{
  _QWORD *v2; // r9

  v2 = (_QWORD *)a2[3];
  *((_QWORD *)this + 11) = a2[4];
  if ( v2 == *((_QWORD **)this + 10) )
  {
    **((_QWORD **)this + 8) = *v2;
    if ( *((_DWORD *)this + 15) == 2 )
    {
      QueryFontTreeRequest::CaptureKerningPairs(this);
    }
    else if ( *((_DWORD *)this + 15) == 3 )
    {
      QueryFontTreeRequest::CaptureGlyphSet(this);
    }
  }
}
