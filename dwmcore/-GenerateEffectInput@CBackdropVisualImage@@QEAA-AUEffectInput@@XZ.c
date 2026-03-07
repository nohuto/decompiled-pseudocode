__int64 __fastcall CBackdropVisualImage::GenerateEffectInput(__int64 a1, __int64 a2)
{
  struct IBitmapResource *v2; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  CDrawListBitmap *v7; // rax
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v10[48]; // [rsp+38h] [rbp-30h] BYREF

  v2 = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_BYTE *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 48) = 0LL;
  EffectInput::Reset((struct EffectInput *)a2);
  *(_BYTE *)(a2 + 44) = 1;
  CBackdropVisualImage::GetViewBoxToUVTransform(a1, (D2D1::Matrix3x2F *)&v9);
  v6 = Matrix3x3::operator*(a1 + 1916, v10, v5);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)v6;
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(v6 + 16);
  *(_DWORD *)(a2 + 80) = *(_DWORD *)(v6 + 32);
  v9 = *(_OWORD *)(a1 + 1848);
  *(_OWORD *)(a2 + 84) = v9;
  if ( a1 )
    v2 = (struct IBitmapResource *)(*(int *)(*(_QWORD *)(a1 + 64) + 8LL) + a1 + 64);
  v7 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v9, v2);
  CDrawListBitmap::operator=(a2, v7);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((char *)&v9 + 8);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v9);
  *(_DWORD *)(a2 + 40) |= 0x800u;
  result = a2;
  *(_WORD *)(a2 + 100) = 257;
  *(_BYTE *)(a2 + 102) = 1;
  return result;
}
