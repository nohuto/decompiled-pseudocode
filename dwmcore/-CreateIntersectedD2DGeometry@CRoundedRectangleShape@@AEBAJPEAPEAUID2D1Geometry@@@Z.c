/*
 * XREFs of ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1800D32C4
 * Callers:
 *     ?EnsureD2DGeometry@CRoundedRectangleShape@@AEBAJXZ @ 0x1800D2F98 (-EnsureD2DGeometry@CRoundedRectangleShape@@AEBAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z @ 0x1800833A8 (-CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z.c)
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800836C0 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x1800D3A18 (-IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z.c)
 *     ?Attach@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAXPEAUID2D1Geometry@@@Z @ 0x1800D3A58 (-Attach@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAXPEAUID2D1Geometry@@@Z.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800D3A9C (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1FE0 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0CMilPoint2F@@QEAA@XZ @ 0x1801048C0 (--0CMilPoint2F@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRoundedRectangleShape::CreateIntersectedD2DGeometry(
        CRoundedRectangleShape *this,
        struct ID2D1Geometry **a2)
{
  unsigned int v2; // ebx
  CMilPoint2F *v3; // rdi
  struct ID2D1Geometry *v4; // rsi
  __int64 v7; // r14
  __int64 v8; // r9
  __int64 v9; // r8
  float *v10; // r10
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  float v13; // xmm6_4
  unsigned int v14; // xmm7_4
  float v15; // xmm5_4
  float v16; // xmm8_4
  unsigned int v17; // xmm9_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  int v22; // xmm4_4
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // r12d
  int *v28; // r14
  __int64 v29; // r9
  int v30; // eax
  __int64 v31; // rcx
  struct ID2D1Geometry *v32; // rbx
  __int64 (__fastcall *v33)(struct ID2D1Geometry *, __int64 *); // rdi
  int v34; // eax
  __int64 v35; // rcx
  struct ID2D1Geometry *v36; // rdi
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 (__fastcall *v45)(__int64, __int64 *); // rdi
  int v46; // eax
  __int64 v47; // rcx
  float v48; // xmm0_4
  float v49; // xmm0_4
  int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  struct ID2D1Geometry *v54; // rbx
  __int64 (__fastcall *v55)(struct ID2D1Geometry *, __int64 *); // rdi
  int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rcx
  int v60; // eax
  __int64 v61; // rcx
  struct ID2D1Geometry *v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  struct ID2D1Geometry **v65; // rcx
  __int64 v66; // [rsp+48h] [rbp-C0h] BYREF
  struct ID2D1Geometry *v67; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v68; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v69; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1Geometry *v70; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v71; // [rsp+70h] [rbp-98h]
  __int64 v72; // [rsp+78h] [rbp-90h]
  __int64 v73; // [rsp+80h] [rbp-88h]
  __int64 v74; // [rsp+88h] [rbp-80h]
  __int128 v75; // [rsp+90h] [rbp-78h]
  __int64 v76; // [rsp+A8h] [rbp-60h] BYREF
  float v77; // [rsp+B0h] [rbp-58h]
  float v78; // [rsp+B4h] [rbp-54h]
  unsigned __int64 v79; // [rsp+B8h] [rbp-50h] BYREF
  float v80; // [rsp+C0h] [rbp-48h]
  float v81; // [rsp+C4h] [rbp-44h]
  __int128 v82; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v83; // [rsp+D8h] [rbp-30h]
  float v84; // [rsp+E8h] [rbp-20h] BYREF
  float v85[5]; // [rsp+ECh] [rbp-1Ch]
  float v86; // [rsp+100h] [rbp-8h]
  float v87; // [rsp+104h] [rbp-4h]
  float v88; // [rsp+128h] [rbp+20h]
  int v89; // [rsp+12Ch] [rbp+24h]
  float v90; // [rsp+140h] [rbp+38h]
  int v91; // [rsp+144h] [rbp+3Ch]

  v2 = 0;
  v3 = (CMilPoint2F *)&v84;
  v4 = 0LL;
  v70 = 0LL;
  v7 = 20LL;
  do
  {
    CMilPoint2F::CMilPoint2F(v3);
    v3 = (CMilPoint2F *)((char *)v3 + 8);
    --v7;
  }
  while ( v7 );
  CRoundedRectangleShape::CalcEdgesAndControlPoints(this, (struct CMilPoint2F *)&v84);
  CRoundedRectangleGeometryData::GetBaseRect(*((_QWORD *)this + 2) + 16LL, (__int64)&v79);
  LOBYTE(v9) = *(_BYTE *)(v8 + 68);
  v10 = (float *)(v8 + 32);
  v11 = -(__int64)((_BYTE)v9 != 0) & 0xFFFFFFFFFFFFFFF8uLL;
  v12 = -(__int64)((_BYTE)v9 != 0) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( !(_BYTE)v9 )
    v10 = (float *)(v8 + 56);
  v13 = v80;
  v14 = v79;
  v15 = fmaxf(*(float *)(v8 + 36), *(float *)(v11 + v8 + 44));
  v16 = v81;
  v17 = HIDWORD(v79);
  v18 = fminf(*(float *)&v79, v80 - fmaxf(*(float *)(v11 + v8 + 40), *(float *)(v12 + v8 + 48)));
  v19 = v81 - fmaxf(v10[1], *(float *)(v12 + v8 + 52));
  v20 = fmaxf(v80, fmaxf(*(float *)(v8 + 32), *v10) + *(float *)&v79);
  *(float *)&v76 = v18;
  v21 = fminf(*((float *)&v79 + 1), v19);
  v77 = v20;
  v78 = fmaxf(v81, v15 + *((float *)&v79 + 1));
  *((float *)&v76 + 1) = v21;
  if ( (unsigned __int8)operator!=(&v76, &v79, v9) )
  {
    v79 = __PAIR64__(v17, v14);
    v80 = v13;
    v81 = v16;
    v66 = 0LL;
    v84 = v18;
    v85[0] = v21;
    v86 = v20;
    v87 = v21;
    v88 = v18;
    v89 = v22;
    v90 = v20;
    v91 = v22;
    v23 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, __int64 *))(*g_DeviceManager + 40LL))(
            g_DeviceManager,
            &v79,
            &v66);
    v2 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x267u, 0LL);
      v64 = v66;
      if ( v66 )
      {
        v66 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
      }
      goto LABEL_20;
    }
    v25 = v66;
    v66 = 0LL;
    Microsoft::WRL::ComPtr<ID2D1Geometry>::Attach(&v70, v25);
    v26 = v66;
    if ( v66 )
    {
      v66 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v4 = v70;
  }
  v27 = 0;
  v28 = (int *)&unk_180375414;
  while ( !(unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(
                              *((_QWORD *)this + 2) + 16LL,
                              (unsigned int)v27) )
  {
LABEL_12:
    ++v27;
    v28 += 7;
    if ( v27 >= 4 )
    {
      if ( *(float *)(v29 + 64) > 0.0 )
      {
        v67 = 0LL;
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v67);
        v30 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry **))(*g_DeviceManager + 80LL))(
                g_DeviceManager,
                &v67);
        v2 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x2A7u, 0LL);
        }
        else
        {
          v32 = v67;
          v66 = 0LL;
          v33 = *(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)v67 + 136LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v66);
          v34 = v33(v32, &v66);
          v2 = v34;
          if ( v34 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x2AAu, 0LL);
          }
          else
          {
            v36 = v4;
            v37 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64))(*(_QWORD *)v4 + 72LL))(v4, 1LL);
            v2 = v37;
            if ( v37 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x2AFu, 0LL);
            }
            else
            {
              v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v66 + 72LL))(v66);
              v2 = v39;
              if ( v39 >= 0 )
              {
                v4 = v67;
                v70 = v67;
                Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v70);
                v70 = v36;
                Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v70);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v66);
                Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v67);
                goto LABEL_19;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x2B0u, 0LL);
            }
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v66);
        }
        v65 = &v67;
        goto LABEL_47;
      }
LABEL_19:
      v70 = 0LL;
      *a2 = v4;
      goto LABEL_20;
    }
  }
  v67 = (struct ID2D1Geometry *)*(v28 - 1);
  v71 = *v28;
  v72 = v28[1];
  v73 = v28[2];
  v74 = v28[3];
  v76 = v28[4];
  v79 = v28[5];
  v69 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v69);
  v42 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*g_DeviceManager + 80LL))(g_DeviceManager, &v69);
  v2 = v42;
  if ( v42 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x279u, 0LL);
    goto LABEL_44;
  }
  v44 = v69;
  v68 = 0LL;
  v45 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v69 + 136LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v68);
  v46 = v45(v44, &v68);
  v2 = v46;
  if ( v46 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x27Cu, 0LL);
    goto LABEL_42;
  }
  (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v68 + 40LL))(
    v68,
    _mm_unpacklo_ps((__m128)LODWORD(v85[2 * (_QWORD)v67 - 1]), (__m128)LODWORD(v85[2 * (_QWORD)v67])).m128_u64[0],
    0LL);
  v48 = v85[2 * v71 - 1];
  *((float *)&v75 + 1) = v85[2 * v71];
  *(float *)&v75 = v48;
  v49 = v85[2 * v72 - 1];
  *((float *)&v75 + 3) = v85[2 * v72];
  *((float *)&v75 + 2) = v49;
  v83 = _mm_unpacklo_ps((__m128)LODWORD(v85[2 * v73 - 1]), (__m128)LODWORD(v85[2 * v73])).m128_u64[0];
  v82 = v75;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v68 + 88LL))(v68, &v82);
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v68 + 80LL))(
    v68,
    _mm_unpacklo_ps((__m128)LODWORD(v85[2 * v74 - 1]), (__m128)LODWORD(v85[2 * v74])).m128_u64[0]);
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v68 + 80LL))(
    v68,
    _mm_unpacklo_ps((__m128)LODWORD(v85[2 * v76 - 1]), (__m128)LODWORD(v85[2 * v76])).m128_u64[0]);
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v68 + 80LL))(
    v68,
    _mm_unpacklo_ps((__m128)LODWORD(v85[2 * v79 - 1]), (__m128)LODWORD(v85[2 * v79])).m128_u64[0]);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v68 + 64LL))(v68, 1LL);
  v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68 + 72LL))(v68);
  v2 = v50;
  if ( v50 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x285u, 0LL);
    goto LABEL_42;
  }
  if ( !v4 )
  {
    v63 = v69;
    v69 = 0LL;
    Microsoft::WRL::ComPtr<ID2D1Geometry>::Attach(&v70, v63);
LABEL_30:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v68);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v69);
    v29 = *((_QWORD *)this + 2);
    v4 = v70;
    goto LABEL_12;
  }
  v67 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v67);
  v52 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry **))(*g_DeviceManager + 80LL))(g_DeviceManager, &v67);
  v2 = v52;
  if ( v52 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x28Fu, 0LL);
    goto LABEL_39;
  }
  v54 = v67;
  v66 = 0LL;
  v55 = *(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)v67 + 136LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v66);
  v56 = v55(v54, &v66);
  v2 = v56;
  if ( v56 >= 0 )
  {
    v58 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64, __int64, _QWORD, _DWORD, __int64))(*(_QWORD *)v4 + 88LL))(
            v4,
            v69,
            1LL,
            0LL,
            0,
            v66);
    v2 = v58;
    if ( v58 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, 0x29Au, 0LL);
      goto LABEL_37;
    }
    v60 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v66 + 72LL))(v66);
    v2 = v60;
    if ( v60 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, v60, 0x29Cu, 0LL);
      goto LABEL_37;
    }
    v62 = v67;
    v67 = 0LL;
    Microsoft::WRL::ComPtr<ID2D1Geometry>::Attach(&v70, v62);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v66);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v67);
    goto LABEL_30;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0x292u, 0LL);
LABEL_37:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v66);
LABEL_39:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v67);
LABEL_42:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v68);
LABEL_44:
  v65 = (struct ID2D1Geometry **)&v69;
LABEL_47:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(v65);
LABEL_20:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v70);
  return v2;
}
