__int64 __fastcall CCompositionPointLight::GetSceneLightRealization(
        CCompositionPointLight *this,
        const struct CMILMatrix *a2,
        struct ISpectreLightNode **a3)
{
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rdx
  struct D2D_VECTOR_4F v16; // [rsp+28h] [rbp-59h] BYREF
  struct D2D_VECTOR_4F v17; // [rsp+38h] [rbp-49h] BYREF
  _OWORD v18[4]; // [rsp+48h] [rbp-39h] BYREF
  int v19; // [rsp+88h] [rbp+7h]
  float v20[4]; // [rsp+98h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  *a3 = (struct ISpectreLightNode *)*((_QWORD *)this + 22);
  v5 = *((_QWORD *)this + 22);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 80LL))(v5, (char *)this + 264);
    if ( v6 < 0 )
    {
      v7 = 361LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionpointlight.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 88LL))(*((_QWORD *)this + 22));
    if ( v6 < 0 )
    {
      v7 = 362LL;
      goto LABEL_4;
    }
    v9 = *(_OWORD *)((char *)this + 184);
    v10 = *(_OWORD *)((char *)this + 200);
    v19 = *((_DWORD *)this + 62);
    v18[0] = v9;
    v11 = *(_OWORD *)((char *)this + 216);
    v18[1] = v10;
    v12 = *(_OWORD *)((char *)this + 232);
    v18[2] = v11;
    v18[3] = v12;
    CMILMatrix::Multiply((CMILMatrix *)v18, a2);
    LODWORD(v12) = *((_DWORD *)this + 74);
    v16.x = *((FLOAT *)this + 73);
    v16.z = *((FLOAT *)this + 75);
    LODWORD(v16.y) = v12;
    v16.w = 1.0;
    v17 = v16;
    CMILMatrix::Transform4DVector((CMILMatrix *)v18, &v16, &v17);
    v13 = *((_QWORD *)this + 22);
    v20[0] = (float)(1.0 / v16.w) * v16.x;
    v20[1] = (float)(1.0 / v16.w) * v16.y;
    v20[2] = (float)(1.0 / v16.w) * v16.z;
    v14 = (*(__int64 (__fastcall **)(__int64, float *, _QWORD))(*(_QWORD *)v13 + 96LL))(v13, v20, 0LL);
    if ( v14 >= 0 )
      return 0LL;
    v15 = 368LL;
  }
  else
  {
    v14 = -2147467259;
    v15 = 372LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionpointlight.cpp",
    (const char *)(unsigned int)v14);
  return (unsigned int)v14;
}
