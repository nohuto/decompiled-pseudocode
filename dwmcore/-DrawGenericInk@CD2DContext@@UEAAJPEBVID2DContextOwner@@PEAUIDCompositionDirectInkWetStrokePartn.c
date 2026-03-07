__int64 __fastcall CD2DContext::DrawGenericInk(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        struct IDCompositionDirectInkWetStrokePartner *a3,
        enum D2D1_ANTIALIAS_MODE a4,
        enum D2D1_PRIMITIVE_BLEND a5,
        float a6,
        bool a7)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 (__fastcall ***v15)(_QWORD, struct D2D_MATRIX_3X2_F *); // rcx
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  enum D2D1_ANTIALIAS_MODE v20; // [rsp+30h] [rbp-58h] BYREF
  struct D2D_MATRIX_3X2_F v21; // [rsp+38h] [rbp-50h] BYREF

  v20 = a4;
  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw(this);
  CD2DContext::SetCommonState(this, a2, a5, &v20, &v21);
  v12 = *((_DWORD *)this + 88);
  v13 = 0LL;
  if ( v12 )
    v13 = *(_QWORD *)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v12 - 1));
  v14 = *(_QWORD *)(v13 + 24);
  if ( v14 )
  {
    v15 = (__int64 (__fastcall ***)(_QWORD, struct D2D_MATRIX_3X2_F *))(v14 + *(int *)(*(_QWORD *)(v14 + 8) + 12LL)
                                                                            + 8LL);
    if ( *(_DWORD *)((**v15)(v15, &v21) + 8) == 1 )
      (**(__int64 (__fastcall ***)(__int64, struct D2D_MATRIX_3X2_F *))v14)(v14, &v21);
  }
  v16 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, __int64, __int64, bool))(*(_QWORD *)a3 + 56LL))(
          a3,
          v10,
          v11,
          a7);
  v18 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x18Fu, 0LL);
  return v18;
}
