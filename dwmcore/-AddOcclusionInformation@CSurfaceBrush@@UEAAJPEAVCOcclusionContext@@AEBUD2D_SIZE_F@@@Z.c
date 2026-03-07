__int64 __fastcall CSurfaceBrush::AddOcclusionInformation(
        CSurfaceBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  char v3; // si
  CSurfaceBrush *v4; // r15
  unsigned int v5; // ebx
  char v9; // al
  __int64 *v10; // rcx
  char v11; // r12
  __int64 v12; // rax
  struct CShape *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r11
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // r9d
  int v20; // eax
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  int v23; // r9d
  __int64 v24; // r11
  unsigned int v25; // [rsp+20h] [rbp-A9h]
  __int64 v26; // [rsp+30h] [rbp-99h] BYREF
  __int64 v27; // [rsp+38h] [rbp-91h] BYREF
  int v28; // [rsp+40h] [rbp-89h] BYREF
  struct D2D_MATRIX_3X2_F v29; // [rsp+48h] [rbp-81h] BYREF
  _BYTE v30[80]; // [rsp+70h] [rbp-59h] BYREF
  __int128 v31; // [rsp+C0h] [rbp-9h] BYREF
  __int64 *v32; // [rsp+D0h] [rbp+7h] BYREF
  struct CShape *v33; // [rsp+D8h] [rbp+Fh] BYREF
  char v34; // [rsp+E0h] [rbp+17h]

  v3 = 0;
  v4 = (CSurfaceBrush *)((char *)this - 200);
  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 25) + 192LL))((char *)this - 200) )
    return v5;
  if ( a3->width <= 0.0 )
    return v5;
  if ( a3->height <= 0.0 )
    return v5;
  v9 = (*(__int64 (__fastcall **)(_QWORD, CSurfaceBrush *))(**((_QWORD **)this - 11) + 8LL))(*((_QWORD *)this - 11), v4);
  v10 = (__int64 *)*((_QWORD *)this - 11);
  v11 = v9;
  v12 = *v10;
  v26 = 0LL;
  (*(void (__fastcall **)(__int64 *, CSurfaceBrush *, __int64 *))(v12 + 56))(v10, v4, &v26);
  if ( !v11 && !v26 )
    return v5;
  v27 = 0LL;
  v32 = &v27;
  v33 = 0LL;
  v34 = 1;
  v5 = CSurfaceBrush::ComputeLayout(v4, a3, (struct CContent::LayoutData *)&v29, &v33);
  if ( v34 )
  {
    v13 = v33;
    v14 = *v32;
    *v32 = (__int64)v33;
    if ( v14 )
      std::default_delete<CShape>::operator()(v13, v14);
  }
  if ( v5 != -2003304441 )
  {
    if ( (v5 & 0x80000000) != 0 )
    {
      v23 = v5;
      v25 = 317;
      goto LABEL_37;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 64LL))(v27, &v28) || v28 != 1 )
      goto LABEL_35;
    if ( *((_BYTE *)a2 + 1205) )
    {
      v15 = v26;
      if ( !v26 )
        goto LABEL_18;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v26 + 272LL))(v26) )
        v3 = 1;
    }
    v15 = v26;
LABEL_18:
    if ( v11 )
    {
      v17 = *((_QWORD *)this - 11);
      v31 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, CSurfaceBrush *, __int64 **))(*(_QWORD *)v17 + 24LL))(
             v17,
             v4,
             &v32)
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v33 + 1) - 1.0) & _xmm) < 0.0000011920929 )
      {
        width = a3->width;
        height = a3->height;
        *(_QWORD *)&v31 = 0LL;
        *((_QWORD *)&v31 + 1) = __PAIR64__(LODWORD(height), LODWORD(width));
      }
      else
      {
        v20 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)v27 + 48LL))(v27, &v31, 0LL);
        v5 = v20;
        if ( v20 < 0 )
        {
          v25 = 343;
LABEL_33:
          v23 = v20;
LABEL_37:
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v13, 0LL, 0, v23, v25, 0LL);
          goto LABEL_38;
        }
      }
      LOBYTE(v18) = v3;
      COcclusionContext::CollectRectangleForOcclusion((_DWORD)a2, (unsigned int)&v31, v18, v19, 0LL);
      v15 = v26;
    }
    if ( !v3 )
    {
LABEL_20:
      if ( v27 )
      {
        (**(void (__fastcall ***)(__int64, __int64))v27)(v27, 1LL);
        v15 = v26;
      }
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      return v5;
    }
    CMILMatrix::CMILMatrix((CMILMatrix *)v30, &v29);
    v20 = COcclusionContext::CheckAndRecordOverlayCandidate(
            (__int64)a2,
            *((_QWORD *)a2 + 149),
            v24,
            (__int64)v30,
            v27,
            0);
    v5 = v20;
    if ( v20 >= 0 )
    {
LABEL_35:
      v15 = v26;
      goto LABEL_20;
    }
    v25 = 358;
    goto LABEL_33;
  }
  v5 = 0;
LABEL_38:
  if ( v27 )
    std::default_delete<CShape>::operator()(v13, v27);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
  return v5;
}
