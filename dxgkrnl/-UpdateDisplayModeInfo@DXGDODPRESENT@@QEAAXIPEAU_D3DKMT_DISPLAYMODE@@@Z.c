void __fastcall DXGDODPRESENT::UpdateDisplayModeInfo(
        DXGDODPRESENT *this,
        unsigned int a2,
        struct _D3DKMT_DISPLAYMODE *a3)
{
  __int64 v3; // rax
  D3DDDI_RATIONAL RefreshRate; // rdx

  v3 = a2;
  if ( a3->RefreshRate.Numerator == -2 && a3->RefreshRate.Denominator == -2 )
    RefreshRate = (D3DDDI_RATIONAL)0x100000040LL;
  else
    RefreshRate = a3->RefreshRate;
  BLTQUEUE::UpdateDisplayModeInfo(
    (struct _D3DDDI_RATIONAL *)(*((_QWORD *)this + 1) + 2920 * v3),
    RefreshRate,
    a3->Height);
}
