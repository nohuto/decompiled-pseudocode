__int64 __fastcall CDrawListBitmap::SetTransparent(CDrawListBitmap *this, CD3DDevice **a2)
{
  unsigned int v3; // ebx
  struct IBitmapRealization *StockTransparentBitmap; // rax
  unsigned int v5; // ecx
  CDrawListBitmap *v6; // rax
  _BYTE v8[8]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  v3 = 0;
  StockTransparentBitmap = CD3DDevice::GetStockTransparentBitmap(a2[5]);
  if ( StockTransparentBitmap )
  {
    v6 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v8, StockTransparentBitmap);
    CDrawListBitmap::operator=(this, v6);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v9);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v8);
  }
  else
  {
    v3 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003304307, 0x34u, 0LL);
  }
  return v3;
}
