__int64 __fastcall CD2DContext::FillEffect(
        ID2D1DeviceContext **this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Effect *a3,
        const struct D2D_RECT_F *a4,
        const struct D2D_POINT_2F *a5,
        enum D2D1_INTERPOLATION_MODE a6,
        enum D2D1_COMPOSITE_MODE a7)
{
  int v11; // eax
  const struct D2D_POINT_2F *v12; // rdi
  __int64 v13; // rbp
  FLOAT y; // xmm1_4
  __int64 result; // rax
  _DWORD v16[2]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v17[24]; // [rsp+38h] [rbp-60h] BYREF

  CD2DContext::FlushDrawList((CD2DContext *)this);
  v11 = *((_DWORD *)this + 88);
  v12 = 0LL;
  v13 = 0LL;
  if ( v11 )
    v13 = *((_QWORD *)this[41] + (unsigned int)(v11 - 1));
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  (*(void (__fastcall **)(const struct ID2DContextOwner *, _BYTE *))(*(_QWORD *)a2 + 8LL))(a2, v17);
  (*(void (__fastcall **)(ID2D1DeviceContext *, _BYTE *))(*(_QWORD *)this[25] + 240LL))(this[25], v17);
  if ( a5 )
  {
    v12 = (const struct D2D_POINT_2F *)v16;
    y = a5->y;
    v16[0] = LODWORD(a5->x);
    *(FLOAT *)&v16[1] = y;
  }
  ID2D1DeviceContext::DrawImage(this[25], a3, v12, a4, a6, a7);
  result = 0LL;
  *(_BYTE *)(v13 + 75) = 1;
  return result;
}
