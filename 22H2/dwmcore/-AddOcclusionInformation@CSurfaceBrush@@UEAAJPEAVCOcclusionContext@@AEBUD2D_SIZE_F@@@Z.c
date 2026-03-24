/*
 * XREFs of ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800936D0
 * Callers:
 *     ?AddOcclusionInformation@CSurfaceBrush@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800F6260 (-AddOcclusionInformation@CSurfaceBrush@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007454 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002D180 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180068964 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x180076700 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180087360 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?GetCompositionSurfaceInfo@CSurfaceBrush@@AEBAJPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18009D6BC (-GetCompositionSurfaceInfo@CSurfaceBrush@@AEBAJPEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C4488 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::AddOcclusionInformation(
        CSurfaceBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v4; // rcx
  int v7; // edi
  int v8; // eax
  CSurfaceBrush *v9; // rsi
  struct CCompositionSurfaceInfo *v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, __int64); // rdx
  int v12; // eax
  __int64 v13; // r8
  int CompositionSurfaceInfo; // eax
  struct CCompositionSurfaceInfo *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v20; // r9d
  unsigned int v21; // [rsp+20h] [rbp-89h]
  __int64 (__fastcall ***v22)(_QWORD, __int64); // [rsp+30h] [rbp-79h] BYREF
  _QWORD *v23; // [rsp+38h] [rbp-71h] BYREF
  struct D2D_MATRIX_3X2_F v24; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v25[80]; // [rsp+70h] [rbp-39h] BYREF
  struct CCompositionSurfaceInfo *v26[2]; // [rsp+C0h] [rbp+17h] BYREF
  char v27; // [rsp+D0h] [rbp+27h]

  v4 = *((_QWORD *)this - 11);
  v23 = 0LL;
  v7 = 0;
  if ( !v4 || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 56LL))(v4, 200LL) )
    v8 = -2003292404;
  else
    v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD **))this - 11))(
           *((_QWORD *)this - 11),
           &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c,
           &v23);
  if ( v8 < 0 )
    goto LABEL_26;
  v9 = (CSurfaceBrush *)((char *)this - 184);
  if ( (*(unsigned __int8 (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)v9 + 208LL))(v9)
    || a3->width <= 0.0
    || a3->height <= 0.0 )
  {
    goto LABEL_26;
  }
  v22 = 0LL;
  v26[0] = (struct CCompositionSurfaceInfo *)&v22;
  v26[1] = 0LL;
  v27 = 1;
  v7 = CSurfaceBrush::ComputeLayout(v9, a3, (struct CContent::LayoutData *)&v24, &v26[1]);
  if ( v27 )
  {
    v10 = v26[1];
    v11 = *(__int64 (__fastcall ****)(_QWORD, __int64))v26[0];
    *(_QWORD *)v26[0] = v26[1];
    if ( v11 )
      std::default_delete<CShape>::operator()((__int64)v10, v11);
  }
  if ( v7 == -2003304441 )
  {
    v7 = 0;
    goto LABEL_37;
  }
  if ( v7 < 0 )
  {
    v20 = v7;
    v21 = 303;
    goto LABEL_36;
  }
  if ( !v23 || !(unsigned __int8)(*v22)[5](v22, (__int64)v26) || LODWORD(v26[0]) != 1 )
  {
LABEL_24:
    if ( v22 )
      (**v22)(v22, 1LL);
    goto LABEL_26;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v23 + 8LL))(v23) )
  {
    *(_OWORD *)v26 = 0LL;
    v12 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64), struct CCompositionSurfaceInfo **, _QWORD))(*v22)[4])(
            v22,
            v26,
            0LL);
    v7 = v12;
    if ( v12 < 0 )
    {
      v21 = 312;
    }
    else
    {
      v12 = COcclusionContext::CollectRectangleForOcclusion((__int64)a2, (float *)v26, v13, 0LL);
      v7 = v12;
      if ( v12 >= 0 )
        goto LABEL_19;
      v21 = 314;
    }
    v20 = v12;
LABEL_36:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v10, 0LL, 0, v20, v21, 0LL);
    goto LABEL_37;
  }
LABEL_19:
  if ( !*((_BYTE *)a2 + 1245) )
    goto LABEL_24;
  v26[0] = 0LL;
  CompositionSurfaceInfo = CSurfaceBrush::GetCompositionSurfaceInfo(v9, v26);
  v15 = v26[0];
  if ( CompositionSurfaceInfo < 0
    || (CMILMatrix::CMILMatrix((CMILMatrix *)v25, &v24),
        v16 = COcclusionContext::CheckAndRecordOverlayCandidate(
                (__int64)a2,
                *((_QWORD *)a2 + 154),
                (__int64)v15,
                v25,
                (__int64)v22,
                0),
        v7 = v16,
        v16 >= 0) )
  {
    if ( v15 )
      (*(void (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)v15 + 16LL))(v15);
    goto LABEL_24;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x147u, 0LL);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)v26);
LABEL_37:
  if ( v22 )
    std::default_delete<CShape>::operator()((__int64)v10, v22);
LABEL_26:
  if ( v23 )
  {
    v18 = (__int64)v23 + *(int *)(v23[1] + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return (unsigned int)v7;
}
