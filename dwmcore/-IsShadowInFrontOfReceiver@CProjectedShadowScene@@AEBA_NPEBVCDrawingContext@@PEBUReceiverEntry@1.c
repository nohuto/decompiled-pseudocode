bool __fastcall CProjectedShadowScene::IsShadowInFrontOfReceiver(
        CProjectedShadowScene *this,
        ShadowHelpers **a2,
        const struct CProjectedShadowScene::ReceiverEntry *a3)
{
  const struct CVisualTree *v3; // rsi
  const struct CCompositionLight *v6; // rax
  int LightPosition; // eax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm8_4
  float v15; // xmm3_4
  struct D2D_VECTOR_3F *v17; // [rsp+28h] [rbp-49h] BYREF
  float v18; // [rsp+30h] [rbp-41h]
  _OWORD v19[2]; // [rsp+38h] [rbp-39h] BYREF
  __int128 v20; // [rsp+58h] [rbp-19h]
  __int128 v21; // [rsp+68h] [rbp-9h]
  int v22; // [rsp+78h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v3 = (const struct CVisualTree *)*((_QWORD *)this + 12);
  v6 = (const struct CCompositionLight *)(*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v3 + 200LL))(v3);
  LightPosition = ShadowHelpers::GetLightPosition(a2[1007], v3, v6, (struct CVisual *)&v17, v17);
  if ( LightPosition < 0 )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x3CF,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\projectedshadowscene.cpp",
      (const char *)(unsigned int)LightPosition,
      (int)v17);
    return 0;
  }
  else
  {
    v8 = *((_OWORD *)a3 + 2);
    v9 = *((_OWORD *)a3 + 3);
    v22 = *((_DWORD *)a3 + 24);
    v19[0] = v8;
    v10 = *((_OWORD *)a3 + 4);
    v19[1] = v9;
    v11 = *((_OWORD *)a3 + 5);
    v20 = v10;
    v21 = v11;
    CMILMatrix::Invert((CMILMatrix *)v19);
    CMILMatrix::Transpose((CMILMatrix *)v19);
    v12 = *(float *)&v17;
    v13 = *((float *)&v17 + 1);
    v14 = v18;
    if ( (*(unsigned int (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v3 + 216LL))(v3) == 2 )
    {
      v12 = v12 - (float)(*((float *)a3 + 20) / *((float *)a3 + 23));
      v13 = v13 - (float)(*((float *)a3 + 21) / *((float *)a3 + 23));
      v14 = v14 - (float)(*((float *)a3 + 22) / *((float *)a3 + 23));
    }
    v15 = *((float *)&v20 + 2);
    if ( (float)((float)((float)(*((float *)&v20 + 1) * v13) + (float)(*(float *)&v20 * v12))
               + (float)(*((float *)&v20 + 2) * v14)) <= 0.0 )
      LODWORD(v15) = DWORD2(v20) ^ _xmm;
    return v15 > 0.0;
  }
}
