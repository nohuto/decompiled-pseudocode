unsigned int __fastcall CDrawListEntryBuilder::ComputeColorAndUV(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // eax
  unsigned int v9; // r9d
  int v10; // r10d
  unsigned int v11; // ecx
  float i; // xmm4_4
  __int64 v13; // r8
  __int64 v14; // rdx
  bool v15; // dl
  char v16; // r9
  float v17; // xmm0_4
  unsigned int v18; // r11d
  float v19; // xmm0_4
  int v20; // r11d
  float v21; // xmm0_4
  unsigned int result; // eax
  unsigned int v23; // r11d
  int v24; // ebp
  const struct _D3DCOLORVALUE *v25; // rcx
  unsigned int j; // edx
  __int64 v27; // r8
  float *v28; // r9
  unsigned int v29; // eax
  float v30; // xmm2_4
  __int64 v31; // r10
  float v32; // xmm14_4
  float v33; // xmm12_4
  float v34; // xmm13_4
  float v35; // xmm5_4
  float v36; // xmm6_4
  float v37; // xmm7_4
  float v38; // xmm1_4
  float v39; // xmm8_4
  float v40; // xmm4_4
  float v41; // xmm3_4
  float v42; // xmm0_4
  float v43; // xmm2_4
  float v44; // xmm1_4
  float v45; // xmm7_4
  char v46; // r9
  _BYTE v47[4]; // [rsp+20h] [rbp-F8h]
  float v48; // [rsp+24h] [rbp-F4h]
  float v49; // [rsp+28h] [rbp-F0h]
  float v50; // [rsp+2Ch] [rbp-ECh]
  _BYTE v51[8]; // [rsp+30h] [rbp-E8h]
  struct _D3DCOLORVALUE v52; // [rsp+38h] [rbp-E0h] BYREF

  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 24LL))(*(_QWORD *)(a1 + 80));
  v9 = *(_DWORD *)a1;
  v10 = v8;
  v11 = 0;
  for ( i = 0.0; v11 < v9; ++v11 )
  {
    if ( a2 && (unsigned __int64)v11 < *(_QWORD *)(a2 + 40) && _bittest(&v10, v11) )
    {
      v47[v11] = 1;
      if ( (unsigned __int64)v11 >= *(_QWORD *)(a2 + 40) )
      {
LABEL_59:
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v13 = *(_QWORD *)(a2 + 48);
      v14 = 52LL * v11;
      v15 = *(float *)(v13 + v14 + 36) != 0.0
         || *(float *)(v13 + v14 + 40) != 0.0
         || *(float *)(v13 + v14 + 44) != 1.0
         || *(float *)(v13 + v14 + 48) != 1.0;
      v51[v11] = v15;
    }
    else
    {
      v47[v11] = 0;
    }
  }
  if ( a2 && *(_BYTE *)(a1 + 29) )
  {
    v16 = 1;
  }
  else
  {
    v16 = 0;
    if ( !a2 )
    {
      *(struct _D3DCOLORVALUE *)&v52.r = (struct _D3DCOLORVALUE)_xmm;
LABEL_17:
      v17 = (float)(v52.a * 255.0) + 6291456.25;
      v48 = v17;
      v18 = (LODWORD(v17) << 23) & 0xFF00FFFF;
      v19 = (float)(v52.b * 255.0) + 6291456.25;
      v49 = v19;
      v20 = (LODWORD(v19) << 15) | v18;
      v21 = (float)(v52.g * 255.0) + 6291456.25;
      v50 = v21;
      v52.r = (float)(v52.r * 255.0) + 6291456.25;
      result = (int)(LODWORD(v52.r) << 10) >> 11;
      v23 = result | ((int)(LODWORD(v21) << 10) >> 3) & 0xFFFFFF00 | v20 & 0xFFFF0000;
      v24 = 0;
      if ( !a2 )
        goto LABEL_20;
      goto LABEL_18;
    }
  }
  *(struct _D3DCOLORVALUE *)&v52.r = *(struct _D3DCOLORVALUE *)a2;
  if ( !v16 )
    goto LABEL_17;
  result = ColorDWFromStraightColorF(&v52);
  v23 = result;
  v24 = result & 0xFFFFFF;
  if ( !v46 )
    v24 = 0;
LABEL_18:
  v25 = *(const struct _D3DCOLORVALUE **)(a2 + 24);
  if ( v25 )
  {
    result = ColorDWFromStraightColorF(v25);
    v24 = result;
  }
LABEL_20:
  for ( j = 0; j < *(_DWORD *)(a3 + 12); ++j )
  {
    v27 = *(_QWORD *)a3 + (int)(*(_DWORD *)(a3 + 8) * j);
    v28 = (float *)(*(_QWORD *)a4 + (int)(*(_DWORD *)(a4 + 8) * j));
    if ( v28[3] == i )
      v29 = v24;
    else
      v29 = v23;
    *(_DWORD *)(v27 + 12) = v29;
    result = 0;
    if ( *(_DWORD *)a1 )
    {
      do
      {
        if ( v47[result] )
        {
          if ( (unsigned __int64)result >= *(_QWORD *)(a2 + 40) )
            goto LABEL_59;
          v30 = *(float *)(v27 + 4);
          v31 = *(_QWORD *)(a2 + 48) + 52LL * result;
          v32 = *(float *)(v31 + 32);
          v33 = *(float *)(v31 + 24);
          v34 = *(float *)(v31 + 28);
          v35 = (float)((float)(*(float *)v31 * *(float *)v27) + (float)(*(float *)(v31 + 12) * v30)) + v33;
          v36 = (float)((float)(*(float *)(v31 + 4) * *(float *)v27) + (float)(*(float *)(v31 + 16) * v30)) + v34;
          v37 = (float)((float)(*(float *)(v31 + 8) * *(float *)v27) + (float)(*(float *)(v31 + 20) * v30)) + v32;
          if ( COERCE_FLOAT(LODWORD(v37) & _xmm) >= 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v37 - 1.0) & _xmm) >= 0.000081380211 )
          {
            v35 = v35 / v37;
            v36 = v36 / v37;
          }
          v38 = v28[1];
          v39 = (float)((float)(*(float *)(v31 + 8) * *v28) + (float)(*(float *)(v31 + 20) * v38)) + v32;
          v40 = (float)((float)(*(float *)v31 * *v28) + (float)(*(float *)(v31 + 12) * v38)) + v33;
          v41 = (float)((float)(*(float *)(v31 + 4) * *v28) + (float)(*(float *)(v31 + 16) * v38)) + v34;
          if ( COERCE_FLOAT(LODWORD(v39) & _xmm) >= 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v39 - 1.0) & _xmm) >= 0.000081380211 )
          {
            v40 = v40 / v39;
            v41 = v41 / v39;
          }
          if ( v51[result] )
          {
            v42 = *(float *)(v31 + 44);
            v43 = *(float *)(v31 + 36);
            if ( v35 > v42 )
              v35 = *(float *)(v31 + 44);
            else
              v35 = fmaxf(v35, v43);
            v44 = *(float *)(v31 + 48);
            v45 = *(float *)(v31 + 40);
            if ( v36 > v44 )
              v36 = *(float *)(v31 + 48);
            else
              v36 = fmaxf(v36, v45);
            if ( v40 > v42 )
              v40 = *(float *)(v31 + 44);
            else
              v40 = fmaxf(v40, v43);
            if ( v41 > v44 )
              v41 = *(float *)(v31 + 48);
            else
              v41 = fmaxf(v41, v45);
          }
          *(float *)(v27 + 8LL * result + 16) = v35;
          *(float *)(v27 + 8LL * result + 20) = v36;
          v28[2 * result + 4] = v40;
          v28[2 * result + 5] = v41;
        }
        else
        {
          *(_QWORD *)(v27 + 8LL * result + 16) = 0LL;
          *(_QWORD *)&v52.r = 0LL;
          *(_QWORD *)&v28[2 * result + 4] = 0LL;
        }
        ++result;
      }
      while ( result < *(_DWORD *)a1 );
      i = 0.0;
    }
  }
  return result;
}
