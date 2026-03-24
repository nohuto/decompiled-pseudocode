/*
 * XREFs of ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180013EB0
 * Callers:
 *     ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180013E84 (-EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x1800143D0 (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180014490 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x18001472C (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniquen.c)
 *     ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180014770 (-Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ @ 0x1800148B8 (-Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180017820 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180065C00 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18009B5CC (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18009BA90 (--1CRegionShape@@UEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8944 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z @ 0x1801E2F0C (-AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateHitTestRegions(CPrimitiveGroup *this)
{
  int v2; // ebx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned int v6; // r14d
  __int64 v7; // rcx
  char v8; // r12
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // r9d
  _DWORD *v12; // rdi
  int v13; // eax
  unsigned __int64 v14; // rdx
  char v15; // r13
  int v16; // ecx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned int v20; // ecx
  bool v21; // zf
  char v22; // cl
  __int64 v23; // rdx
  float *v24; // rcx
  unsigned int v25; // r10d
  unsigned int v26; // r11d
  int v27; // r8d
  int v28; // edx
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // edx
  int D2DGeometry; // eax
  unsigned int v33; // ecx
  _BYTE *v35; // rax
  const struct MilRectF *v36; // r10
  FLOAT *v37; // r9
  __int64 v38; // r10
  unsigned int v39; // r11d
  float v40; // xmm0_4
  int v41; // r8d
  float v42; // xmm0_4
  int v43; // edx
  float v44; // xmm0_4
  unsigned int v45; // ecx
  float v46; // xmm0_4
  int v47; // eax
  unsigned int v48; // edx
  __int128 v49; // xmm0
  __int64 v50; // rcx
  float *v51; // rcx
  __int64 v52; // r9
  unsigned int v53; // r11d
  int v54; // r8d
  __m128 v55; // xmm2
  __m128 v56; // xmm1
  int v57; // edx
  __m128 v58; // xmm2
  __m128 v59; // xmm1
  unsigned int v60; // ecx
  __m128 v61; // xmm2
  __m128 v62; // xmm1
  int v63; // eax
  __m128 v64; // xmm2
  __m128 v65; // xmm1
  int v66; // eax
  FLOAT v67; // xmm2_4
  unsigned int v68; // xmm0_4
  unsigned int v69; // xmm1_4
  struct D2D_POINT_2F *v70; // rax
  FLOAT v71; // xmm2_4
  __int64 v72; // rdx
  unsigned int v73; // xmm0_4
  FLOAT v74; // xmm3_4
  __m128 v75; // xmm2
  __m128 v76; // xmm1
  __m128 v77; // xmm2
  __m128 v78; // xmm1
  __m128 v79; // xmm2
  __m128 v80; // xmm1
  __m128 v81; // xmm2
  __m128 v82; // xmm1
  int v83; // eax
  int v84; // eax
  int v85; // r9d
  __m128 v86; // xmm2
  __m128 v87; // xmm1
  __m128 v88; // xmm2
  __m128 v89; // xmm1
  __m128 v90; // xmm2
  __m128 v91; // xmm1
  __m128 v92; // xmm2
  __m128 v93; // xmm1
  int v94; // eax
  struct D2D_POINT_2F *v95; // rax
  FLOAT v96; // xmm2_4
  unsigned int v97; // xmm0_4
  unsigned int v98; // xmm1_4
  __int64 v99; // rdx
  FLOAT v100; // xmm3_4
  unsigned int v101; // [rsp+28h] [rbp-E0h]
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
  float v112; // [rsp+38h] [rbp-D0h]
  float v113; // [rsp+38h] [rbp-D0h]
  __int64 v114; // [rsp+40h] [rbp-C8h] BYREF
  struct ID2D1GeometrySink *v115; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v116; // [rsp+50h] [rbp-B8h]
  unsigned int v117; // [rsp+54h] [rbp-B4h]
  __int128 v118; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v119; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v120; // [rsp+78h] [rbp-90h] BYREF
  __int128 v121; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v122[3]; // [rsp+98h] [rbp-70h] BYREF
  int v123; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v124; // [rsp+F0h] [rbp-18h]
  _QWORD v125[2]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v126; // [rsp+10Ch] [rbp+4h]
  unsigned int v127; // [rsp+110h] [rbp+8h]
  struct D2D_POINT_2F v128; // [rsp+218h] [rbp+110h] BYREF
  unsigned int v129; // [rsp+220h] [rbp+118h]
  FLOAT y; // [rsp+224h] [rbp+11Ch]
  unsigned __int64 v131; // [rsp+228h] [rbp+120h]
  FLOAT v132; // [rsp+230h] [rbp+128h]
  unsigned int v133; // [rsp+234h] [rbp+12Ch]

  v2 = 0;
  DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>(v125);
  v114 = 0LL;
  v115 = 0LL;
  ReleaseInterface<ID2D1Geometry>((char *)this + 80);
  ReleaseInterface<ID2D1Geometry>((char *)this + 88);
  v4 = *((_QWORD *)this + 68);
  v5 = v4 + *((_QWORD *)this + 69);
  v6 = 0;
  while ( v4 < v5 )
  {
    v35 = (_BYTE *)(v4 + 16);
    v36 = (const struct MilRectF *)v4;
    v4 += 17LL;
    if ( (unsigned __int64)v35 > v5 || v4 > v5 )
    {
      v101 = 1155;
      goto LABEL_110;
    }
    if ( *v35 )
    {
      v3 = v4;
      v4 += 24LL;
      if ( v4 > v5 )
      {
        v101 = 1166;
LABEL_110:
        v85 = -2147467259;
        v2 = -2147467259;
        goto LABEL_111;
      }
      if ( MILMatrix3x2::Is2DAxisAlignedPreservingApprox((MILMatrix3x2 *)v3) )
      {
        v119 = 0LL;
        MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v51, (const struct MilRectF *)v52, (struct MilRectF *)&v119);
        if ( !IsPixelAligned((const struct MilRectF *)&v119) )
        {
          v67 = *(float *)&v119;
          v68 = DWORD2(v119);
          v128.y = *((FLOAT *)&v119 + 1);
          y = *((float *)&v119 + 1);
          v69 = HIDWORD(v119);
LABEL_95:
          v133 = v69;
          v132 = v67;
          v131 = __PAIR64__(v69, v68);
          v129 = v68;
          v128.x = v67;
          goto LABEL_96;
        }
        if ( (v53 & HIDWORD(v119)) > 0x497FFFF0 )
        {
          v55 = 0LL;
          v56.m128_f32[0] = -0.5;
          v55.m128_f32[0] = (float)(int)*((float *)&v119 + 3) - *((float *)&v119 + 3);
          v54 = (int)*((float *)&v119 + 3) - _mm_cmple_ss(v55, v56).m128_u32[0];
        }
        else
        {
          v110 = *((float *)&v119 + 3) + 6291456.25;
          v54 = (int)(LODWORD(v110) << 10) >> 11;
        }
        if ( (v53 & DWORD2(v119)) > 0x497FFFF0 )
        {
          v58 = 0LL;
          v59.m128_f32[0] = -0.5;
          v58.m128_f32[0] = (float)(int)*((float *)&v119 + 2) - *((float *)&v119 + 2);
          v57 = (int)*((float *)&v119 + 2) - _mm_cmple_ss(v58, v59).m128_u32[0];
        }
        else
        {
          v111 = *((float *)&v119 + 2) + 6291456.25;
          v57 = (int)(LODWORD(v111) << 10) >> 11;
        }
        if ( (v53 & DWORD1(v119)) > 0x497FFFF0 )
        {
          v61 = 0LL;
          v62.m128_f32[0] = -0.5;
          v61.m128_f32[0] = (float)(int)*((float *)&v119 + 1) - *((float *)&v119 + 1);
          v60 = (int)*((float *)&v119 + 1) - _mm_cmple_ss(v61, v62).m128_u32[0];
        }
        else
        {
          v112 = *((float *)&v119 + 1) + 6291456.25;
          v60 = (int)(LODWORD(v112) << 10) >> 11;
        }
        if ( (v53 & (unsigned int)v119) > 0x497FFFF0 )
        {
          v64 = 0LL;
          v65.m128_f32[0] = -0.5;
          v64.m128_f32[0] = (float)(int)*(float *)&v119 - *(float *)&v119;
          v63 = (int)*(float *)&v119 - _mm_cmple_ss(v64, v65).m128_u32[0];
        }
        else
        {
          v113 = *(float *)&v119 + 6291456.25;
          v63 = (int)(LODWORD(v113) << 10) >> 11;
        }
        LODWORD(v118) = v63;
        *(_QWORD *)((char *)&v118 + 4) = __PAIR64__(v57, v60);
        HIDWORD(v118) = v54;
        v48 = v127 + 1;
        if ( v127 + 1 >= v127 )
        {
          if ( v48 > v126 )
          {
            v66 = DynArrayImpl<0>::AddMultipleAndSet(v125, 16LL, 1LL, &v118);
            v2 = v66;
            if ( v66 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v66, 0xC0u, 0LL);
            goto LABEL_79;
          }
          v49 = v118;
          v50 = v127;
LABEL_57:
          v3 = 2 * v50;
          v2 = 0;
          *(_OWORD *)(v125[0] + 8 * v3) = v49;
          v127 = v48;
        }
        else
        {
          v2 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_79:
          if ( v2 < 0 )
          {
            v101 = 1185;
LABEL_102:
            v85 = v2;
            goto LABEL_111;
          }
        }
      }
      else
      {
        v70 = &v128;
        v71 = *(float *)v52;
        v72 = 4LL;
        v73 = *(_DWORD *)(v52 + 8);
        v128.y = *(FLOAT *)(v52 + 4);
        y = v128.y;
        HIDWORD(v131) = *(_DWORD *)(v52 + 12);
        v133 = HIDWORD(v131);
        v128.x = v71;
        v129 = v73;
        LODWORD(v131) = v73;
        v132 = v71;
        do
        {
          v74 = (float)((float)(v70->x * v51[1]) + (float)(v70->y * v51[3])) + v51[5];
          v70->x = (float)((float)(v70->x * *v51) + (float)(v70->y * v51[2])) + v51[4];
          v70->y = v74;
          ++v70;
          --v72;
        }
        while ( v72 );
LABEL_96:
        if ( !v114 )
        {
          v84 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)g_DeviceManager + 80LL))(
                  g_DeviceManager,
                  &v114);
          v2 = v84;
          if ( v84 < 0 )
          {
            v101 = 1261;
            goto LABEL_107;
          }
          v84 = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v114 + 136LL))(v114, &v115);
          v2 = v84;
          if ( v84 < 0 )
          {
            v101 = 1263;
            goto LABEL_107;
          }
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v115 + 24LL))(v115, 1LL);
        }
        CPrimitiveGroup::AddFilledPolygonToD2DSink(v115, &v128);
      }
    }
    else
    {
      if ( !IsPixelAligned(v36) )
      {
        v67 = *v37;
        v68 = *((_DWORD *)v37 + 2);
        v128.y = v37[1];
        y = v128.y;
        v69 = *(_DWORD *)(v38 + 12);
        goto LABEL_95;
      }
      v40 = *(float *)(v38 + 12);
      if ( (v39 & LODWORD(v40)) > 0x497FFFF0 )
      {
        v75 = 0LL;
        v76.m128_f32[0] = -0.5;
        v75.m128_f32[0] = (float)(int)v40 - v40;
        v41 = (int)v40 - _mm_cmple_ss(v75, v76).m128_u32[0];
      }
      else
      {
        v106 = v40 + 6291456.25;
        v41 = (int)(LODWORD(v106) << 10) >> 11;
      }
      v42 = v37[2];
      if ( (v39 & LODWORD(v42)) > 0x497FFFF0 )
      {
        v77 = 0LL;
        v78.m128_f32[0] = -0.5;
        v77.m128_f32[0] = (float)(int)v42 - v42;
        v43 = (int)v42 - _mm_cmple_ss(v77, v78).m128_u32[0];
      }
      else
      {
        v107 = v42 + 6291456.25;
        v43 = (int)(LODWORD(v107) << 10) >> 11;
      }
      v44 = v37[1];
      if ( (v39 & LODWORD(v44)) > 0x497FFFF0 )
      {
        v79 = 0LL;
        v80.m128_f32[0] = -0.5;
        v79.m128_f32[0] = (float)(int)v44 - v44;
        v45 = (int)v44 - _mm_cmple_ss(v79, v80).m128_u32[0];
      }
      else
      {
        v108 = v44 + 6291456.25;
        v45 = (int)(LODWORD(v108) << 10) >> 11;
      }
      v46 = *v37;
      if ( (v39 & *(_DWORD *)v37) > 0x497FFFF0 )
      {
        v81 = 0LL;
        v82.m128_f32[0] = -0.5;
        v81.m128_f32[0] = (float)(int)v46 - v46;
        v47 = (int)v46 - _mm_cmple_ss(v81, v82).m128_u32[0];
      }
      else
      {
        v109 = v46 + 6291456.25;
        v47 = (int)(LODWORD(v109) << 10) >> 11;
      }
      *((_QWORD *)&v120 + 1) = __PAIR64__(v41, v43);
      *(_QWORD *)&v120 = __PAIR64__(v45, v47);
      v48 = v127 + 1;
      if ( v127 + 1 < v127 )
      {
        v2 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else
      {
        if ( v48 <= v126 )
        {
          v49 = v120;
          v50 = v127;
          goto LABEL_57;
        }
        v83 = DynArrayImpl<0>::AddMultipleAndSet(v125, 16LL, 1LL, &v120);
        v2 = v83;
        if ( v83 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v83, 0xC0u, 0LL);
      }
      if ( v2 < 0 )
      {
        v101 = 1236;
        goto LABEL_102;
      }
    }
  }
  v7 = *((_QWORD *)this + 64);
  v8 = 0;
  v9 = *((_DWORD *)this + 130);
  v10 = 0;
  *(_QWORD *)&v119 = v7;
  v117 = v9;
  while ( 1 )
  {
    v11 = v10 + 144;
    v116 = v10 + 144;
    if ( v10 + 144 > v9 )
    {
      if ( v115 )
      {
        v84 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v115 + 72LL))(v115);
        v2 = v84;
        if ( v84 < 0 )
        {
          v101 = 1409;
          goto LABEL_107;
        }
        *((_QWORD *)this + 11) = v114;
        v114 = 0LL;
      }
      if ( v127 )
      {
        v122[0] = &CRegionShape::`vftable';
        v122[1] = 0LL;
        v122[2] = &v123;
        v123 = 0;
        v124 = 0LL;
        CRegionShape::BuildFromRects(v122, v125[0]);
        D2DGeometry = CRegionShape::GetD2DGeometry((CRegionShape *)v122, 0LL, (struct ID2D1Geometry **)this + 10);
        v2 = D2DGeometry;
        if ( D2DGeometry < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, D2DGeometry, 0x592u, 0LL);
          CRegionShape::~CRegionShape((CRegionShape *)v122);
          goto LABEL_37;
        }
        CRegionShape::~CRegionShape((CRegionShape *)v122);
      }
      *((_BYTE *)this + 96) = 1;
      goto LABEL_37;
    }
    v12 = (_DWORD *)(v7 + v10);
    v13 = v12[1];
    v14 = (unsigned int)v12[4];
    if ( (v13 & 0x20) != 0 && (_DWORD)v14 != *((_DWORD *)this + 119) )
      break;
    v15 = 0;
    LOBYTE(v16) = v12[1];
    if ( !v8 && (v13 & 2) == 0 )
      goto LABEL_8;
LABEL_15:
    v21 = (v16 & 0x20) == 0;
    v22 = v15;
    v10 = v11;
    if ( v21 )
      v22 = v8;
    v9 = v117;
    v8 = v22;
    v7 = v119;
  }
  v15 = 1;
LABEL_8:
  v3 = *((_QWORD *)this + 67);
  if ( v14 >= v3
    || (v17 = 148LL * (unsigned int)v12[5], v17 > 0xFFFFFFFF)
    || (v18 = (unsigned int)(v17 + v14), (unsigned int)v18 < (unsigned int)v17)
    || v18 > v3 )
  {
    v101 = 1308;
    goto LABEL_110;
  }
  v19 = v14 + *((_QWORD *)this + 66);
  *(_QWORD *)&v120 = v19;
  while ( 2 )
  {
    v20 = v6;
    v6 += 148;
    if ( v6 > (unsigned int)v17 )
    {
      v16 = v12[1];
      v6 = 0;
      v11 = v116;
      goto LABEL_15;
    }
    if ( MILMatrix3x2::Is2DAxisAlignedPreservingApprox((MILMatrix3x2 *)(v19 + v20 + 16)) )
    {
      v118 = 0LL;
      MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v24, (const struct MilRectF *)v23, (struct MilRectF *)&v118);
      if ( IsPixelAligned((const struct MilRectF *)&v118) )
      {
        if ( (v26 & HIDWORD(v118)) > v25 )
        {
          v86 = 0LL;
          v87.m128_f32[0] = -0.5;
          v86.m128_f32[0] = (float)(int)*((float *)&v118 + 3) - *((float *)&v118 + 3);
          v27 = (int)*((float *)&v118 + 3) - _mm_cmple_ss(v86, v87).m128_u32[0];
        }
        else
        {
          v102 = *((float *)&v118 + 3) + 6291456.25;
          v27 = (int)(LODWORD(v102) << 10) >> 11;
        }
        if ( (v26 & DWORD2(v118)) > v25 )
        {
          v88 = 0LL;
          v89.m128_f32[0] = -0.5;
          v88.m128_f32[0] = (float)(int)*((float *)&v118 + 2) - *((float *)&v118 + 2);
          v28 = (int)*((float *)&v118 + 2) - _mm_cmple_ss(v88, v89).m128_u32[0];
        }
        else
        {
          v103 = *((float *)&v118 + 2) + 6291456.25;
          v28 = (int)(LODWORD(v103) << 10) >> 11;
        }
        if ( (v26 & DWORD1(v118)) > v25 )
        {
          v90 = 0LL;
          v91.m128_f32[0] = -0.5;
          v90.m128_f32[0] = (float)(int)*((float *)&v118 + 1) - *((float *)&v118 + 1);
          v29 = (int)*((float *)&v118 + 1) - _mm_cmple_ss(v90, v91).m128_u32[0];
        }
        else
        {
          v104 = *((float *)&v118 + 1) + 6291456.25;
          v29 = (int)(LODWORD(v104) << 10) >> 11;
        }
        if ( (v26 & (unsigned int)v118) > v25 )
        {
          v92 = 0LL;
          v93.m128_f32[0] = -0.5;
          v92.m128_f32[0] = (float)(int)*(float *)&v118 - *(float *)&v118;
          v30 = (int)*(float *)&v118 - _mm_cmple_ss(v92, v93).m128_u32[0];
        }
        else
        {
          v105 = *(float *)&v118 + 6291456.25;
          v30 = (int)(LODWORD(v105) << 10) >> 11;
        }
        LODWORD(v121) = v30;
        *(_QWORD *)((char *)&v121 + 4) = __PAIR64__(v28, v29);
        HIDWORD(v121) = v27;
        v31 = v127 + 1;
        if ( v127 + 1 < v127 )
        {
          v2 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024362, 0xB5u, 0LL);
        }
        else
        {
          if ( v31 <= v126 )
          {
            v2 = 0;
            *(_OWORD *)(v125[0] + 16LL * v127) = v121;
            v127 = v31;
LABEL_31:
            v19 = v120;
            continue;
          }
          v94 = DynArrayImpl<0>::AddMultipleAndSet(v125, 16LL, 1LL, &v121);
          v2 = v94;
          if ( v94 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v94, 0xC0u, 0LL);
        }
        if ( v2 < 0 )
        {
          v101 = 1338;
          goto LABEL_102;
        }
        goto LABEL_31;
      }
      y = *((float *)&v118 + 1);
      v133 = HIDWORD(v118);
      v128 = (struct D2D_POINT_2F)v118;
      v129 = DWORD2(v118);
      v131 = *((_QWORD *)&v118 + 1);
      v132 = *(float *)&v118;
    }
    else
    {
      v95 = &v128;
      v96 = *(float *)v23;
      v97 = *(_DWORD *)(v23 + 8);
      v128.y = *(FLOAT *)(v23 + 4);
      y = v128.y;
      v98 = *(_DWORD *)(v23 + 12);
      v99 = 4LL;
      v133 = v98;
      v128.x = v96;
      v129 = v97;
      v131 = __PAIR64__(v98, v97);
      v132 = v96;
      do
      {
        v100 = (float)((float)(v95->x * v24[1]) + (float)(v95->y * v24[3])) + v24[5];
        v95->x = (float)((float)(v95->x * *v24) + (float)(v95->y * v24[2])) + v24[4];
        v95->y = v100;
        ++v95;
        --v99;
      }
      while ( v99 );
    }
    break;
  }
  if ( v114 )
  {
LABEL_130:
    CPrimitiveGroup::AddFilledPolygonToD2DSink(v115, &v128);
    goto LABEL_31;
  }
  v84 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)g_DeviceManager + 80LL))(g_DeviceManager, &v114);
  v2 = v84;
  if ( v84 >= 0 )
  {
    v84 = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v114 + 136LL))(v114, &v115);
    v2 = v84;
    if ( v84 < 0 )
    {
      v101 = 1387;
      goto LABEL_107;
    }
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v115 + 24LL))(v115, 1LL);
    goto LABEL_130;
  }
  v101 = 1385;
LABEL_107:
  v85 = v84;
LABEL_111:
  MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v85, v101, 0LL);
LABEL_37:
  if ( v115 )
    (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v115 + 16LL))(v115);
  if ( v114 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v114 + 16LL))(v114);
  DynArrayImpl<0>::~DynArrayImpl<0>(v125);
  return (unsigned int)v2;
}
