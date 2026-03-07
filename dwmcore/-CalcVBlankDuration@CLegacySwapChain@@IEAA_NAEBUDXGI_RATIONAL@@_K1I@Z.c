char __fastcall CLegacySwapChain::CalcVBlankDuration(
        struct DXGI_RATIONAL *this,
        const struct DXGI_RATIONAL *a2,
        struct DXGI_RATIONAL a3,
        struct DXGI_RATIONAL a4,
        UINT a5)
{
  UINT Numerator; // ebx
  char v6; // r11
  struct DXGI_RATIONAL v8; // rax
  UINT Denominator; // ecx
  bool v10; // zf

  Numerator = this[36].Numerator;
  v6 = 0;
  if ( Numerator != a2->Numerator || (Denominator = this[36].Denominator, Denominator != a2->Denominator) )
  {
    v8 = *a2;
    v6 = 1;
    this[36] = *a2;
    Numerator = v8.Numerator;
    Denominator = this[36].Denominator;
  }
  if ( *(_QWORD *)&this[37] != a3 )
  {
    this[37] = a3;
    v6 = 1;
  }
  if ( *(_QWORD *)&this[38] != a4 )
  {
    this[38] = a4;
    v6 = 1;
  }
  if ( this[39].Numerator != a5 )
  {
    this[39].Numerator = a5;
    v6 = 1;
  }
  v10 = LOBYTE(this[43].Numerator) == 0;
  this[41] = (struct DXGI_RATIONAL)(g_qpcFrequency.QuadPart * Denominator / Numerator);
  if ( !v10 )
  {
    LOBYTE(this[43].Numerator) = 0;
    v6 = 1;
    this[42].Numerator = 1;
  }
  return v6;
}
