void __fastcall BLTQUEUE::UpdateDisplayModeInfo(struct _D3DDDI_RATIONAL *this, struct _D3DDDI_RATIONAL a2, UINT a3)
{
  if ( !a2.Numerator || !a2.Denominator )
    a2 = (struct _D3DDDI_RATIONAL)0x10000003CLL;
  this[73] = a2;
  this[74].Numerator = a3;
  BYTE2(this[71].Numerator) = 1;
  BLTQUEUE::IssueCommand((BLTQUEUE *)this);
}
