__int64 __fastcall CD2DLayer::ApplyState(CD2DLayer *this, struct CDrawingContext *a2)
{
  const struct D2D_RECT_F *v2; // rdi

  v2 = (const struct D2D_RECT_F *)((char *)this + 8);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qqqq_EventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start,
      (int)v2->left,
      (int)*((float *)this + 3),
      (int)*((float *)this + 4),
      (int)*((float *)this + 5));
  CD2DContext::PushLayer(
    (CD2DContext *)(*((_QWORD *)a2 + 5) + 16LL),
    (const struct ID2DContextOwner *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL)),
    v2,
    *((struct ID2D1Geometry **)this + 3),
    (struct D2D_MATRIX_3X2_F *)(((unsigned __int64)this + 32) & -(__int64)(*((_BYTE *)this + 72) != 0)),
    *((float *)this + 17),
    *((enum D2D1_ANTIALIAS_MODE *)this + 14),
    *((enum D2D1_LAYER_OPTIONS1 *)this + 15),
    *((enum D2D1_PRIMITIVE_BLEND *)this + 16));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qqqq_EventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Stop,
      (int)v2->left,
      (int)*((float *)this + 3),
      (int)*((float *)this + 4),
      (int)*((float *)this + 5));
  return 0LL;
}
