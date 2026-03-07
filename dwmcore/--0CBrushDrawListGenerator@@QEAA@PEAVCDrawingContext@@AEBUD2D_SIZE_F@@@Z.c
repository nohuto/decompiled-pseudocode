CBrushDrawListGenerator *__fastcall CBrushDrawListGenerator::CBrushDrawListGenerator(
        CBrushDrawListGenerator *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  char *v3; // rdi
  __int64 v4; // xmm0_8
  __int64 v6; // rsi

  *(_QWORD *)this = a2;
  v3 = (char *)this + 40;
  v4 = (__int64)*a3;
  *((_DWORD *)this + 4) = 0;
  v6 = 4LL;
  *((_QWORD *)this + 1) = v4;
  *(_OWORD *)((char *)this + 20) = _xmm;
  do
  {
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v3);
    v3 += 8;
    --v6;
  }
  while ( v6 );
  *((_DWORD *)this + 18) = 0;
  return this;
}
