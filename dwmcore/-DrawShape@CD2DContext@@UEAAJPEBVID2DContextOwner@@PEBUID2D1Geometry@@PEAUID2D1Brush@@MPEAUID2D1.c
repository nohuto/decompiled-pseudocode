__int64 __fastcall CD2DContext::DrawShape(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct ID2D1Geometry *a3,
        struct ID2D1Brush *a4,
        float a5,
        struct ID2D1StrokeStyle1 *a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_PRIMITIVE_BLEND a8)
{
  unsigned int v12; // ebx
  __int64 v13; // rdx
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // eax
  int v21; // [rsp+40h] [rbp-68h] BYREF
  int v22; // [rsp+48h] [rbp-60h]
  int v23; // [rsp+4Ch] [rbp-5Ch]
  struct D2D_MATRIX_3X2_F v24; // [rsp+50h] [rbp-58h] BYREF

  CD2DContext::FlushDrawList(this);
  v12 = 0;
  CD2DContext::EnsureBeginDraw(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v15 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    McTemplateU0qq_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      3LL,
      v15);
  }
  CD2DContext::SetCommonState(this, a2, a8, &a7, &v24);
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    v16 = (*(__int64 (__fastcall **)(const struct ID2D1Geometry *, __int64, struct ID2D1StrokeStyle1 *, struct D2D_MATRIX_3X2_F *, _DWORD, int *))(*(_QWORD *)a3 + 40LL))(
            a3,
            v13,
            a6,
            &v24,
            LODWORD(FLOAT_0_25),
            &v21);
    v12 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x481u, 0LL);
      return v12;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0ffff_EventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
        v18,
        v19,
        v22,
        v23);
  }
  (*(void (__fastcall **)(_QWORD, const struct ID2D1Geometry *, struct ID2D1Brush *))(**((_QWORD **)this + 25) + 176LL))(
    *((_QWORD *)this + 25),
    a3,
    a4);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v20 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    McTemplateU0qq_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Stop,
      3LL,
      v20);
  }
  return v12;
}
