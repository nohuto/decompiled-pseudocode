/*
 * XREFs of ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180087D30
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18007FA30 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 * Callees:
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1800159FC (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180041988 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180041AB0 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800421E0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18004226C (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180085150 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x1800871A0 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A9030 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UCpuClipStackState@CScopedClipStack@@$0A@@@QEAAJPEFBUCpuClipStackState@CScopedClipStack@@I@Z @ 0x1800C4824 (-AddMultipleAndSet@-$DynArray@UCpuClipStackState@CScopedClipStack@@$0A@@@QEAAJPEFBUCpuClipStackS.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800C5554 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800F3F87 (ceilf_0.c)
 *     memcpy_0 @ 0x1800F400B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x180194554 (-PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x180211248 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

__int64 __fastcall CScopedClipStack::PushCpuOrGpuClipToScope(
        __int64 *a1,
        __int64 *a2,
        int a3,
        __int64 a4,
        char *a5,
        char *a6)
{
  __int64 v6; // rbx
  char v9; // r12
  float v11; // xmm8_4
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // eax
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  float v20; // xmm1_4
  char v21; // al
  char v22; // dl
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // r8
  __int64 v26; // r10
  __int64 v27; // rcx
  const struct CMILMatrix *v28; // r10
  __int64 v29; // r10
  __int64 v30; // r10
  char v31; // cl
  int v32; // eax
  __int64 v33; // rcx
  int v34; // ebx
  int v35; // ebx
  float v36; // xmm0_4
  int v37; // eax
  float v38; // xmm0_4
  int v39; // eax
  float v40; // xmm0_4
  int v41; // eax
  float v42; // xmm0_4
  float v43; // xmm4_4
  float v44; // xmm5_4
  float v45; // xmm6_4
  float v46; // xmm7_4
  int v47; // r8d
  int v48; // eax
  __m128 v49; // xmm0
  __int64 v50; // rcx
  unsigned int v51; // eax
  unsigned int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v57; // eax
  __int64 v58; // rcx
  char v59; // r14
  __int64 v60; // r15
  __int64 v61; // rsi
  __int64 v62; // rcx
  int v63; // eax
  unsigned int v64; // esi
  int v65; // eax
  __int64 v66; // rcx
  unsigned __int64 v67; // rax
  void *v68; // rbx
  char v69; // r9
  float v70; // xmm1_4
  float v71; // xmm6_4
  float v72; // xmm4_4
  float v73; // xmm5_4
  float v74; // xmm2_4
  float v75; // xmm3_4
  float v76; // xmm7_4
  float v77; // xmm6_4
  int v78; // xmm5_4
  float v79; // xmm4_4
  __int128 *v80; // rax
  __int128 v81; // xmm1
  void *v82; // rsi
  HANDLE ProcessHeap; // rax
  __int64 v84; // rcx
  int v85; // eax
  __int64 v86; // rcx
  void *v87[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v88; // [rsp+48h] [rbp-C0h]
  __int128 v89; // [rsp+58h] [rbp-B0h]
  __int128 v90; // [rsp+68h] [rbp-A0h]
  int v91; // [rsp+78h] [rbp-90h]
  char *v92; // [rsp+88h] [rbp-80h]
  char *v93; // [rsp+90h] [rbp-78h]
  __int128 v94; // [rsp+98h] [rbp-70h] BYREF
  __int128 v95; // [rsp+A8h] [rbp-60h]
  __int128 v96; // [rsp+B8h] [rbp-50h]
  __int128 v97; // [rsp+C8h] [rbp-40h]
  int v98; // [rsp+D8h] [rbp-30h]
  void (__fastcall ***v99)(_QWORD, __int64); // [rsp+E8h] [rbp-20h] BYREF
  char v100; // [rsp+F0h] [rbp-18h]
  __int128 v101; // [rsp+F8h] [rbp-10h]
  __int128 v102; // [rsp+108h] [rbp+0h]
  __int128 v103; // [rsp+118h] [rbp+10h]
  __int128 v104; // [rsp+128h] [rbp+20h]
  int v105; // [rsp+138h] [rbp+30h]
  __int64 v106; // [rsp+140h] [rbp+38h]
  __int128 v107; // [rsp+148h] [rbp+40h] BYREF
  __m128 v108; // [rsp+158h] [rbp+50h]
  char v109; // [rsp+168h] [rbp+60h]
  void *lpMem[2]; // [rsp+178h] [rbp+70h] BYREF
  __m128 v111; // [rsp+188h] [rbp+80h] BYREF

  v6 = *a2;
  v9 = 0;
  v92 = a5;
  v11 = 0.0;
  v93 = a6;
  v99 = 0LL;
  v100 = 0;
  v105 = 0;
  *(_QWORD *)((char *)&v107 + 4) = 0LL;
  HIDWORD(v107) = 0;
  if ( a4 )
  {
    v12 = *(_OWORD *)a4;
    v13 = *(_OWORD *)(a4 + 16);
    v105 = *(_DWORD *)(a4 + 64);
    v101 = v12;
    v14 = *(_OWORD *)(a4 + 32);
    v102 = v13;
    v15 = *(_OWORD *)(a4 + 48);
  }
  else
  {
    v101 = _xmm;
    v14 = _xmm;
    v102 = _xmm;
    v15 = _xmm;
    LOWORD(v105) = 32085;
  }
  v16 = *((_DWORD *)a1 + 6);
  v103 = v14;
  v104 = v15;
  v106 = 0LL;
  v17 = _mm_shuffle_ps(
          (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
          (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
          225);
  v17.m128_f32[0] = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
  v18 = _mm_shuffle_ps(v17, v17, 198);
  v18.m128_f32[0] = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
  v19 = _mm_shuffle_ps(v18, v18, 39);
  v19.m128_f32[0] = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
  v108 = _mm_shuffle_ps(v19, v19, 57);
  v111 = v108;
  if ( v16 && *(_DWORD *)(84LL * (unsigned int)(v16 - 1) + *a1 + 4) )
    v107 = *(_OWORD *)(136LL * (unsigned int)(*((_DWORD *)a1 + 224) - 1) + a1[109] + 96);
  else
    v107 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v109 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6) )
  {
    LODWORD(v43) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v44 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
    v45 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 2);
    v46 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 3);
    v107 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v109 = 1;
    goto LABEL_42;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v6 + 40LL))(v6, lpMem)
    || LODWORD(lpMem[0]) != 1 )
  {
    goto LABEL_41;
  }
  if ( SBYTE1(v105) >> 6 )
  {
    if ( SBYTE1(v105) >> 6 == 1 )
      goto LABEL_16;
  }
  else
  {
    LODWORD(v20) = COERCE_UNSIGNED_INT(*((float *)&v101 + 2) - 0.0) & _xmm;
    if ( v20 >= 0.000081380211
      || (COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v102 + 2) - 0.0) & _xmm) >= 0.000081380211
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v104 + 2) - 0.0) & _xmm) >= 0.000081380211)
      && (v20 >= 0.000081380211
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v102 + 2) - 0.0) & _xmm) >= 0.000081380211
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v103 - 0.0) & _xmm) >= 0.000081380211
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v103 + 1) - 0.0) & _xmm) >= 0.000081380211
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v103 + 2) - 0.0) & _xmm) >= 0.000081380211
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v103 + 2) - 1.0) & _xmm) >= 0.000081380211
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v103 + 3) - 0.0) & _xmm) >= 0.000081380211
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v104 + 2) - 0.0) & _xmm) >= 0.000081380211)
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(HIDWORD(v102) & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(HIDWORD(v101) & _xmm) * 61440.0))
                              + COERCE_FLOAT(HIDWORD(v104) & _xmm))
                      - 1.0) & _xmm) >= 0.000081380211 )
    {
      v22 = -64;
      v21 = 0;
    }
    else
    {
      v21 = 1;
      v22 = 64;
    }
    BYTE1(v105) = v22 | BYTE1(v105) & 0x3F;
    if ( v21 )
    {
LABEL_16:
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v101 + 1) - 0.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v102 - 0.0) & _xmm) < 0.000081380211 )
      {
        goto LABEL_18;
      }
    }
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v101 - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v102 + 1) - 0.0) & _xmm) >= 0.000081380211 )
  {
    goto LABEL_41;
  }
LABEL_18:
  v23 = *a1;
  v24 = 84LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
  v25 = *(_BYTE *)(v24 + *a1 + 77);
  if ( v25 >> 6 )
  {
    if ( v25 >> 6 == 1 )
      goto LABEL_20;
  }
  else
  {
    v69 = 0;
    LODWORD(v70) = COERCE_UNSIGNED_INT(*(float *)(v24 + v23 + 20) - 0.0) & _xmm;
    if ( v70 < 0.000081380211
      && (COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v24 + v23 + 36) - 0.0) & _xmm) < 0.000081380211
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v24 + v23 + 68) - 0.0) & _xmm) < 0.000081380211
       || v70 < 0.000081380211
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v24 + v23 + 36) - 0.0) & _xmm) < 0.000081380211
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v24 + v23 + 44) - 0.0) & _xmm) < 0.000081380211
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v24 + v23 + 48) - 0.0) & _xmm) < 0.000081380211
       && (COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v24 + v23 + 52) - 0.0) & _xmm) < 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v24 + v23 + 52) - 1.0) & _xmm) < 0.000081380211)
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v24 + v23 + 56) - 0.0) & _xmm) < 0.000081380211
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v24 + v23 + 68) - 0.0) & _xmm) < 0.000081380211) )
    {
      v69 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                           (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v24 + v23 + 40) & _xmm) * 61440.0)
                                         + (float)(COERCE_FLOAT(*(_DWORD *)(v24 + v23 + 24) & _xmm) * 61440.0))
                                 + COERCE_FLOAT(*(_DWORD *)(v24 + v23 + 72) & _xmm))
                         - 1.0) & _xmm) < 0.000081380211;
    }
    *(_BYTE *)(v24 + v23 + 77) = v25 & 0x3F | ((v69 << 7) - 64);
    if ( v69 )
    {
LABEL_20:
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v24 + v23 + 16) - 0.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v24 + v23 + 28) - 0.0) & _xmm) < 0.000081380211 )
      {
LABEL_22:
        v26 = *a1 + 12;
        v27 = 84LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
        *(_OWORD *)lpMem = 0LL;
        v109 = 1;
        v28 = (const struct CMILMatrix *)(v27 + v26);
        v91 = 0;
        if ( v87 == (void **)v28 )
        {
          v94 = v101;
          v95 = v102;
          v96 = v103;
          v97 = v104;
          v98 = v105;
          CMILMatrix::Multiply((CMILMatrix *)&v94, v28);
          v63 = v98;
          *(_OWORD *)v87 = v94;
          v88 = v95;
          v89 = v96;
          v90 = v97;
        }
        else
        {
          *(_OWORD *)v87 = v101;
          v88 = v102;
          v89 = v103;
          v90 = v104;
          v91 = v105;
          if ( !CMILMatrix::IsIdentity<1>((__int64)v87) )
          {
            CMILMatrix::Ensure3DFlags((CMILMatrix *)v29);
            v31 = *(_BYTE *)(v30 + 64);
            if ( (v31 & 3) != 1 )
            {
              if ( (v31 & 0xC) == 4 )
              {
                CMILMatrix::Translate(
                  (CMILMatrix *)v87,
                  *(float *)(v30 + 48),
                  *(float *)(v30 + 52),
                  *(float *)(v30 + 56));
              }
              else if ( (v31 & 0xC0) == 0x40 )
              {
                v71 = *(float *)(v30 + 48);
                CMILMatrix::Scale((CMILMatrix *)v87, *(float *)v30, *(float *)(v30 + 20), *(float *)(v30 + 40));
                CMILMatrix::Translate((CMILMatrix *)v87, v71, v73, v72);
              }
              else if ( (*(_BYTE *)(v30 + 65) & 0xC) == 4 )
              {
                v74 = *(float *)(v30 + 4);
                v75 = *(float *)(v30 + 40);
                v76 = *(float *)(v30 + 48);
                v77 = *(float *)(v30 + 52);
                CMILMatrix::Rotate90((CMILMatrix *)v87);
                CMILMatrix::Scale((CMILMatrix *)v87, COERCE_FLOAT(v78 ^ _xmm), v74, v75);
                CMILMatrix::Translate((CMILMatrix *)v87, v76, v77, v79);
              }
              else
              {
                v80 = Windows::Foundation::Numerics::operator*((__int64)&v94, (__int128 *)v87, (_OWORD *)v30);
                *(_OWORD *)v87 = *v80;
                v88 = v80[1];
                v89 = v80[2];
                v81 = v80[3];
                v91 = 0;
                v90 = v81;
              }
            }
            goto LABEL_25;
          }
          *(_OWORD *)v87 = *(_OWORD *)v29;
          v88 = *(_OWORD *)(v29 + 16);
          v89 = *(_OWORD *)(v29 + 32);
          v90 = *(_OWORD *)(v29 + 48);
          v63 = *(_DWORD *)(v29 + 64);
        }
        v91 = v63;
LABEL_25:
        v32 = (*(__int64 (__fastcall **)(__int64, void **, void **))(*(_QWORD *)v6 + 32LL))(v6, lpMem, v87);
        v34 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x16Du, 0LL);
          goto LABEL_62;
        }
        if ( a3 == 1 )
        {
          v35 = 0x7FFFFFFF;
          v36 = *(float *)lpMem - 0.5;
          if ( (float)(*(float *)lpMem - 0.5) < -2147483600.0 )
          {
            v37 = 0x80000000;
          }
          else if ( v36 >= 2147483600.0 )
          {
            v37 = 0x7FFFFFFF;
          }
          else
          {
            v37 = (int)ceilf_0(v36);
          }
          *(float *)lpMem = (float)v37;
          v38 = *((float *)lpMem + 1) - 0.5;
          if ( (float)(*((float *)lpMem + 1) - 0.5) < -2147483600.0 )
          {
            v39 = 0x80000000;
          }
          else if ( v38 >= 2147483600.0 )
          {
            v39 = 0x7FFFFFFF;
          }
          else
          {
            v39 = (int)ceilf_0(v38);
          }
          *((float *)lpMem + 1) = (float)v39;
          v40 = *(float *)&lpMem[1] - 0.5;
          if ( (float)(*(float *)&lpMem[1] - 0.5) < -2147483600.0 )
          {
            v41 = 0x80000000;
          }
          else if ( v40 >= 2147483600.0 )
          {
            v41 = 0x7FFFFFFF;
          }
          else
          {
            v41 = (int)ceilf_0(v40);
          }
          *(float *)&lpMem[1] = (float)v41;
          v42 = *((float *)&lpMem[1] + 1) - 0.5;
          if ( (float)(*((float *)&lpMem[1] + 1) - 0.5) < -2147483600.0 )
          {
            v35 = 0x80000000;
          }
          else if ( v42 < 2147483600.0 )
          {
            v35 = (int)ceilf_0(v42);
          }
          *((float *)&lpMem[1] + 1) = (float)v35;
        }
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v107, lpMem);
        goto LABEL_41;
      }
    }
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v24 + v23 + 12) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v24 + v23 + 32) - 0.0) & _xmm) < 0.000081380211 )
  {
    goto LABEL_22;
  }
LABEL_41:
  LODWORD(v43) = v107;
  v44 = *((float *)&v107 + 1);
  v45 = *((float *)&v107 + 2);
  v46 = *((float *)&v107 + 3);
LABEL_42:
  v47 = *((_DWORD *)a1 + 6);
  if ( (!v47
     || !*(_DWORD *)(84LL * (unsigned int)(v47 - 1) + *a1 + 4)
     || (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a1[109] + 96 + 136LL * (unsigned int)(*((_DWORD *)a1 + 224) - 1)))
    && v109 )
  {
    if ( v45 > v43 && v46 > v44 )
      v11 = (float)(v45 - v43) * (float)(v46 - v44);
    if ( v11 >= CCommonRegistryData::m_flCpuClipAreaThreshold )
    {
      if ( !v47 || !*(_DWORD *)(84LL * (unsigned int)(v47 - 1) + *a1) )
      {
        v111.m128_u64[0] = __PAIR64__(LODWORD(v44), LODWORD(v43));
        v111.m128_u64[1] = __PAIR64__(LODWORD(v46), LODWORD(v45));
        v85 = CBaseClipStack::PushExact((CBaseClipStack *)(a1 + 283), (const struct MilRectF *)&v111);
        v34 = v85;
        if ( v85 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v86, 0LL, 0, v85, 0x10Au, 0LL);
          goto LABEL_59;
        }
LABEL_58:
        v54 = 84LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
        ++*(_DWORD *)(v54 + *a1);
LABEL_59:
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v34, 0x18Du, 0LL);
          goto LABEL_62;
        }
        v9 = 1;
        v55 = 84LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
        ++*(_DWORD *)(v55 + *a1 + 8);
        goto LABEL_61;
      }
      v48 = *((_DWORD *)a1 + 566);
      v111 = 0LL;
      if ( v48 )
        v49 = *(__m128 *)(a1[285] + 16LL * (unsigned int)(v48 - 1));
      else
        v49 = (__m128)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      lpMem[0] = (void *)__PAIR64__(LODWORD(v44), LODWORD(v43));
      lpMem[1] = (void *)__PAIR64__(LODWORD(v46), LODWORD(v45));
      v111 = v49;
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v111, lpMem);
      v50 = *((unsigned int *)a1 + 567);
      v51 = *((_DWORD *)a1 + 566);
      lpMem[0] = 0LL;
      if ( v51 != (_DWORD)v50 )
        goto LABEL_54;
      v64 = 2 * v50;
      if ( (unsigned __int64)(2 * v50) > 0xFFFFFFFF )
      {
        v34 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, -2147024362, 0x4Cu, 0LL);
        goto LABEL_131;
      }
      if ( v64 <= 8 )
        v64 = 8;
      v65 = HrMalloc(0x10uLL, v64, lpMem);
      v34 = v65;
      if ( v65 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, v65, 0x53u, 0LL);
      }
      else
      {
        v67 = 16LL * *((unsigned int *)a1 + 566);
        if ( v67 <= 0xFFFFFFFF )
        {
          v68 = lpMem[0];
          memcpy_0(lpMem[0], (const void *)a1[285], (unsigned int)v67);
          operator delete((void *)a1[285]);
          v51 = *((_DWORD *)a1 + 566);
          a1[285] = (__int64)v68;
          *((_DWORD *)a1 + 567) = v64;
LABEL_54:
          v34 = 0;
          *(__m128 *)(a1[285] + 16LL * v51) = v111;
          v52 = *((_DWORD *)a1 + 572);
          v53 = (unsigned int)++*((_DWORD *)a1 + 566);
          if ( v52 <= (unsigned int)v53 )
            v52 = *((_DWORD *)a1 + 566);
          *((_DWORD *)a1 + 572) = v52;
          goto LABEL_57;
        }
        v34 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, -2147024362, 0x55u, 0LL);
      }
      v82 = lpMem[0];
      if ( lpMem[0] )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v82);
      }
LABEL_57:
      if ( v34 >= 0 )
        goto LABEL_58;
LABEL_131:
      MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v34, 0x31u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v84, 0LL, 0, v34, 0x10Eu, 0LL);
      goto LABEL_59;
    }
  }
  v57 = DynArray<CScopedClipStack::CpuClipStackState,0>::AddMultipleAndSet(a1 + 109, &v99);
  v34 = v57;
  if ( v57 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x196u, 0LL);
    goto LABEL_62;
  }
  v59 = *((_BYTE *)a2 + 8);
  v60 = *a2;
  v61 = a1[109] + 136LL * (unsigned int)(*((_DWORD *)a1 + 224) - 1);
  if ( *(_BYTE *)(v61 + 8) && *(_QWORD *)v61 )
    (***(void (__fastcall ****)(_QWORD, __int64))v61)(*(_QWORD *)v61, 1LL);
  *(_QWORD *)v61 = v60;
  *(_BYTE *)(v61 + 8) = v59;
  *a2 = 0LL;
  *((_BYTE *)a2 + 8) = 0;
  v62 = 84LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
  ++*(_DWORD *)(v62 + *a1 + 4);
LABEL_61:
  *v92 = v109;
  *v93 = v9;
LABEL_62:
  if ( v100 && v99 )
    (**v99)(v99, 1LL);
  return (unsigned int)v34;
}
