char __fastcall DirectComposition::CConditionalExpressionMarshaler::SetRemarshalingFlags(
        DirectComposition::CConditionalExpressionMarshaler *this)
{
  char v1; // bl
  unsigned int v2; // eax

  v1 = 0;
  v2 = *((_DWORD *)this + 4) & 0xFFFFEFFF;
  *((_DWORD *)this + 4) = v2;
  if ( *((_QWORD *)this + 18) )
    *((_DWORD *)this + 4) = v2 & 0xFFFFF7FF;
  *((_DWORD *)this + 35) = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this)
    || *((_DWORD *)this + 34)
    || *((_QWORD *)this + 18) )
  {
    return 1;
  }
  return v1;
}
