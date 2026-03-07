__int64 __fastcall CMaskBrush::GetBrushParameters(CMaskBrush *this, struct CBrushDrawListGenerator *a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 (__fastcall ***v9)(_QWORD, __int64); // rbx
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rdx
  int v11; // esi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 (__fastcall ***v18)(_QWORD, __int64); // rbx
  __int64 (__fastcall ***v19)(_QWORD, __int64); // rdx
  int v20; // eax
  unsigned int v22; // ecx
  _BYTE v23[16]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v24[16]; // [rsp+40h] [rbp-29h] BYREF
  int v25; // [rsp+50h] [rbp-19h]
  __int128 v26; // [rsp+54h] [rbp-15h]
  __int64 v27; // [rsp+68h] [rbp-1h]

  CBrushDrawListGenerator::CBrushDrawListGenerator(
    (CBrushDrawListGenerator *)v24,
    *(struct CDrawingContext **)a2,
    (const struct D2D_SIZE_F *)a2 + 1);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 12) + 312LL))(*((_QWORD *)this + 12), v24);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x19Eu, 0LL);
    goto LABEL_28;
  }
  v7 = v27;
  v8 = (__int64 *)((char *)a2 + 40);
  v27 = 0LL;
  v9 = (__int64 (__fastcall ***)(_QWORD, __int64))v7;
  *(_OWORD *)((char *)a2 + 20) = v26;
  if ( (char *)a2 + 40 != v23 )
  {
    v10 = (__int64 (__fastcall ***)(_QWORD, __int64))*v8;
    v9 = 0LL;
    *v8 = v7;
    if ( v10 )
      std::default_delete<CDrawListBrush>::operator()(v7, v10);
  }
  v11 = v25;
  v12 = 1;
  if ( *((_DWORD *)a2 + 18) > 1u )
    v12 = *((_DWORD *)a2 + 18);
  *((_DWORD *)a2 + 18) = v12;
  if ( v9 )
    std::default_delete<CDrawListBrush>::operator()(v7, v9);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v24);
  v13 = *((_QWORD *)this + 11);
  if ( !v13 )
    goto LABEL_20;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 56LL))(v13, 113LL)
    && !CMaskBrush::IsValidMaskResource(*(const struct CResource **)(*((_QWORD *)this + 11) + 88LL)) )
  {
    v6 = -2147024846;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      McTemplateU0q_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MASKBRUSH_DRAW_ERROR_INVALID_INPUT,
        2147942450LL);
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024846, 0x1B5u, 0LL);
    goto LABEL_29;
  }
  CBrushDrawListGenerator::CBrushDrawListGenerator(
    (CBrushDrawListGenerator *)v24,
    *(struct CDrawingContext **)a2,
    (const struct D2D_SIZE_F *)a2 + 1);
  v14 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 11) + 312LL))(*((_QWORD *)this + 11), v24);
  v6 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1BDu, 0LL);
LABEL_28:
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v24);
LABEL_29:
    CBrushDrawListGenerator::Reset(a2);
    return v6;
  }
  v16 = v27;
  v17 = (__int64 *)((char *)a2 + 48);
  v27 = 0LL;
  v18 = (__int64 (__fastcall ***)(_QWORD, __int64))v16;
  if ( (char *)a2 + 48 != v23 )
  {
    v19 = (__int64 (__fastcall ***)(_QWORD, __int64))*v17;
    v18 = 0LL;
    *v17 = v16;
    if ( v19 )
      std::default_delete<CDrawListBrush>::operator()(v16, v19);
  }
  v20 = 2;
  if ( *((_DWORD *)a2 + 18) > 2u )
    v20 = *((_DWORD *)a2 + 18);
  v11 |= v25;
  *((_DWORD *)a2 + 18) = v20;
  if ( v18 )
    std::default_delete<CDrawListBrush>::operator()(v16, v18);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v24);
LABEL_20:
  *((_DWORD *)a2 + 4) = v11;
  return 0;
}
