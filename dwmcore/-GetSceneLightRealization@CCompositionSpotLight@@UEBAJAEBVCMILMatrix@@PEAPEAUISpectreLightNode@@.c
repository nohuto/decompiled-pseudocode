__int64 __fastcall CCompositionSpotLight::GetSceneLightRealization(
        CCompositionSpotLight *this,
        const struct CMILMatrix *a2,
        struct ISpectreLightNode **a3)
{
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  __int64 v9; // rcx
  int v10; // xmm1_4
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  float v15; // xmm6_4
  int v16; // ebx
  __int64 v17; // rdx
  struct D2D_VECTOR_4F v18; // [rsp+28h] [rbp-79h] BYREF
  _DWORD v19[2]; // [rsp+38h] [rbp-69h] BYREF
  struct D2D_VECTOR_4F v20; // [rsp+40h] [rbp-61h] BYREF
  _OWORD v21[4]; // [rsp+58h] [rbp-49h] BYREF
  int v22; // [rsp+98h] [rbp-9h]
  float v23[4]; // [rsp+A8h] [rbp+7h] BYREF
  struct D2D_VECTOR_3F v24; // [rsp+B8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  *a3 = (struct ISpectreLightNode *)*((_QWORD *)this + 22);
  v5 = *((_QWORD *)this + 22);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 80LL))(v5, (char *)this + 312);
    if ( v6 < 0 )
    {
      v7 = 701LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionspotlight.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 88LL))(*((_QWORD *)this + 22));
    if ( v6 < 0 )
    {
      v7 = 702LL;
      goto LABEL_4;
    }
    v9 = *((_QWORD *)this + 22);
    v10 = *((_DWORD *)this + 96);
    v19[0] = *((_DWORD *)this + 95);
    v19[1] = v10;
    v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v9 + 104LL))(v9, v19);
    if ( v6 < 0 )
    {
      v7 = 705LL;
      goto LABEL_4;
    }
    v11 = *(_OWORD *)((char *)this + 184);
    v12 = *(_OWORD *)((char *)this + 200);
    v22 = *((_DWORD *)this + 62);
    v21[0] = v11;
    v13 = *(_OWORD *)((char *)this + 216);
    v21[1] = v12;
    v14 = *(_OWORD *)((char *)this + 232);
    v21[2] = v13;
    v21[3] = v14;
    CMILMatrix::Multiply((CMILMatrix *)v21, a2);
    LODWORD(v14) = *((_DWORD *)this + 90);
    v18.x = *((FLOAT *)this + 89);
    v18.z = *((FLOAT *)this + 91);
    LODWORD(v18.y) = v14;
    v18.w = 1.0;
    v20 = v18;
    CMILMatrix::Transform4DVector((CMILMatrix *)v21, &v18, &v20);
    v15 = (float)(1.0 / v18.w) * v18.z;
    v23[0] = (float)(1.0 / v18.w) * v18.x;
    v18.x = *((FLOAT *)this + 92);
    LODWORD(v13) = *((_DWORD *)this + 94);
    v23[1] = (float)(1.0 / v18.w) * v18.y;
    LODWORD(v14) = *((_DWORD *)this + 93);
    LODWORD(v18.z) = v13;
    v23[2] = v15;
    LODWORD(v18.y) = v14;
    CMILMatrix::Transform3DVector((CMILMatrix *)v21, &v24, (const struct D2D_VECTOR_3F *)&v18);
    v16 = (*(__int64 (__fastcall **)(_QWORD, float *, struct D2D_VECTOR_3F *))(**((_QWORD **)this + 22) + 96LL))(
            *((_QWORD *)this + 22),
            v23,
            &v24);
    if ( v16 >= 0 )
      return 0LL;
    v17 = 713LL;
  }
  else
  {
    v16 = -2147467259;
    v17 = 717LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionspotlight.cpp",
    (const char *)(unsigned int)v16);
  return (unsigned int)v16;
}
