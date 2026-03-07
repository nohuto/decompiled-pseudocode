__int64 __fastcall CColorKeyBitmap::InitColorKey(CColorKeyBitmap *this, const struct PixelFormatInfo *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // r12d
  __m128i v6; // xmm6
  struct _D3DCOLORVALUE v7; // xmm0
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  unsigned __int8 v13; // si
  unsigned __int8 v14; // bp
  int v15; // ebx
  int v16; // ebx
  unsigned __int8 v17; // al
  __m128 v18; // xmm0
  int v19; // eax
  int v20; // ebx
  unsigned __int8 v21; // al
  int v22; // eax
  unsigned __int8 v23; // si
  unsigned __int8 v24; // bp
  int v25; // ebx
  int v26; // ebx
  unsigned __int8 v27; // al
  __m128 v28; // xmm0
  int v29; // ebx
  int v30; // eax
  int v31; // ebx
  unsigned __int8 v32; // al
  int v33; // ebx
  unsigned int v34; // r11d
  unsigned int v35; // edx
  __int16 v36; // r11
  unsigned __int32 v37; // eax
  int v38; // ecx
  unsigned __int32 v39; // edx
  unsigned int v40; // ecx
  unsigned int v41; // edx
  int v42; // r10d
  __int16 v43; // r10
  unsigned int v44; // eax
  int v45; // ecx
  unsigned int v46; // edx
  unsigned int v47; // ecx
  unsigned int v48; // edx
  int v49; // r9d
  __int16 v50; // r9
  unsigned int v51; // eax
  int v52; // ecx
  unsigned int v53; // edx
  unsigned int v54; // ecx
  unsigned int v55; // edx
  int v56; // r8d
  __int16 v57; // r8
  unsigned int v58; // eax
  int v59; // ecx
  unsigned int v60; // edx
  unsigned int v61; // ecx
  D3DVALUE r; // xmm0_4
  unsigned int v63; // edx
  int v64; // r11d
  __int16 v65; // r11
  unsigned int v66; // eax
  int v67; // ecx
  unsigned int v68; // edx
  unsigned int v69; // ecx
  unsigned int v70; // edx
  __int16 v71; // r10
  __int16 v72; // r10
  unsigned int v73; // eax
  int v74; // ecx
  unsigned int v75; // edx
  unsigned int v76; // ecx
  unsigned int v77; // edx
  __int16 v78; // r9
  __int16 v79; // r9
  unsigned int v80; // eax
  int v81; // ecx
  unsigned int v82; // edx
  unsigned int v83; // ecx
  unsigned int v84; // edx
  __int16 v85; // r8
  __int16 v86; // r8
  unsigned int v87; // eax
  int v88; // ebx
  unsigned int v89; // edx
  unsigned int v90; // ecx
  unsigned int v92; // [rsp+20h] [rbp-68h]
  __m128i v93; // [rsp+30h] [rbp-58h]
  struct _D3DCOLORVALUE v94; // [rsp+40h] [rbp-48h] BYREF

  v3 = *((unsigned int *)a2 + 2);
  v4 = 0;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 != 1 )
    {
      v92 = 213;
LABEL_4:
      v4 = -2003292288;
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2003292288, v92, 0LL);
      return v4;
    }
    v6 = _mm_loadu_si128((const __m128i *)this + 3);
    *(struct _D3DCOLORVALUE *)&v7.r = (struct _D3DCOLORVALUE)_mm_loadu_si128((const __m128i *)this + 4);
    v93 = v6;
  }
  else
  {
    v6 = _mm_loadu_si128((const __m128i *)Convert_MilColorF_scRGB_To_MilColorF_sRGB(
                                            &v94,
                                            (const struct _D3DCOLORVALUE *)this + 3));
    v93 = v6;
    *(struct _D3DCOLORVALUE *)&v7.r = (struct _D3DCOLORVALUE)_mm_loadu_si128((const __m128i *)Convert_MilColorF_scRGB_To_MilColorF_sRGB(
                                                                                                &v94,
                                                                                                (const struct _D3DCOLORVALUE *)this
                                                                                              + 4));
  }
  v8 = *(_DWORD *)a2;
  *(struct _D3DCOLORVALUE *)&v94.r = *(struct _D3DCOLORVALUE *)&v7.r;
  v9 = v8 - 2;
  if ( !v9 )
  {
    *(__m128i *)((char *)this + 100) = v6;
    *(struct _D3DCOLORVALUE *)((char *)this + 132) = *(struct _D3DCOLORVALUE *)&v7.r;
    return v4;
  }
  v10 = v9 - 8;
  if ( v10 )
  {
    v11 = v10 - 18;
    if ( v11 )
    {
      v3 = (unsigned int)(v11 - 59);
      if ( (unsigned int)v3 >= 2 )
      {
        v92 = 287;
        goto LABEL_4;
      }
      *(struct _D3DCOLORVALUE *)&v94.r = (struct _D3DCOLORVALUE)_mm_loadu_si128((const __m128i *)this + 3);
      v12 = (int)floorf_0((float)(_mm_shuffle_ps(*(__m128 *)&v94.r, *(__m128 *)&v94.r, 255).m128_f32[0] * 255.0) + 0.5);
      v13 = -1;
      if ( v12 <= 255 )
      {
        v14 = 0;
        if ( v12 >= 0 )
          v14 = v12;
      }
      else
      {
        v14 = -1;
      }
      v15 = ((v14 << 8) | Convert_scRGB_Channel_To_sRGB_Byte(v94.r)) << 8;
      v16 = (Convert_scRGB_Channel_To_sRGB_Byte(v94.g) | v15) << 8;
      v17 = Convert_scRGB_Channel_To_sRGB_Byte(v94.b);
      v18 = (__m128)_mm_loadu_si128((const __m128i *)this + 4);
      *(struct _D3DCOLORVALUE *)&v94.r = (struct _D3DCOLORVALUE)v18;
      *((_DWORD *)this + 21) = v17 | v16;
      v19 = (int)floorf_0((float)(_mm_shuffle_ps(v18, v18, 255).m128_f32[0] * 255.0) + 0.5);
      if ( v19 <= 255 )
      {
        v13 = 0;
        if ( v19 >= 0 )
          v13 = v19;
      }
      v20 = ((v13 << 8) | Convert_scRGB_Channel_To_sRGB_Byte(v94.r)) << 8;
      v21 = Convert_scRGB_Channel_To_sRGB_Byte(v94.g);
      *((_DWORD *)this + 29) = Convert_scRGB_Channel_To_sRGB_Byte(v94.b) | ((v21 | v20) << 8);
    }
    else
    {
      *(struct _D3DCOLORVALUE *)&v94.r = (struct _D3DCOLORVALUE)_mm_loadu_si128((const __m128i *)this + 3);
      v22 = (int)floorf_0((float)(_mm_shuffle_ps(*(__m128 *)&v94.r, *(__m128 *)&v94.r, 255).m128_f32[0] * 255.0) + 0.5);
      v23 = -1;
      if ( v22 <= 255 )
      {
        v24 = 0;
        if ( v22 >= 0 )
          v24 = v22;
      }
      else
      {
        v24 = -1;
      }
      v25 = ((v24 << 8) | Convert_scRGB_Channel_To_sRGB_Byte(v94.r)) << 8;
      v26 = (Convert_scRGB_Channel_To_sRGB_Byte(v94.g) | v25) << 8;
      v27 = Convert_scRGB_Channel_To_sRGB_Byte(v94.b);
      v28 = (__m128)_mm_loadu_si128((const __m128i *)this + 4);
      v29 = v27 | v26;
      *(struct _D3DCOLORVALUE *)&v94.r = (struct _D3DCOLORVALUE)v28;
      *((_BYTE *)this + 90) = v29;
      *((_BYTE *)this + 88) = BYTE2(v29);
      *((_BYTE *)this + 89) = BYTE1(v29);
      *((_BYTE *)this + 91) = HIBYTE(v29);
      v30 = (int)floorf_0((float)(_mm_shuffle_ps(v28, v28, 255).m128_f32[0] * 255.0) + 0.5);
      if ( v30 <= 255 )
      {
        v23 = 0;
        if ( v30 >= 0 )
          v23 = v30;
      }
      v31 = ((v23 << 8) | Convert_scRGB_Channel_To_sRGB_Byte(v94.r)) << 8;
      v32 = Convert_scRGB_Channel_To_sRGB_Byte(v94.g);
      v33 = Convert_scRGB_Channel_To_sRGB_Byte(v94.b) | ((v32 | v31) << 8);
      *((_BYTE *)this + 122) = v33;
      *((_BYTE *)this + 120) = BYTE2(v33);
      *((_BYTE *)this + 123) = HIBYTE(v33);
      *((_BYTE *)this + 121) = BYTE1(v33);
    }
  }
  else
  {
    v34 = HIWORD(v93.m128i_i32[0]) & 0x8000;
    v35 = v93.m128i_i32[0] & 0x7FFFFFFF;
    if ( (v93.m128i_i32[0] & 0x7FFFFFFFu) <= 0x47FFEFFF )
    {
      v37 = v93.m128i_i32[0] & 0x7FFFFFFF;
      if ( v35 >= 0x38800000 )
      {
        v40 = v35 - 939520001;
      }
      else
      {
        v38 = 113 - (v35 >> 23);
        if ( v38 >= 24 )
          v39 = 0;
        else
          v39 = (v93.m128i_i32[0] & 0x7FFFFF | 0x800000u) >> v38;
        v37 = v39;
        v40 = v39 + 4095;
      }
      v36 = ((((v37 >> 13) & 1) + v40) >> 13) | v34;
    }
    else
    {
      v36 = v34 | 0x7FFF;
    }
    v41 = v93.m128i_i32[1] & 0x7FFFFFFF;
    v42 = HIWORD(v93.m128i_i32[1]) & 0x8000;
    if ( (v93.m128i_i32[1] & 0x7FFFFFFFu) <= 0x47FFEFFF )
    {
      v44 = v93.m128i_i32[1] & 0x7FFFFFFF;
      if ( v41 >= 0x38800000 )
      {
        v47 = v41 - 939520001;
      }
      else
      {
        v45 = 113 - (v41 >> 23);
        if ( v45 >= 24 )
          v46 = 0;
        else
          v46 = (v93.m128i_i32[1] & 0x7FFFFF | 0x800000u) >> v45;
        v44 = v46;
        v47 = v46 + 4095;
      }
      v43 = ((((v44 >> 13) & 1) + v47) >> 13) | v42;
    }
    else
    {
      v43 = v42 | 0x7FFF;
    }
    v48 = v93.m128i_i32[2] & 0x7FFFFFFF;
    v49 = HIWORD(v93.m128i_i32[2]) & 0x8000;
    if ( (v93.m128i_i32[2] & 0x7FFFFFFFu) <= 0x47FFEFFF )
    {
      v51 = v93.m128i_i32[2] & 0x7FFFFFFF;
      if ( v48 >= 0x38800000 )
      {
        v54 = v48 - 939520001;
      }
      else
      {
        v52 = 113 - (v48 >> 23);
        if ( v52 >= 24 )
          v53 = 0;
        else
          v53 = (v93.m128i_i32[2] & 0x7FFFFF | 0x800000u) >> v52;
        v51 = v53;
        v54 = v53 + 4095;
      }
      v50 = ((((v51 >> 13) & 1) + v54) >> 13) | v49;
    }
    else
    {
      v50 = v49 | 0x7FFF;
    }
    v55 = v93.m128i_i32[3] & 0x7FFFFFFF;
    v56 = HIWORD(v93.m128i_i32[3]) & 0x8000;
    if ( (v93.m128i_i32[3] & 0x7FFFFFFFu) <= 0x47FFEFFF )
    {
      v58 = v93.m128i_i32[3] & 0x7FFFFFFF;
      if ( v55 >= 0x38800000 )
      {
        v61 = v55 - 939520001;
      }
      else
      {
        v59 = 113 - (v55 >> 23);
        if ( v59 >= 24 )
          v60 = 0;
        else
          v60 = (v93.m128i_i32[3] & 0x7FFFFF | 0x800000u) >> v59;
        v58 = v60;
        v61 = v60 + 4095;
      }
      v57 = ((((v58 >> 13) & 1) + v61) >> 13) | v56;
    }
    else
    {
      v57 = v56 | 0x7FFF;
    }
    r = v94.r;
    *((_WORD *)this + 46) = v36;
    *((_WORD *)this + 48) = v50;
    *((_WORD *)this + 49) = v57;
    v63 = LODWORD(r) & 0x7FFFFFFF;
    *((_WORD *)this + 47) = v43;
    v64 = HIWORD(LODWORD(r)) & 0x8000;
    if ( (LODWORD(r) & 0x7FFFFFFFu) <= 0x47FFEFFF )
    {
      v66 = LODWORD(r) & 0x7FFFFFFF;
      if ( v63 >= 0x38800000 )
      {
        v69 = v63 - 939520001;
      }
      else
      {
        v67 = 113 - (v63 >> 23);
        if ( v67 >= 24 )
          v68 = 0;
        else
          v68 = (LODWORD(r) & 0x7FFFFF | 0x800000u) >> v67;
        v66 = v68;
        v69 = v68 + 4095;
      }
      v65 = ((((v66 >> 13) & 1) + v69) >> 13) | v64;
    }
    else
    {
      v65 = v64 | 0x7FFF;
    }
    v70 = LODWORD(v94.g) & 0x7FFFFFFF;
    v71 = HIWORD(v94.dvG) & 0x8000;
    if ( (LODWORD(v94.g) & 0x7FFFFFFFu) <= 0x47FFEFFF )
    {
      v73 = LODWORD(v94.g) & 0x7FFFFFFF;
      if ( v70 >= 0x38800000 )
      {
        v76 = v70 - 939520001;
      }
      else
      {
        v74 = 113 - (v70 >> 23);
        if ( v74 >= 24 )
          v75 = 0;
        else
          v75 = (LODWORD(v94.g) & 0x7FFFFF | 0x800000u) >> v74;
        v73 = v75;
        v76 = v75 + 4095;
      }
      v72 = ((((v73 >> 13) & 1) + v76) >> 13) | v71;
    }
    else
    {
      v72 = v71 | 0x7FFF;
    }
    v77 = LODWORD(v94.b) & 0x7FFFFFFF;
    v78 = HIWORD(v94.dvB) & 0x8000;
    if ( (LODWORD(v94.b) & 0x7FFFFFFFu) <= 0x47FFEFFF )
    {
      v80 = LODWORD(v94.b) & 0x7FFFFFFF;
      if ( v77 >= 0x38800000 )
      {
        v83 = v77 - 939520001;
      }
      else
      {
        v81 = 113 - (v77 >> 23);
        if ( v81 >= 24 )
          v82 = 0;
        else
          v82 = (LODWORD(v94.b) & 0x7FFFFF | 0x800000u) >> v81;
        v80 = v82;
        v83 = v82 + 4095;
      }
      v79 = ((((v80 >> 13) & 1) + v83) >> 13) | v78;
    }
    else
    {
      v79 = v78 | 0x7FFF;
    }
    v84 = LODWORD(v94.a) & 0x7FFFFFFF;
    v85 = HIWORD(v94.dvA) & 0x8000;
    if ( (LODWORD(v94.a) & 0x7FFFFFFFu) <= 0x47FFEFFF )
    {
      v87 = LODWORD(v94.a) & 0x7FFFFFFF;
      if ( v84 >= 0x38800000 )
      {
        v90 = v84 - 939520001;
      }
      else
      {
        v88 = 113 - (v84 >> 23);
        if ( v88 >= 24 )
          v89 = 0;
        else
          v89 = (LODWORD(v94.a) & 0x7FFFFF | 0x800000u) >> v88;
        v87 = v89;
        v90 = v89 + 4095;
      }
      v86 = ((((v87 >> 13) & 1) + v90) >> 13) | v85;
    }
    else
    {
      v86 = v85 | 0x7FFF;
    }
    *((_WORD *)this + 62) = v65;
    *((_WORD *)this + 63) = v72;
    *((_WORD *)this + 64) = v79;
    *((_WORD *)this + 65) = v86;
  }
  return v4;
}
