char __fastcall DirectComposition::CExpressionMarshaler::SetRemarshalingFlags(
        DirectComposition::CExpressionMarshaler *this)
{
  char v1; // bl

  *((_DWORD *)this + 4) &= ~0x800u;
  v1 = 0;
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 55) = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this)
    || *((_QWORD *)this + 16) && *((_QWORD *)this + 18) )
  {
    return 1;
  }
  return v1;
}
