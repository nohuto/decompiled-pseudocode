/*
 * XREFs of ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18004C8B4
 * Callers:
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18004C79C (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 * Callees:
 *     ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18001D044 (-erase@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180035DF4 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x1800395D0 (-IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18003A624 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ?MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ @ 0x18003A690 (-MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ.c)
 *     ?GetMinSupportedMax2DTextureSize@CComposition@@QEBA?BIXZ @ 0x18004CC04 (-GetMinSupportedMax2DTextureSize@CComposition@@QEBA-BIXZ.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18004CF18 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x18004E764 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180080F78 (-DoesContain@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008883C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F6850 (-SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CBackdropVisualImage::ValidateRootAndSourceRectangle(
        CCachedVisualImage *this,
        __int64 a2,
        _OWORD *a3,
        char a4,
        char *a5)
{
  bool v5; // zf
  char *v7; // r13
  __int64 v9; // rax
  unsigned int MinSupportedMax2DTextureSize; // eax
  __int64 v11; // r11
  char v12; // r15
  char v13; // r8
  char v14; // r12
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm8_4
  float v18; // xmm4_4
  float v19; // xmm7_4
  float v20; // xmm5_4
  struct D2D_RECT_F *v21; // r9
  __int64 v22; // r10
  unsigned int v23; // xmm4_4
  unsigned int v24; // xmm5_4
  float v25; // xmm3_4
  float v27; // xmm2_4
  __int64 v28; // rbx
  const char *v29; // rdx
  __int64 v30; // rax
  CCachedVisualImage::CCachedTarget **v31; // rbx
  __int64 v32; // r15
  unsigned __int64 v33; // r14
  CCachedVisualImage::CCachedTarget *v34; // rsi
  int v35; // eax
  unsigned int v36; // ebx
  float v37; // xmm1_4
  int v38; // xmm0_4
  int v39; // [rsp+28h] [rbp-51h]
  struct D2D_MATRIX_3X2_F v40; // [rsp+30h] [rbp-49h] BYREF
  __int128 v41; // [rsp+48h] [rbp-31h] BYREF
  struct D2D_RECT_F v42; // [rsp+58h] [rbp-21h] BYREF
  float v43; // [rsp+68h] [rbp-11h]
  float v44; // [rsp+6Ch] [rbp-Dh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]

  v5 = *((_BYTE *)this + 1912) == 0;
  v7 = a5;
  BYTE1(v39) = a4;
  *(_QWORD *)&v40.m[2][0] = a5;
  v9 = *((_QWORD *)g_pComposition + 27);
  if ( v5 )
  {
    v37 = *(float *)(v9 + 556);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v37 - *((float *)this + 466)) & _xmm) > 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v9 + 560) - *((float *)this + 467)) & _xmm) > 0.0000011920929 )
    {
      v38 = *(_DWORD *)(v9 + 560);
      *((_DWORD *)this + 467) = v38;
      *((_DWORD *)this + 470) = v38;
      *((float *)this + 466) = v37;
      *((float *)this + 469) = v37;
    }
  }
  MinSupportedMax2DTextureSize = CComposition::GetMinSupportedMax2DTextureSize(this);
  if ( *((_DWORD *)this + 468) != MinSupportedMax2DTextureSize )
    *((_DWORD *)this + 468) = MinSupportedMax2DTextureSize;
  v12 = 0;
  LOBYTE(v39) = 0;
  if ( *((_QWORD *)this + 18) != v11
    || !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(
                           (char *)this + 96,
                           a3)
    || v13 )
  {
    v35 = CBackdropVisualImage::SetRootAndSourceRectangle(this, v11, a3);
    v36 = v35;
    if ( v35 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\backdropvisualimage.cpp",
        (const char *)(unsigned int)v35,
        v39);
      return v36;
    }
    v12 = 1;
    LOBYTE(v39) = 1;
  }
  v14 = v12;
  *(_OWORD *)((char *)this + 1848) = *a3;
  LODWORD(v15) = *((_DWORD *)this + 25) ^ _xmm;
  LODWORD(v16) = *((_DWORD *)this + 24) ^ _xmm;
  v17 = v15 + *((float *)this + 463);
  v18 = v15 + *((float *)this + 465);
  v19 = v16 + *((float *)this + 462);
  v20 = v16 + *((float *)this + 464);
  *((float *)this + 463) = v17;
  *((float *)this + 465) = v18;
  *((float *)this + 462) = v19;
  *((float *)this + 464) = v20;
  if ( CBackdropVisualImage::IsValid(this) )
  {
    v25 = *((float *)this + 469);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v25 - 1.0) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 470) - 1.0) & _xmm) >= 0.000081380211 )
    {
      v27 = *((float *)this + 470);
      v42.top = 0.0;
      v42.right = 0.0;
      *(_QWORD *)&v40.m11 = __PAIR64__(LODWORD(v17), LODWORD(v19));
      *(_QWORD *)&v40.m[1][0] = __PAIR64__(v23, v24);
      v42.bottom = v27;
      v41 = *(_OWORD *)&v40.m11;
      v42.left = v25;
      v43 = 0.0 - (float)(v25 * 0.0);
      v44 = 0.0 - (float)(v27 * 0.0);
      D2DMatrixHelper::TransformRect_AxisAlignedPreserving((D2DMatrixHelper *)&v41, &v42, &v40, v21);
      v41 = *(_OWORD *)&v40.m11;
      *(_OWORD *)((char *)this + 1848) = *(_OWORD *)&v40.m11;
    }
    if ( v12 )
    {
      CCachedVisualImage::MarkAllTargetsDirty(this);
      *((_BYTE *)this + 1952) = 0;
    }
    else if ( (_BYTE)v21 )
    {
      v31 = (CCachedVisualImage::CCachedTarget **)*((_QWORD *)this + 24);
      v32 = *(_QWORD *)(v22 + 608);
      v33 = CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta & -(__int64)(*((_BYTE *)this + 1912) != 0);
      while ( v31 != *((CCachedVisualImage::CCachedTarget ***)this + 25) )
      {
        v34 = *v31;
        if ( CCachedVisualImage::CCachedTarget::IsValid(*v31) )
        {
          if ( v32 - *((_QWORD *)v34 + 5) > v33 )
          {
            CCachedVisualImage::CCachedTarget::MarkDirty(v34);
            v14 = 1;
          }
          ++v31;
        }
        else
        {
          v31 = *std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase(
                   (__int64)this + 192,
                   (CCachedVisualImage::CCachedTarget ***)&v40,
                   v31);
        }
      }
      v12 = v39;
      v7 = *(char **)&v40.m[2][0];
    }
  }
  if ( v7 )
    *v7 = v14;
  if ( v14 )
  {
    v28 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v40.m[2], word_180338FC0);
    v29 = "BVI-RealizationIsDirty-Updated";
    if ( !v12 )
      v29 = "BVI-RealizationIsDirty-NotUpdated";
    v30 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v40, v29);
    CBackdropVisualImage::LogEtwEvent(this, v30, v28);
  }
  return 0LL;
}
