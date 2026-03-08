/*
 * XREFs of ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x18020EFFC
 * Callers:
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18025625C (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x180006324 (-Transpose@CMILMatrix@@QEAAXXZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180058478 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800E83F4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x1801D46A4 (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ?ClassifyPoint@D2DVectorHelper@@YA?AW4Relation@1@AEBUD2D_VECTOR_4F@@0@Z @ 0x18020EF9C (-ClassifyPoint@D2DVectorHelper@@YA-AW4Relation@1@AEBUD2D_VECTOR_4F@@0@Z.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x18020FD4C (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z.c)
 *     ?PlaneVectorIntersection@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x18021073C (-PlaneVectorIntersection@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x18027BFF4 (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 */

__int64 __fastcall CPolygon::CompareAndSplit(
        CPolygon *this,
        struct CPolygon *a2,
        enum D2DVectorHelper::Relation *a3,
        struct CPolygon **a4,
        struct CPolygon **a5)
{
  struct D2D_VECTOR_4F v8; // xmm0
  __int128 v9; // xmm1
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // r13d
  __int128 v13; // xmm0
  int v14; // r12d
  __int128 v15; // xmm1
  __int64 v16; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v17; // r8
  unsigned int v18; // edx
  unsigned int v19; // r9d
  __int64 v20; // rdx
  int v21; // r8d
  __int128 v22; // xmm0
  int v23; // r14d
  struct D2D_VECTOR_4F v24; // xmm6
  unsigned int v25; // r10d
  unsigned int v26; // edi
  unsigned int v27; // eax
  int v28; // r8d
  __int64 v29; // rcx
  struct D2D_VECTOR_4F v30; // xmm7
  int v31; // eax
  __int64 v32; // rcx
  int v33; // r9d
  unsigned int v34; // r10d
  int v35; // r11d
  __int64 v36; // rcx
  unsigned int v37; // r10d
  __m128i v38; // xmm0
  __int64 v39; // rcx
  __int64 v40; // rdx
  int v41; // eax
  int v42; // edi
  unsigned int v43; // r8d
  __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rcx
  unsigned int v52; // r10d
  __m128i v53; // xmm0
  __int64 v54; // rcx
  __int64 v55; // rdx
  int v56; // eax
  unsigned int v57; // r8d
  __int64 v58; // rdx
  int v59; // eax
  unsigned int v60; // r8d
  __int64 v61; // rcx
  __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rdx
  int v67; // eax
  __int64 v68; // rax
  unsigned int v69; // r8d
  __int64 v70; // rcx
  __int64 v71; // rdx
  int v72; // eax
  int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rdx
  int v77; // eax
  int v78; // eax
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rdx
  int v82; // eax
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // r9
  int v86; // r9d
  int v87; // eax
  __int64 v88; // r9
  __int64 v89; // rax
  __int64 v90; // rax
  struct D2D_VECTOR_4F *v92; // [rsp+28h] [rbp-E0h]
  unsigned int v93; // [rsp+28h] [rbp-E0h]
  unsigned int v94; // [rsp+30h] [rbp-D8h]
  unsigned int v95; // [rsp+38h] [rbp-D0h]
  unsigned int v96; // [rsp+3Ch] [rbp-CCh]
  __int64 v97; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v98; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v99[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v100; // [rsp+68h] [rbp-A0h]
  struct CPolygon **v101; // [rsp+70h] [rbp-98h]
  struct CPolygon **v102; // [rsp+78h] [rbp-90h]
  struct D2D_VECTOR_4F v103; // [rsp+88h] [rbp-80h] BYREF
  __int128 v104; // [rsp+98h] [rbp-70h]
  __int128 v105; // [rsp+A8h] [rbp-60h]
  __int128 v106; // [rsp+B8h] [rbp-50h]
  int v107; // [rsp+C8h] [rbp-40h]
  struct D2D_VECTOR_4F v108; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v109; // [rsp+E8h] [rbp-20h]
  __int128 v110; // [rsp+F8h] [rbp-10h]
  __int128 v111; // [rsp+108h] [rbp+0h]
  int v112; // [rsp+118h] [rbp+10h]
  struct D2D_VECTOR_4F v113; // [rsp+120h] [rbp+18h] BYREF
  int v114; // [rsp+130h] [rbp+28h]
  struct D2D_VECTOR_4F v115; // [rsp+138h] [rbp+30h] BYREF
  __int128 v116; // [rsp+148h] [rbp+40h]
  __int128 v117; // [rsp+158h] [rbp+50h]
  __int128 v118; // [rsp+168h] [rbp+60h]
  int v119; // [rsp+178h] [rbp+70h]
  char v120[16]; // [rsp+188h] [rbp+80h] BYREF
  struct D2D_VECTOR_4F v121; // [rsp+198h] [rbp+90h] BYREF
  __m128i v122; // [rsp+1A8h] [rbp+A0h] BYREF
  int v123; // [rsp+1B8h] [rbp+B0h]
  struct D2D_VECTOR_4F v124; // [rsp+1C0h] [rbp+B8h] BYREF
  int v125; // [rsp+1D0h] [rbp+C8h]
  struct D2D_VECTOR_4F v126; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD v127[2]; // [rsp+1E8h] [rbp+E0h] BYREF
  int v128; // [rsp+1F8h] [rbp+F0h]
  __int64 v129; // [rsp+1FCh] [rbp+F4h]
  _BYTE v130[128]; // [rsp+208h] [rbp+100h] BYREF
  _QWORD v131[2]; // [rsp+288h] [rbp+180h] BYREF
  int v132; // [rsp+298h] [rbp+190h]
  __int64 v133; // [rsp+29Ch] [rbp+194h]
  _BYTE v134[128]; // [rsp+2A8h] [rbp+1A0h] BYREF

  v101 = a4;
  *a4 = 0LL;
  v127[0] = v130;
  v127[1] = v130;
  v102 = a5;
  v131[0] = v134;
  *a5 = 0LL;
  v8 = (struct D2D_VECTOR_4F)*((_OWORD *)a2 + 9);
  v131[1] = v134;
  v9 = *((_OWORD *)a2 + 10);
  v10 = *((_DWORD *)a2 + 52);
  v11 = 0;
  v103 = v8;
  v12 = 0;
  v13 = *((_OWORD *)a2 + 11);
  v14 = 0;
  v128 = 6;
  v104 = v9;
  v15 = *((_OWORD *)a2 + 12);
  v129 = 6LL;
  v132 = 6;
  v133 = 6LL;
  v105 = v13;
  v106 = v15;
  v107 = v10;
  v119 = 0;
  v97 = 0LL;
  v98 = 0LL;
  if ( CMILMatrix::Invert((CMILMatrix *)&v103, (__int64)a2, a3) )
    CMILMatrix::Multiply((CPolygon *)((char *)this + 144), (const struct CMILMatrix *)&v103, (struct CMILMatrix *)&v103);
  else
    CMILMatrix::SetToIdentity((CMILMatrix *)&v103);
  if ( CMILMatrix::Invert((CMILMatrix *)&v103, v16, v17) )
  {
    v108 = v103;
    v112 = v107;
    v109 = v104;
    v110 = v105;
    v111 = v106;
    CMILMatrix::Transpose((CMILMatrix *)&v108);
    v119 = v112;
    v115 = v108;
    v116 = v109;
    v117 = v110;
    v118 = v111;
  }
  else
  {
    CMILMatrix::SetToIdentity((CMILMatrix *)&v115);
  }
  v121 = (struct D2D_VECTOR_4F)*((_OWORD *)this + 8);
  v126 = v121;
  D3DXVec4TransformArray(
    (struct D2DVector4 *)&v121,
    v18,
    (const struct D2DVector4 *)&v126,
    v19,
    (const struct D2DMatrix *)&v115,
    v94);
  v20 = *((_QWORD *)a2 + 2);
  v21 = *((_DWORD *)a2 + 10);
  v126 = v121;
  v22 = *(_OWORD *)(v20 + 20LL * (unsigned int)(v21 - 2));
  v23 = *(_DWORD *)(v20 + 20LL * (unsigned int)(v21 - 2) + 16);
  LODWORD(v100) = v23;
  v24 = *(struct D2D_VECTOR_4F *)(v20 + 20LL * (unsigned int)(v21 - 1));
  *(_OWORD *)&v99[1] = v22;
  v124 = v24;
  v125 = *(_DWORD *)(v20 + 20LL * (unsigned int)(v21 - 1) + 16);
  D2DVectorHelper::ClassifyPoint(&v121.x, (float *)&v99[1]);
  v95 = D2DVectorHelper::ClassifyPoint(&v121.x, &v124.x);
  v26 = v95;
  v27 = v25;
  v96 = v25;
  if ( !v28 )
    goto LABEL_118;
  do
  {
    v29 = *((_QWORD *)a2 + 2);
    v30 = *(struct D2D_VECTOR_4F *)(v29 + 20LL * v27);
    HIDWORD(v99[0]) = *(_DWORD *)(v29 + 20LL * v27 + 16);
    v114 = HIDWORD(v99[0]);
    v113 = v30;
    v31 = D2DVectorHelper::ClassifyPoint(&v121.x, &v113.x);
    LODWORD(v99[0]) = v31;
    if ( v26 == 1 )
    {
      if ( v33 != 2 )
      {
LABEL_20:
        if ( v34 + 1 < v34 )
        {
          v11 = -2147024362;
          v42 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, -2147024362, 0xB5u, 0LL);
        }
        else
        {
          v42 = 0;
          if ( v34 + 1 <= (unsigned int)v129 )
          {
            v47 = v127[0];
            v48 = 5LL * v34;
            *(struct D2D_VECTOR_4F *)(v127[0] + 4 * v48) = v24;
            *(_DWORD *)(v47 + 4 * v48 + 16) = v125;
            HIDWORD(v129) = v34 + 1;
LABEL_24:
            ++v12;
            goto LABEL_71;
          }
          v49 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v127, 20, 1, &v124);
          v42 = v49;
          v11 = v49;
          if ( v49 >= 0 )
            goto LABEL_24;
          MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0xC0u, 0LL);
        }
        v93 = 279;
LABEL_80:
        v86 = v42;
        goto LABEL_81;
      }
      v38 = _mm_loadu_si128((const __m128i *)D2DVectorHelper::PlaneVectorIntersection(
                                               (D2DVectorHelper *)&v126,
                                               &v121,
                                               (const struct D2D_VECTOR_4F *)&v99[1],
                                               &v124,
                                               v92));
      v123 = v23;
      v122 = v38;
      if ( v37 + 1 < v37 )
      {
        v11 = -2147024362;
        v42 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else
      {
        if ( v37 + 1 <= (unsigned int)v129 )
        {
          v39 = v127[0];
          v40 = 5LL * v37;
          *(__m128i *)(v127[0] + 4 * v40) = v38;
          *(_DWORD *)(v39 + 4 * v40 + 16) = v123;
          HIDWORD(v129) = v37 + 1;
          goto LABEL_14;
        }
        v41 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v127, 20, 1, &v122);
        v42 = v41;
        v11 = v41;
        if ( v41 >= 0 )
        {
LABEL_14:
          v123 = 0;
          v43 = HIDWORD(v133) + 1;
          if ( (unsigned int)(HIDWORD(v133) + 1) < HIDWORD(v133) )
          {
            v11 = -2147024362;
            v42 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, -2147024362, 0xB5u, 0LL);
          }
          else
          {
            if ( v43 <= (unsigned int)v133 )
            {
              v32 = v131[0];
              v44 = 5LL * HIDWORD(v133);
              *(__m128i *)(v131[0] + 4 * v44) = v122;
              *(_DWORD *)(v32 + 4 * v44 + 16) = v123;
              HIDWORD(v133) = v43;
LABEL_17:
              v34 = HIDWORD(v129);
              v24 = v124;
              goto LABEL_20;
            }
            v45 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v131, 20, 1, &v122);
            v42 = v45;
            v11 = v45;
            if ( v45 >= 0 )
              goto LABEL_17;
            MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v45, 0xC0u, 0LL);
          }
          v93 = 274;
          goto LABEL_80;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v41, 0xC0u, 0LL);
      }
      v93 = 271;
      goto LABEL_80;
    }
    if ( v26 == 2 )
    {
      if ( v33 != 1 )
        goto LABEL_36;
      v53 = _mm_loadu_si128((const __m128i *)D2DVectorHelper::PlaneVectorIntersection(
                                               (D2DVectorHelper *)v120,
                                               &v121,
                                               (const struct D2D_VECTOR_4F *)&v99[1],
                                               &v124,
                                               v92));
      v123 = 0;
      v122 = v53;
      if ( v52 + 1 < v52 )
      {
        v11 = -2147024362;
        v42 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else
      {
        if ( v52 + 1 <= (unsigned int)v129 )
        {
          v54 = v127[0];
          v55 = 5LL * v52;
          *(__m128i *)(v127[0] + 4 * v55) = v53;
          *(_DWORD *)(v54 + 4 * v55 + 16) = v123;
          HIDWORD(v129) = v52 + 1;
          goto LABEL_31;
        }
        v56 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v127, 20, 1, &v122);
        v42 = v56;
        v11 = v56;
        if ( v56 >= 0 )
        {
LABEL_31:
          v123 = v23;
          v57 = HIDWORD(v133) + 1;
          if ( (unsigned int)(HIDWORD(v133) + 1) < HIDWORD(v133) )
          {
            v11 = -2147024362;
            v42 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, -2147024362, 0xB5u, 0LL);
          }
          else
          {
            if ( v57 <= (unsigned int)v133 )
            {
              v32 = v131[0];
              v58 = 5LL * HIDWORD(v133);
              *(__m128i *)(v131[0] + 4 * v58) = v122;
              *(_DWORD *)(v32 + 4 * v58 + 16) = v123;
              HIDWORD(v133) = v57;
LABEL_35:
              v24 = v124;
LABEL_36:
              v60 = HIDWORD(v133) + 1;
              if ( (unsigned int)(HIDWORD(v133) + 1) < HIDWORD(v133) )
              {
                v11 = -2147024362;
                v42 = -2147024362;
                MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, -2147024362, 0xB5u, 0LL);
              }
              else
              {
                v42 = 0;
                if ( v60 <= (unsigned int)v133 )
                {
                  v61 = v131[0];
                  v62 = 5LL * HIDWORD(v133);
                  *(struct D2D_VECTOR_4F *)(v131[0] + 4 * v62) = v24;
                  *(_DWORD *)(v61 + 4 * v62 + 16) = v125;
                  HIDWORD(v133) = v60;
LABEL_40:
                  ++v14;
                  goto LABEL_71;
                }
                v63 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v131, 20, 1, &v124);
                v42 = v63;
                v11 = v63;
                if ( v63 >= 0 )
                  goto LABEL_40;
                MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, v63, 0xC0u, 0LL);
              }
              v93 = 305;
              goto LABEL_80;
            }
            v59 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v131, 20, 1, &v122);
            v42 = v59;
            v11 = v59;
            if ( v59 >= 0 )
              goto LABEL_35;
            MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v59, 0xC0u, 0LL);
          }
          v93 = 299;
          goto LABEL_80;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v56, 0xC0u, 0LL);
      }
      v93 = 296;
      goto LABEL_80;
    }
    v122 = (__m128i)v24;
    if ( v33 == 1 )
    {
      if ( v31 == 2 )
      {
        v123 = 0;
        if ( v34 + 1 < v34 )
        {
          v11 = -2147024362;
          v42 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, -2147024362, 0xB5u, 0LL);
        }
        else
        {
          if ( v34 + 1 <= (unsigned int)v129 )
          {
            v65 = v127[0];
            v66 = 5LL * v34;
            *(struct D2D_VECTOR_4F *)(v127[0] + 4 * v66) = v24;
            *(_DWORD *)(v65 + 4 * v66 + 16) = v123;
            HIDWORD(v129) = v34 + 1;
            goto LABEL_47;
          }
          v67 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v127, 20, 1, &v122);
          v42 = v67;
          v11 = v67;
          if ( v67 >= 0 )
          {
LABEL_47:
            v123 = v125;
            v68 = HIDWORD(v133);
            v69 = HIDWORD(v133) + 1;
            if ( (unsigned int)(HIDWORD(v133) + 1) < HIDWORD(v133) )
            {
              v11 = -2147024362;
              v42 = -2147024362;
              MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, -2147024362, 0xB5u, 0LL);
            }
            else
            {
              v42 = 0;
              if ( v69 <= (unsigned int)v133 )
                goto LABEL_49;
              v73 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v131, 20, 1, &v122);
              v42 = v73;
              v11 = v73;
              if ( v73 >= 0 )
                goto LABEL_71;
              MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, v73, 0xC0u, 0LL);
            }
            v93 = 326;
            goto LABEL_80;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v67, 0xC0u, 0LL);
        }
        v93 = 323;
        goto LABEL_80;
      }
    }
    else if ( v33 == 2 && v31 == 1 )
    {
      v123 = v35;
      if ( v34 + 1 < v34 )
      {
        v11 = -2147024362;
        v42 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else
      {
        if ( v34 + 1 <= (unsigned int)v129 )
        {
          v75 = v127[0];
          v76 = 5LL * v34;
          *(struct D2D_VECTOR_4F *)(v127[0] + 4 * v76) = v24;
          *(_DWORD *)(v75 + 4 * v76 + 16) = v123;
          HIDWORD(v129) = v34 + 1;
          goto LABEL_58;
        }
        v77 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v127, 20, 1, &v122);
        v42 = v77;
        v11 = v77;
        if ( v77 >= 0 )
        {
LABEL_58:
          v68 = HIDWORD(v133);
          v123 = 0;
          v69 = HIDWORD(v133) + 1;
          if ( (unsigned int)(HIDWORD(v133) + 1) < HIDWORD(v133) )
          {
            v11 = -2147024362;
            v42 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, -2147024362, 0xB5u, 0LL);
            goto LABEL_100;
          }
          v42 = 0;
          if ( v69 > (unsigned int)v133 )
          {
            v78 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v131, 20, 1, &v122);
            v42 = v78;
            v11 = v78;
            if ( v78 >= 0 )
              goto LABEL_71;
            MilInstrumentationCheckHR_MaybeFailFast(v79, 0LL, 0, v78, 0xC0u, 0LL);
LABEL_100:
            v93 = 337;
            goto LABEL_80;
          }
LABEL_49:
          v70 = v131[0];
          v71 = 5 * v68;
          *(__m128i *)(v131[0] + 20 * v68) = v122;
          v72 = v123;
LABEL_69:
          *(_DWORD *)(v70 + 4 * v71 + 16) = v72;
          HIDWORD(v133) = v69;
          goto LABEL_71;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, v77, 0xC0u, 0LL);
      }
      v93 = 334;
      goto LABEL_80;
    }
    if ( v34 + 1 < v34 )
    {
      v11 = -2147024362;
      v42 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, -2147024362, 0xB5u, 0LL);
      goto LABEL_117;
    }
    if ( v34 + 1 <= (unsigned int)v129 )
    {
      v80 = v127[0];
      v81 = 5LL * v34;
      *(struct D2D_VECTOR_4F *)(v127[0] + 4 * v81) = v24;
      *(_DWORD *)(v80 + 4 * v81 + 16) = v125;
      HIDWORD(v129) = v34 + 1;
      goto LABEL_66;
    }
    v82 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v127, 20, 1, &v124);
    v42 = v82;
    v11 = v82;
    if ( v82 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v80, 0LL, 0, v82, 0xC0u, 0LL);
LABEL_117:
      v93 = 341;
      goto LABEL_80;
    }
LABEL_66:
    v69 = HIDWORD(v133) + 1;
    if ( (unsigned int)(HIDWORD(v133) + 1) < HIDWORD(v133) )
    {
      v11 = -2147024362;
      v42 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v80, 0LL, 0, -2147024362, 0xB5u, 0LL);
      goto LABEL_114;
    }
    v42 = 0;
    if ( v69 <= (unsigned int)v133 )
    {
      v70 = v131[0];
      v71 = 5LL * HIDWORD(v133);
      *(struct D2D_VECTOR_4F *)(v131[0] + 20LL * HIDWORD(v133)) = v124;
      v72 = v125;
      goto LABEL_69;
    }
    v83 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v131, 20, 1, &v124);
    v42 = v83;
    v11 = v83;
    if ( v83 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v84, 0LL, 0, v83, 0xC0u, 0LL);
LABEL_114:
      v93 = 342;
      goto LABEL_80;
    }
LABEL_71:
    v11 = v42;
    v24 = v30;
    v23 = v125;
    v27 = v96 + 1;
    v85 = v95;
    v26 = v99[0];
    v95 = v99[0];
    *(struct D2D_VECTOR_4F *)&v99[1] = v124;
    LODWORD(v100) = v125;
    v124 = v30;
    v125 = HIDWORD(v99[0]);
    v96 = v27;
  }
  while ( v27 < *((_DWORD *)a2 + 10) );
  v25 = 0;
  if ( v12 )
  {
    if ( !v14 )
    {
      *(_DWORD *)a3 = 1;
      goto LABEL_119;
    }
    *(_DWORD *)a3 = 3;
    v87 = CPolygon::Create(v127, a2, &v97, v85);
    v11 = v87;
    if ( v87 < 0 )
    {
      v93 = 376;
    }
    else
    {
      v87 = CPolygon::Create(v131, a2, &v98, v88);
      v11 = v87;
      if ( v87 >= 0 )
      {
        v89 = v97;
        v97 = 0LL;
        *v101 = (struct CPolygon *)v89;
        v90 = v98;
        v98 = 0LL;
        *v102 = (struct CPolygon *)v90;
        goto LABEL_119;
      }
      v93 = 377;
    }
    v86 = v87;
LABEL_81:
    MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v86, v93, 0LL);
    goto LABEL_119;
  }
  if ( !v14 )
  {
LABEL_118:
    *(_DWORD *)a3 = v25;
    goto LABEL_119;
  }
  *(_DWORD *)a3 = 2;
LABEL_119:
  ReleaseInterface<CPolygon>(&v97);
  ReleaseInterface<CPolygon>(&v98);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v131);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v127);
  return v11;
}
