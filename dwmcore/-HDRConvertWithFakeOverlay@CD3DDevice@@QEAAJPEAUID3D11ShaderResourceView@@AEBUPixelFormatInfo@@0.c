__int64 __fastcall CD3DDevice::HDRConvertWithFakeOverlay(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        int *a5,
        __int64 *a6,
        unsigned int *a7,
        enum DXGI_MODE_ROTATION a8,
        __int64 a9,
        __int64 a10,
        int *a11,
        int a12,
        float a13,
        char a14,
        __int64 a15)
{
  int v15; // eax
  __int64 v17; // xmm0_8
  __int64 v18; // xmm0_8
  unsigned int i; // esi
  int v20; // ebx
  int v21; // edx
  __int64 v22; // rcx
  int CompositingPixelShaderNoRef; // eax
  __int64 v24; // rcx
  unsigned int v25; // ebx
  int v26; // eax
  CSurfaceShaderComposer *v27; // rcx
  float v28; // xmm0_4
  int v29; // eax
  int updated; // eax
  __int64 v31; // rcx
  int v32; // r8d
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  __int16 v37; // [rsp+70h] [rbp-90h] BYREF
  char v38; // [rsp+72h] [rbp-8Eh]
  int v39[4]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v40[2]; // [rsp+90h] [rbp-70h] BYREF
  struct ID3D11PixelShader *v41; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v42[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v43[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp+0h] BYREF
  float v46; // [rsp+108h] [rbp+8h]
  float v47; // [rsp+10Ch] [rbp+Ch]
  int v48; // [rsp+110h] [rbp+10h]
  int v49; // [rsp+114h] [rbp+14h]
  __int64 v50; // [rsp+118h] [rbp+18h] BYREF
  int v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+124h] [rbp+24h]
  int v53; // [rsp+12Ch] [rbp+2Ch]
  _DWORD v54[2]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v55; // [rsp+138h] [rbp+38h]
  int v56; // [rsp+148h] [rbp+48h]
  int v57; // [rsp+14Ch] [rbp+4Ch]
  int v58; // [rsp+150h] [rbp+50h]
  int v59; // [rsp+154h] [rbp+54h]
  int v60; // [rsp+158h] [rbp+58h]
  __m128i si128; // [rsp+15Ch] [rbp+5Ch]
  int v62; // [rsp+16Ch] [rbp+6Ch]
  __int128 v63; // [rsp+170h] [rbp+70h]
  __int128 v64; // [rsp+180h] [rbp+80h]
  __int128 v65; // [rsp+190h] [rbp+90h]
  __int128 v66; // [rsp+1A0h] [rbp+A0h]
  __int128 v67; // [rsp+1B0h] [rbp+B0h]

  v15 = *((_DWORD *)a3 + 2);
  v41 = 0LL;
  v45 = 0LL;
  v48 = 0;
  v44 = 0;
  v58 = 0;
  v60 = 0;
  v62 = 0;
  v55 = 0LL;
  v51 = v15;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v42[0] = a2;
  v64 = _xmm;
  v66 = _xmm;
  v17 = *a3;
  v63 = _xmm_bf800000bf800000000000003f800000;
  v50 = v17;
  v18 = *a6;
  v53 = *((_DWORD *)a6 + 2);
  v65 = _xmm;
  v42[1] = a4;
  v37 = 257;
  v38 = 1;
  v54[0] = -1082130432;
  v54[1] = 1065353216;
  v56 = -1082130432;
  v57 = -1082130432;
  v59 = 1065353216;
  v67 = _xmm;
  v52 = v18;
  CD3DDevice::CalcHDRConvertUVTransform(a11, a5, a7, a8, a9, (CMILMatrix *)v43);
  for ( i = 0; i < 6; ++i )
  {
    v20 = 6 * i;
    v40[0] = v54[6 * i + 2];
    v40[1] = v54[6 * i + 3];
    CMILMatrix::Transform((CMILMatrix *)v43, (const struct MilPoint2F *)v40, (struct MilPoint2F *)v39, 1);
    v54[v20 + 4] = v39[0];
    v54[v20 + 5] = v39[1];
  }
  v21 = *(_DWORD *)(a1 + 584);
  v22 = *(_QWORD *)(a1 + 1536);
  *(_QWORD *)&v39[2] = &v50;
  *(_QWORD *)v39 = 2LL;
  CompositingPixelShaderNoRef = CSurfaceShaderComposer::GetCompositingPixelShaderNoRef(v22, v21, (int)v39, a12, &v41);
  v25 = CompositingPixelShaderNoRef;
  if ( CompositingPixelShaderNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, CompositingPixelShaderNoRef, 0x9AFu, 0LL);
  }
  else
  {
    v26 = *a11;
    v27 = *(CSurfaceShaderComposer **)(a1 + 1536);
    v49 = 1065353216;
    v28 = (float)v26;
    v29 = a11[1];
    v46 = v28;
    v47 = (float)v29;
    updated = CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(v27, a13);
    v25 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, updated, 0x9B5u, 0LL);
    }
    else
    {
      v33 = *(_QWORD *)(a1 + 1536);
      *(_QWORD *)&v39[2] = &v37;
      *(_QWORD *)v39 = 1LL;
      v34 = CSurfaceShaderComposer::RunShader(
              v33,
              (unsigned int)v54,
              v32,
              (unsigned int)v42,
              2,
              (__int64)&v45,
              5,
              (__int64)v39,
              a14,
              a10,
              (__int64)v41,
              a15,
              1);
      v25 = v34;
      if ( v34 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x9C2u, 0LL);
    }
  }
  return v25;
}
