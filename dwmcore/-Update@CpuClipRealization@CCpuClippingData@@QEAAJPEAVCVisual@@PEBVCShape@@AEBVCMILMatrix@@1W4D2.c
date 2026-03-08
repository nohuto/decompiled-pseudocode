/*
 * XREFs of ?Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2D1_ANTIALIAS_MODE@@PEA_N@Z @ 0x18005A02C
 * Callers:
 *     ?UpdateOnlyCpuClipRealization@CCpuClippingData@@AEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180016B50 (-UpdateOnlyCpuClipRealization@CCpuClippingData@@AEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedCl.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x180058840 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180037B64 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180045F98 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A39C (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A530 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800B25B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800B4BA4 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D9FD8 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DBA68 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F33F8 (-reset@-$com_ptr_t@V-$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCpuClippingData::CpuClipRealization::Update(
        CCpuClippingData::CpuClipRealization *this,
        struct CVisual *a2,
        const struct CShape *a3,
        const struct CMILMatrix *a4,
        const struct CShape *a5,
        enum D2D1_ANTIALIAS_MODE a6,
        bool *a7)
{
  __int64 v9; // rax
  struct CVisual *v10; // r14
  float v12; // xmm6_4
  bool v13; // al
  enum D2D1_ANTIALIAS_MODE v14; // ebx
  char v15; // al
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // ebx
  int v21; // xmm1_4
  int v22; // xmm0_4
  int v23; // xmm1_4
  int v24; // xmm0_4
  int v25; // xmm1_4
  int v26; // xmm0_4
  int v27; // xmm1_4
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rdx
  int v31; // xmm2_4
  char v32; // al
  int v33; // [rsp+28h] [rbp-81h] BYREF
  __int64 v34; // [rsp+30h] [rbp-79h] BYREF
  float v35; // [rsp+38h] [rbp-71h] BYREF
  _DWORD v36[9]; // [rsp+3Ch] [rbp-6Dh] BYREF
  struct CVisual *v37; // [rsp+60h] [rbp-49h]
  __int128 v38; // [rsp+68h] [rbp-41h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+47h]

  v9 = *(_QWORD *)a3;
  v10 = a2;
  v37 = a2;
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CShape *))(v9 + 56))(a3) )
  {
    v12 = CCommonRegistryData::m_flCpuClipFlatteningTolerance;
    v18 = *(_QWORD *)a3;
    v38 = 0LL;
    v20 = (*(__int64 (__fastcall **)(const struct CShape *, __int128 *, _QWORD))(v18 + 48))(a3, &v38, 0LL);
    if ( v20 < 0 )
    {
      v30 = 787LL;
      goto LABEL_42;
    }
    LOBYTE(v19) = 1;
    if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(a4, v19) )
    {
      CMILMatrix::Get2DScaleDimensions(a4, &v35, (float *)&v34);
    }
    else
    {
      v31 = *((_DWORD *)a4 + 3);
      v21 = *((_DWORD *)a4 + 1);
      v36[0] = *(_DWORD *)a4;
      v22 = *((_DWORD *)a4 + 4);
      v36[1] = v21;
      v23 = *((_DWORD *)a4 + 5);
      v36[3] = v22;
      v24 = *((_DWORD *)a4 + 7);
      v36[4] = v23;
      v25 = *((_DWORD *)a4 + 12);
      v36[5] = v24;
      v26 = *((_DWORD *)a4 + 13);
      v36[6] = v25;
      v27 = *((_DWORD *)a4 + 15);
      v36[7] = v26;
      v36[8] = v27;
      v36[2] = v31;
      if ( !Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)v36, &v35, (float *)&v34, (float *)&v38) )
      {
LABEL_25:
        if ( !*a7 && *((_QWORD *)this + 9) && (float)(*((float *)this + 22) - v12) <= 0.000081380211 )
          goto LABEL_4;
        goto LABEL_28;
      }
    }
    v12 = v12 / fminf(1000.0, fmaxf(v35, *(float *)&v34));
    goto LABEL_25;
  }
  v12 = 0.0;
  if ( !*a7 && !*((_QWORD *)this + 9) )
  {
LABEL_4:
    v13 = 0;
    goto LABEL_5;
  }
LABEL_28:
  v13 = 1;
LABEL_5:
  *a7 = v13;
  if ( v13 )
  {
    CShapePtr::Release((CCpuClippingData::CpuClipRealization *)((char *)this + 72));
    CShapePtr::Release((CCpuClippingData::CpuClipRealization *)((char *)this + 96));
    wil::com_ptr_t<CWeakReference<CVisual>,wil::err_returncode_policy>::reset((char *)this + 120);
    if ( v12 <= 0.0 )
    {
LABEL_38:
      v10 = v37;
      *((float *)this + 22) = v12;
      goto LABEL_6;
    }
    v20 = (*(__int64 (__fastcall **)(const struct CShape *, __int64, __int64 *))(*(_QWORD *)a3 + 40LL))(a3, v28, &v34);
    if ( v20 >= 0 )
    {
      v29 = v34;
      CShapePtr::Release((CCpuClippingData::CpuClipRealization *)((char *)this + 72));
      *((_QWORD *)this + 9) = v29;
      *((_BYTE *)this + 80) = 1;
      goto LABEL_38;
    }
    v30 = 820LL;
LABEL_42:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclippingdata.cpp",
      (const char *)(unsigned int)v20,
      v33);
    return (unsigned int)v20;
  }
LABEL_6:
  v14 = a6;
  if ( a6 != D2D1_ANTIALIAS_MODE_ALIASED
    && (*(unsigned __int8 (__fastcall **)(const struct CShape *, __int64 *))(*(_QWORD *)a3 + 64LL))(a3, &v34)
    && (_DWORD)v34 == 1
    && ((unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a4)
     || (unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a4))
    && (!a5 || CShape::IsAxisAlignedRectangle(a5) && CMILMatrix::Is2DAxisAlignedPreserving(this)) )
  {
    v14 = D2D1_ANTIALIAS_MODE_ALIASED;
  }
  if ( v14 != *((_DWORD *)this + 28) )
  {
    *((_DWORD *)this + 28) = v14;
    *a7 = 1;
  }
  v15 = 0;
  LOBYTE(v33) = 0;
  if ( v14 != D2D1_ANTIALIAS_MODE_ALIASED )
  {
    if ( CCommonRegistryData::CpuClipAASinkForceEnable )
    {
      v15 = v12 > 0.0;
      LOBYTE(v33) = v12 > 0.0;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)v10 + 31) + 208LL))(*((_QWORD *)v10 + 31), &v33);
      v15 = v33;
    }
  }
  if ( v15 != *((_BYTE *)this + 128)
    || (v16 = *((_QWORD *)this + 15)) != 0
    && *(_BYTE *)(v16 + 56)
    && !(unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a4)
    && (v32 = CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a4)) == 0 )
  {
    wil::com_ptr_t<CWeakReference<CVisual>,wil::err_returncode_policy>::reset((char *)this + 120);
    *((_BYTE *)this + 128) = v33;
    *a7 = 1;
  }
  return 0LL;
}
