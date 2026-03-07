__int64 __fastcall CPrimitiveGroup::CreateHitTestRegions(CPrimitiveGroup *this)
{
  unsigned int v2; // r13d
  unsigned int v3; // ebx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  char v8; // r14
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // r10d
  __int64 v12; // rsi
  char v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rax
  char *v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  float *v20; // rcx
  unsigned int v21; // r11d
  int v22; // r8d
  int v23; // edx
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int v26; // edx
  int v27; // edi
  int D2DGeometry; // eax
  unsigned int v29; // ecx
  _BYTE *v31; // rax
  const struct MilRectF *v32; // r9
  float *v33; // rcx
  __int64 v34; // r9
  const struct MilRectF *v35; // r10
  unsigned int v36; // r11d
  unsigned int v37; // ecx
  __m128 v38; // xmm2
  __m128 v39; // xmm1
  int v40; // r8d
  __m128 v41; // xmm2
  __m128 v42; // xmm1
  int v43; // edx
  __m128 v44; // xmm2
  __m128 v45; // xmm1
  int v46; // eax
  __m128 v47; // xmm2
  __m128 v48; // xmm1
  unsigned int v49; // edx
  __int128 v50; // xmm0
  __int64 v51; // rcx
  int v52; // eax
  FLOAT v53; // xmm2_4
  unsigned int v54; // xmm0_4
  unsigned int v55; // xmm1_4
  struct D2D_POINT_2F *v56; // rax
  FLOAT v57; // xmm2_4
  __int64 v58; // rdx
  unsigned int v59; // xmm0_4
  FLOAT v60; // xmm3_4
  FLOAT *v61; // r9
  __int64 v62; // r10
  unsigned int v63; // r11d
  float v64; // xmm0_4
  int v65; // r8d
  __m128 v66; // xmm2
  __m128 v67; // xmm1
  float v68; // xmm0_4
  int v69; // edx
  __m128 v70; // xmm2
  __m128 v71; // xmm1
  float v72; // xmm0_4
  unsigned int v73; // ecx
  __m128 v74; // xmm2
  __m128 v75; // xmm1
  float v76; // xmm0_4
  int v77; // eax
  __m128 v78; // xmm2
  __m128 v79; // xmm1
  int v80; // eax
  int v81; // eax
  int v82; // r9d
  __m128 v83; // xmm2
  __m128 v84; // xmm1
  __m128 v85; // xmm2
  __m128 v86; // xmm1
  __m128 v87; // xmm2
  __m128 v88; // xmm1
  __m128 v89; // xmm2
  __m128 v90; // xmm1
  int v91; // eax
  unsigned int v92; // ecx
  struct D2D_POINT_2F *v93; // rax
  FLOAT v94; // xmm2_4
  unsigned int v95; // xmm0_4
  unsigned int v96; // xmm1_4
  __int64 v97; // rdx
  FLOAT v98; // xmm3_4
  unsigned int v99; // [rsp+28h] [rbp-E0h]
  float v100; // [rsp+38h] [rbp-D0h]
  float v101; // [rsp+38h] [rbp-D0h]
  float v102; // [rsp+38h] [rbp-D0h]
  float v103; // [rsp+38h] [rbp-D0h]
  float v104; // [rsp+38h] [rbp-D0h]
  float v105; // [rsp+38h] [rbp-D0h]
  float v106; // [rsp+38h] [rbp-D0h]
  float v107; // [rsp+38h] [rbp-D0h]
  float v108; // [rsp+38h] [rbp-D0h]
  float v109; // [rsp+38h] [rbp-D0h]
  float v110; // [rsp+38h] [rbp-D0h]
  float v111; // [rsp+38h] [rbp-D0h]
  char v112; // [rsp+40h] [rbp-C8h]
  __int64 v113; // [rsp+48h] [rbp-C0h] BYREF
  struct ID2D1GeometrySink *v114; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v115; // [rsp+58h] [rbp-B0h]
  unsigned int v116; // [rsp+5Ch] [rbp-ACh]
  __int128 v117; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v118; // [rsp+70h] [rbp-98h] BYREF
  __int128 v119; // [rsp+80h] [rbp-88h] BYREF
  __int128 v120; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v121[3]; // [rsp+A8h] [rbp-60h] BYREF
  int v122; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v123; // [rsp+100h] [rbp-8h]
  _QWORD v124[2]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v125; // [rsp+11Ch] [rbp+14h]
  unsigned int v126; // [rsp+120h] [rbp+18h]
  struct D2D_POINT_2F v127; // [rsp+228h] [rbp+120h] BYREF
  unsigned int v128; // [rsp+230h] [rbp+128h]
  FLOAT y; // [rsp+234h] [rbp+12Ch]
  unsigned __int64 v130; // [rsp+238h] [rbp+130h]
  FLOAT v131; // [rsp+240h] [rbp+138h]
  unsigned int v132; // [rsp+244h] [rbp+13Ch]

  v2 = 0;
  v3 = 0;
  DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>(v124);
  v113 = 0LL;
  v114 = 0LL;
  ReleaseInterface<ID2D1Geometry>((char *)this + 88);
  ReleaseInterface<ID2D1Geometry>((char *)this + 96);
  v5 = *((_QWORD *)this + 63);
  v6 = v5 + *((_QWORD *)this + 64);
  while ( v5 < v6 )
  {
    v31 = (_BYTE *)(v5 + 16);
    v32 = (const struct MilRectF *)v5;
    v5 += 17LL;
    if ( (unsigned __int64)v31 > v6 || v5 > v6 )
    {
      v99 = 818;
      goto LABEL_111;
    }
    if ( *v31 )
    {
      v4 = v5;
      v5 += 24LL;
      if ( v5 > v6 )
      {
        v99 = 829;
LABEL_111:
        v82 = -2147467259;
        v3 = -2147467259;
        goto LABEL_112;
      }
      if ( MILMatrix3x2::Is2DAxisAlignedPreservingApprox((MILMatrix3x2 *)v4) )
      {
        v118 = 0LL;
        MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v33, v35, (struct MilRectF *)&v118);
        if ( IsPixelAligned((const struct MilRectF *)&v118) )
        {
          if ( (v36 & HIDWORD(v118)) > 0x497FFFF0 )
          {
            v38 = 0LL;
            v39.m128_f32[0] = -0.5;
            v38.m128_f32[0] = (float)(int)*((float *)&v118 + 3) - *((float *)&v118 + 3);
            v37 = (int)*((float *)&v118 + 3) - _mm_cmple_ss(v38, v39).m128_u32[0];
          }
          else
          {
            v104 = *((float *)&v118 + 3) + 6291456.25;
            v37 = (int)(LODWORD(v104) << 10) >> 11;
          }
          if ( (v36 & DWORD2(v118)) > 0x497FFFF0 )
          {
            v41 = 0LL;
            v42.m128_f32[0] = -0.5;
            v41.m128_f32[0] = (float)(int)*((float *)&v118 + 2) - *((float *)&v118 + 2);
            v40 = (int)*((float *)&v118 + 2) - _mm_cmple_ss(v41, v42).m128_u32[0];
          }
          else
          {
            v105 = *((float *)&v118 + 2) + 6291456.25;
            v40 = (int)(LODWORD(v105) << 10) >> 11;
          }
          if ( (v36 & DWORD1(v118)) > 0x497FFFF0 )
          {
            v44 = 0LL;
            v45.m128_f32[0] = -0.5;
            v44.m128_f32[0] = (float)(int)*((float *)&v118 + 1) - *((float *)&v118 + 1);
            v43 = (int)*((float *)&v118 + 1) - _mm_cmple_ss(v44, v45).m128_u32[0];
          }
          else
          {
            v106 = *((float *)&v118 + 1) + 6291456.25;
            v43 = (int)(LODWORD(v106) << 10) >> 11;
          }
          if ( (v36 & (unsigned int)v118) > 0x497FFFF0 )
          {
            v47 = 0LL;
            v48.m128_f32[0] = -0.5;
            v47.m128_f32[0] = (float)(int)*(float *)&v118 - *(float *)&v118;
            v46 = (int)*(float *)&v118 - _mm_cmple_ss(v47, v48).m128_u32[0];
          }
          else
          {
            v107 = *(float *)&v118 + 6291456.25;
            v46 = (int)(LODWORD(v107) << 10) >> 11;
          }
          *(_QWORD *)&v117 = __PAIR64__(v43, v46);
          *((_QWORD *)&v117 + 1) = __PAIR64__(v37, v40);
          v49 = v126 + 1;
          if ( v126 + 1 < v126 )
          {
            v3 = -2147024362;
            v27 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, -2147024362, 0xB5u, 0LL);
            goto LABEL_98;
          }
          v27 = 0;
          if ( v49 <= v125 )
          {
            v50 = v117;
            v51 = v126;
LABEL_65:
            v4 = 2 * v51;
            *(_OWORD *)(v124[0] + 8 * v4) = v50;
            v126 = v49;
            goto LABEL_66;
          }
          v52 = DynArrayImpl<0>::AddMultipleAndSet(v124, 16LL, 1LL, &v117);
          v27 = v52;
          v3 = v52;
          if ( v52 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v52, 0xC0u, 0LL);
LABEL_98:
            v99 = 848;
            goto LABEL_101;
          }
          goto LABEL_66;
        }
        v53 = *(float *)&v118;
        v54 = DWORD2(v118);
        v127.y = *((FLOAT *)&v118 + 1);
        y = *((float *)&v118 + 1);
        v55 = HIDWORD(v118);
        goto LABEL_91;
      }
      v56 = &v127;
      v57 = *(float *)v34;
      v58 = 4LL;
      v59 = *(_DWORD *)(v34 + 8);
      v127.y = *(FLOAT *)(v34 + 4);
      y = v127.y;
      HIDWORD(v130) = *(_DWORD *)(v34 + 12);
      v132 = HIDWORD(v130);
      v127.x = v57;
      v128 = v59;
      LODWORD(v130) = v59;
      v131 = v57;
      do
      {
        v60 = (float)((float)(v56->x * v33[1]) + (float)(v56->y * v33[3])) + v33[5];
        v56->x = (float)((float)(v56->x * *v33) + (float)(v56->y * v33[2])) + v33[4];
        v56->y = v60;
        ++v56;
        --v58;
      }
      while ( v58 );
LABEL_92:
      if ( !v113 )
      {
        v81 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*g_DeviceManager + 80LL))(g_DeviceManager, &v113);
        v3 = v81;
        if ( v81 < 0 )
        {
          v99 = 924;
          goto LABEL_108;
        }
        v81 = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v113 + 136LL))(v113, &v114);
        v3 = v81;
        if ( v81 < 0 )
        {
          v99 = 926;
          goto LABEL_108;
        }
        (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v114 + 24LL))(v114, 1LL);
      }
      CPrimitiveGroup::AddFilledPolygonToD2DSink(v114, &v127);
    }
    else
    {
      if ( !IsPixelAligned(v32) )
      {
        v53 = *v61;
        v54 = *((_DWORD *)v61 + 2);
        v127.y = v61[1];
        y = v127.y;
        v55 = *(_DWORD *)(v62 + 12);
LABEL_91:
        v132 = v55;
        v131 = v53;
        v130 = __PAIR64__(v55, v54);
        v128 = v54;
        v127.x = v53;
        goto LABEL_92;
      }
      v64 = *(float *)(v62 + 12);
      if ( (v63 & LODWORD(v64)) > 0x497FFFF0 )
      {
        v66 = 0LL;
        v67.m128_f32[0] = -0.5;
        v66.m128_f32[0] = (float)(int)v64 - v64;
        v65 = (int)v64 - _mm_cmple_ss(v66, v67).m128_u32[0];
      }
      else
      {
        v108 = v64 + 6291456.25;
        v65 = (int)(LODWORD(v108) << 10) >> 11;
      }
      v68 = v61[2];
      if ( (v63 & LODWORD(v68)) > 0x497FFFF0 )
      {
        v70 = 0LL;
        v71.m128_f32[0] = -0.5;
        v70.m128_f32[0] = (float)(int)v68 - v68;
        v69 = (int)v68 - _mm_cmple_ss(v70, v71).m128_u32[0];
      }
      else
      {
        v109 = v68 + 6291456.25;
        v69 = (int)(LODWORD(v109) << 10) >> 11;
      }
      v72 = v61[1];
      if ( (v63 & LODWORD(v72)) > 0x497FFFF0 )
      {
        v74 = 0LL;
        v75.m128_f32[0] = -0.5;
        v74.m128_f32[0] = (float)(int)v72 - v72;
        v73 = (int)v72 - _mm_cmple_ss(v74, v75).m128_u32[0];
      }
      else
      {
        v110 = v72 + 6291456.25;
        v73 = (int)(LODWORD(v110) << 10) >> 11;
      }
      v76 = *v61;
      if ( (v63 & *(_DWORD *)v61) > 0x497FFFF0 )
      {
        v78 = 0LL;
        v79.m128_f32[0] = -0.5;
        v78.m128_f32[0] = (float)(int)v76 - v76;
        v77 = (int)v76 - _mm_cmple_ss(v78, v79).m128_u32[0];
      }
      else
      {
        v111 = v76 + 6291456.25;
        v77 = (int)(LODWORD(v111) << 10) >> 11;
      }
      *((_QWORD *)&v119 + 1) = __PAIR64__(v65, v69);
      *(_QWORD *)&v119 = __PAIR64__(v73, v77);
      v49 = v126 + 1;
      if ( v126 + 1 < v126 )
      {
        v3 = -2147024362;
        v27 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_104:
        v99 = 899;
LABEL_101:
        v82 = v27;
        goto LABEL_112;
      }
      v27 = 0;
      if ( v49 <= v125 )
      {
        v50 = v119;
        v51 = v126;
        goto LABEL_65;
      }
      v80 = DynArrayImpl<0>::AddMultipleAndSet(v124, 16LL, 1LL, &v119);
      v27 = v80;
      v3 = v80;
      if ( v80 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v80, 0xC0u, 0LL);
        goto LABEL_104;
      }
LABEL_66:
      v3 = v27;
    }
  }
  v7 = *((_QWORD *)this + 59);
  v8 = 0;
  v9 = *((_DWORD *)this + 120);
  v10 = 0;
  *(_QWORD *)&v118 = v7;
  v116 = v9;
  while ( 1 )
  {
    v11 = v10 + 144;
    v115 = v10 + 144;
    if ( v10 + 144 > v9 )
    {
      if ( v114 )
      {
        v81 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v114 + 72LL))(v114);
        v3 = v81;
        if ( v81 < 0 )
        {
          v99 = 1072;
          goto LABEL_108;
        }
        *((_QWORD *)this + 12) = v113;
        v113 = 0LL;
      }
      if ( v126 )
      {
        v121[0] = &CRegionShape::`vftable';
        v121[1] = 0LL;
        v121[2] = &v122;
        v122 = 0;
        v123 = 0LL;
        CRegionShape::BuildFromRects(v121, v124[0], v126);
        D2DGeometry = CRegionShape::GetD2DGeometry((CRegionShape *)v121, 0LL, (struct ID2D1Geometry **)this + 11);
        v3 = D2DGeometry;
        if ( D2DGeometry < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, D2DGeometry, 0x441u, 0LL);
          CRegionShape::~CRegionShape((CRegionShape *)v121);
          goto LABEL_38;
        }
        CRegionShape::~CRegionShape((CRegionShape *)v121);
      }
      *((_BYTE *)this + 104) = 1;
      goto LABEL_38;
    }
    v12 = v7 + v10;
    v4 = *(unsigned int *)(v12 + 16);
    if ( (*(_BYTE *)(v12 + 4) & 0x20) != 0 && (_DWORD)v4 != *((_DWORD *)this + 109) )
      break;
    v112 = 0;
    v13 = 0;
    if ( !v8 && (*(_BYTE *)(v12 + 4) & 2) == 0 )
      goto LABEL_8;
LABEL_30:
    v9 = v116;
    if ( (*(_BYTE *)(v12 + 4) & 0x20) != 0 )
      v8 = v13;
    v10 = v11;
  }
  v112 = 1;
LABEL_8:
  v14 = *((_QWORD *)this + 62);
  if ( v4 >= v14
    || (v15 = 148LL * *(unsigned int *)(v12 + 20), v15 > 0xFFFFFFFF)
    || (v16 = (unsigned int)(v15 + v4), (unsigned int)v16 < (unsigned int)v15)
    || v16 > v14 )
  {
    v99 = 971;
    goto LABEL_111;
  }
  v17 = (char *)(v4 + *((_QWORD *)this + 61));
  *(_QWORD *)&v119 = v17;
  while ( 2 )
  {
    v18 = v2;
    v2 += 148;
    if ( v2 > (unsigned int)v15 )
    {
      v13 = v112;
      v2 = 0;
      v11 = v115;
      v7 = v118;
      goto LABEL_30;
    }
    if ( MILMatrix3x2::Is2DAxisAlignedPreservingApprox((MILMatrix3x2 *)&v17[v18 + 16]) )
    {
      v117 = 0LL;
      MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v20, (const struct MilRectF *)v19, (struct MilRectF *)&v117);
      if ( IsPixelAligned((const struct MilRectF *)&v117) )
      {
        if ( (v21 & HIDWORD(v117)) > 0x497FFFF0 )
        {
          v83 = 0LL;
          v84.m128_f32[0] = -0.5;
          v83.m128_f32[0] = (float)(int)*((float *)&v117 + 3) - *((float *)&v117 + 3);
          v22 = (int)*((float *)&v117 + 3) - _mm_cmple_ss(v83, v84).m128_u32[0];
        }
        else
        {
          v100 = *((float *)&v117 + 3) + 6291456.25;
          v22 = (int)(LODWORD(v100) << 10) >> 11;
        }
        if ( (v21 & DWORD2(v117)) > 0x497FFFF0 )
        {
          v85 = 0LL;
          v86.m128_f32[0] = -0.5;
          v85.m128_f32[0] = (float)(int)*((float *)&v117 + 2) - *((float *)&v117 + 2);
          v23 = (int)*((float *)&v117 + 2) - _mm_cmple_ss(v85, v86).m128_u32[0];
        }
        else
        {
          v101 = *((float *)&v117 + 2) + 6291456.25;
          v23 = (int)(LODWORD(v101) << 10) >> 11;
        }
        if ( (v21 & DWORD1(v117)) > 0x497FFFF0 )
        {
          v87 = 0LL;
          v88.m128_f32[0] = -0.5;
          v87.m128_f32[0] = (float)(int)*((float *)&v117 + 1) - *((float *)&v117 + 1);
          v24 = (int)*((float *)&v117 + 1) - _mm_cmple_ss(v87, v88).m128_u32[0];
        }
        else
        {
          v102 = *((float *)&v117 + 1) + 6291456.25;
          v24 = (int)(LODWORD(v102) << 10) >> 11;
        }
        if ( (v21 & (unsigned int)v117) > 0x497FFFF0 )
        {
          v89 = 0LL;
          v90.m128_f32[0] = -0.5;
          v89.m128_f32[0] = (float)(int)*(float *)&v117 - *(float *)&v117;
          v25 = (int)*(float *)&v117 - _mm_cmple_ss(v89, v90).m128_u32[0];
        }
        else
        {
          v103 = *(float *)&v117 + 6291456.25;
          v25 = (int)(LODWORD(v103) << 10) >> 11;
        }
        LODWORD(v120) = v25;
        *(_QWORD *)((char *)&v120 + 4) = __PAIR64__(v23, v24);
        HIDWORD(v120) = v22;
        v26 = v126 + 1;
        if ( v126 + 1 < v126 )
        {
          v3 = -2147024362;
          v27 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_100:
          v99 = 1001;
          goto LABEL_101;
        }
        v27 = 0;
        if ( v26 > v125 )
        {
          v91 = DynArrayImpl<0>::AddMultipleAndSet(v124, 16LL, 1LL, &v120);
          v27 = v91;
          v3 = v91;
          if ( v91 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v92, 0LL, 0, v91, 0xC0u, 0LL);
            goto LABEL_100;
          }
        }
        else
        {
          *(_OWORD *)(v124[0] + 16LL * v126) = v120;
          v126 = v26;
        }
        v3 = v27;
        goto LABEL_28;
      }
      y = *((float *)&v117 + 1);
      v132 = HIDWORD(v117);
      v127 = (struct D2D_POINT_2F)v117;
      v128 = DWORD2(v117);
      v130 = *((_QWORD *)&v117 + 1);
      v131 = *(float *)&v117;
    }
    else
    {
      v93 = &v127;
      v94 = *(float *)v19;
      v95 = *(_DWORD *)(v19 + 8);
      v127.y = *(FLOAT *)(v19 + 4);
      y = v127.y;
      v96 = *(_DWORD *)(v19 + 12);
      v97 = 4LL;
      v132 = v96;
      v127.x = v94;
      v128 = v95;
      v130 = __PAIR64__(v96, v95);
      v131 = v94;
      do
      {
        v98 = (float)((float)(v93->x * v20[1]) + (float)(v93->y * v20[3])) + v20[5];
        v93->x = (float)((float)(v93->x * *v20) + (float)(v93->y * v20[2])) + v20[4];
        v93->y = v98;
        ++v93;
        --v97;
      }
      while ( v97 );
    }
    if ( v113 )
    {
LABEL_128:
      CPrimitiveGroup::AddFilledPolygonToD2DSink(v114, &v127);
LABEL_28:
      v17 = (char *)v119;
      continue;
    }
    break;
  }
  v81 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*g_DeviceManager + 80LL))(g_DeviceManager, &v113);
  v3 = v81;
  if ( v81 >= 0 )
  {
    v81 = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v113 + 136LL))(v113, &v114);
    v3 = v81;
    if ( v81 < 0 )
    {
      v99 = 1050;
      goto LABEL_108;
    }
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v114 + 24LL))(v114, 1LL);
    goto LABEL_128;
  }
  v99 = 1048;
LABEL_108:
  v82 = v81;
LABEL_112:
  MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v82, v99, 0LL);
LABEL_38:
  if ( v114 )
    (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v114 + 16LL))(v114);
  if ( v113 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v113 + 16LL))(v113);
  DynArrayImpl<0>::~DynArrayImpl<0>(v124);
  return v3;
}
