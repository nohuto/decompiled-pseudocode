__int64 __fastcall CD2DContext::FillRectangleWithSolidColor(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        const struct _D3DCOLORVALUE *a4,
        enum D2D1_ANTIALIAS_MODE a5,
        enum D2D1_PRIMITIVE_BLEND a6)
{
  int v10; // eax
  CD2DTarget *v11; // r15
  int v12; // eax
  __int64 v13; // r8
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  float g; // xmm6_4
  float b; // xmm7_4
  __int64 v17; // rcx
  int v18; // eax
  _BYTE v20[80]; // [rsp+38h] [rbp-99h] BYREF
  D3DVALUE r; // [rsp+88h] [rbp-49h] BYREF
  float v22; // [rsp+8Ch] [rbp-45h]
  float v23; // [rsp+90h] [rbp-41h]
  float v24; // [rsp+94h] [rbp-3Dh]
  __int128 v25; // [rsp+98h] [rbp-39h] BYREF
  struct D2D_MATRIX_3X2_F v26; // [rsp+A8h] [rbp-29h] BYREF

  CD2DContext::FlushDrawList(this);
  v10 = *((_DWORD *)this + 88);
  v11 = 0LL;
  if ( v10 )
    v11 = *(CD2DTarget **)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v10 - 1));
  CD2DContext::EnsureBeginDraw(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v12 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_DRAWEVENT_Start,
      2,
      v12);
  }
  CD2DContext::SetCommonState(this, a2, a6, &a5, &v26);
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    CMILMatrix::CMILMatrix((CMILMatrix *)v20, &v26);
    *(struct D2D_RECT_F *)&v26.m11 = *a3;
    v25 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v20, (struct MilRectF *)&v26, (float *)&v25);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0ffff_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_ETWGUID_DRAWEVENT,
        v13,
        *((float *)&v25 + 1),
        SBYTE8(v25),
        SBYTE12(v25));
  }
  ColorSpace = CD2DTarget::GetColorSpace(v11);
  g = a4->g;
  b = a4->b;
  if ( ColorSpace )
  {
    r = a4->r;
    v22 = g;
    v23 = b;
  }
  else
  {
    r = scRGBTosRGB(a4->r);
    v22 = scRGBTosRGB(g);
    v23 = scRGBTosRGB(b);
  }
  v17 = *((_QWORD *)this + 39);
  v24 = fminf(1.0, fmaxf(a4->a, 0.0));
  (*(void (__fastcall **)(__int64, D3DVALUE *))(*(_QWORD *)v17 + 64LL))(v17, &r);
  (*(void (__fastcall **)(_QWORD, const struct D2D_RECT_F *, _QWORD))(**((_QWORD **)this + 25) + 136LL))(
    *((_QWORD *)this + 25),
    a3,
    *((_QWORD *)this + 39));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v18 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_DRAWEVENT_Stop,
      2,
      v18);
  }
  return 0LL;
}
