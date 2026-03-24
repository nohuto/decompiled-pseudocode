/*
 * XREFs of ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x180260318
 * Callers:
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18025DC40 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18025F4F0 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Geometry@@@Z @ 0x180017304 (--4-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Geometry@@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180058584 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800826E0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C915C (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x1801C8008 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x180260154 (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 */

__int64 __fastcall CTransformedGeometryHelper::TransformGeometry(
        const struct CMILMatrix *a1,
        struct ID2D1Geometry *a2,
        struct ID2D1Geometry **a3)
{
  unsigned int v3; // ebx
  unsigned int v7; // xmm0_4
  unsigned int v8; // xmm1_4
  int (__fastcall **v9)(struct ID2D1Geometry *, GUID *, __int64 *); // rax
  int (__fastcall *v10)(struct ID2D1Geometry *, GUID *, __int64 *); // rax
  __int64 v11; // rbx
  void (__fastcall *v12)(__int64, struct ID2D1Geometry **); // rdi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int D2DGeometry; // eax
  __int64 v18; // rcx
  struct ID2D1Geometry *v19; // rax
  __int64 v21; // [rsp+30h] [rbp-89h] BYREF
  struct ID2D1Geometry *v22; // [rsp+38h] [rbp-81h] BYREF
  struct ID2D1Geometry *v23; // [rsp+40h] [rbp-79h] BYREF
  __int64 v24; // [rsp+48h] [rbp-71h] BYREF
  void **v25; // [rsp+50h] [rbp-69h] BYREF
  int v26; // [rsp+58h] [rbp-61h]
  void **v27; // [rsp+60h] [rbp-59h]
  const struct CMILMatrix *v28; // [rsp+68h] [rbp-51h]
  __int128 v29; // [rsp+70h] [rbp-49h]
  __int128 v30; // [rsp+80h] [rbp-39h]
  __int64 v31; // [rsp+90h] [rbp-29h]
  __int128 v32; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-9h]
  __int128 v34; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+Fh]
  __int128 v36; // [rsp+D0h] [rbp+17h] BYREF
  int v37; // [rsp+E0h] [rbp+27h]
  int v38; // [rsp+E4h] [rbp+2Bh]

  v3 = 0;
  v22 = 0LL;
  if ( !a2 )
    goto LABEL_19;
  if ( !a1 )
  {
    Microsoft::WRL::ComPtr<ID2D1Geometry>::operator=((__int64 *)&v22, (__int64)a2);
LABEL_19:
    v19 = v22;
    v22 = 0LL;
    *a3 = v19;
    goto LABEL_20;
  }
  if ( CMILMatrix::Is2DAffine<1>((__int64)a1, 1) )
  {
    v23 = a2;
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = *(_DWORD *)a1;
    v8 = *((_DWORD *)a1 + 1);
    v9 = *(int (__fastcall ***)(struct ID2D1Geometry *, GUID *, __int64 *))a2;
    v21 = 0LL;
    *(_QWORD *)&v34 = __PAIR64__(v8, v7);
    v10 = *v9;
    *((_QWORD *)&v34 + 1) = *((_QWORD *)a1 + 2);
    v35 = *((_QWORD *)a1 + 6);
    if ( v10(a2, &GUID_2cd906bb_12e2_11dc_9fed_001143a055f9, &v21) >= 0 )
    {
      v11 = v21;
      v12 = *(void (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)v21 + 136LL);
      Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)&v23);
      v12(v11, &v23);
      v37 = 0;
      v38 = 0;
      v36 = _xmm;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v21 + 144LL))(v21, &v36);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v32,
        (const struct D2D1::Matrix3x2F *)&v36,
        (const struct D2D1::Matrix3x2F *)&v34);
      v34 = v32;
      v35 = v33;
    }
    v13 = (*(__int64 (__fastcall **)(void *, struct ID2D1Geometry *, __int128 *, __int64 *))(*(_QWORD *)g_DeviceManager
                                                                                           + 72LL))(
            g_DeviceManager,
            v23,
            &v34,
            &v24);
    v3 = v13;
    if ( v13 >= 0 )
    {
      Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach((__int64 *)&v22, v24);
      v15 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)&v23);
      goto LABEL_19;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x2Eu, 0LL);
    v16 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)&v23);
  }
  else
  {
    v26 = 0;
    v31 = 0LL;
    v25 = &CTransformedGeometryHelper::`vftable'{for `CMILCOMBase'};
    v28 = a1;
    v27 = &CTransformedGeometryHelper::`vftable'{for `ID2D1SimplifiedGeometrySink'};
    v29 = 0LL;
    v30 = 0LL;
    Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)&v22);
    D2DGeometry = CTransformedGeometryHelper::GetD2DGeometry((CTransformedGeometryHelper *)&v25, a2, &v22);
    v3 = D2DGeometry;
    if ( D2DGeometry >= 0 )
    {
      if ( (_QWORD)v30 )
        std::_Deallocate<16,0>((void *)v30, (v31 - v30) & 0xFFFFFFFFFFFFFFF8uLL);
      goto LABEL_19;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, D2DGeometry, 0x36u, 0LL);
    if ( (_QWORD)v30 )
      std::_Deallocate<16,0>((void *)v30, (v31 - v30) & 0xFFFFFFFFFFFFFFF8uLL);
  }
LABEL_20:
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease((__int64 *)&v22);
  return v3;
}
