/*
 * XREFs of ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003A7C0
 * Callers:
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18003A6E0 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1800CDAF4 (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x180214310 (-GetD2DBitmap@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180214448 (-GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap.c)
 * Callees:
 *     ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18001D044 (-erase@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     ?FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z @ 0x180032CD8 (-FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18003AC10 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ??4?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTargetBitmap@@@Z @ 0x18003B3A8 (--4-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIRenderTar.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x1800CE364 (-RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z.c)
 *     ??$emplace_back@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?A_T$$QEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@1@@Z @ 0x1800EFA0C (--$emplace_back@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x1800EFB74 (-CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ??1CCachedTarget@CCachedVisualImage@@QEAA@XZ @ 0x1800F3B7C (--1CCachedTarget@CCachedVisualImage@@QEAA@XZ.c)
 *     ?clear@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1800F3E2C (-clear@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::EnsureRenderTargetBitmap(
        struct D2D_SIZE_U *this,
        const struct RenderTargetInfo *a2,
        struct IRenderTargetBitmap **a3)
{
  struct IRenderTargetBitmap **v3; // r13
  struct D2D_SIZE_U *v5; // rsi
  unsigned int v6; // edi
  float v7; // xmm0_4
  UINT32 width; // edi
  float *v9; // rax
  float v10; // xmm1_4
  float v11; // xmm2_4
  float height; // xmm3_4
  CCachedVisualImage::CCachedTarget **v13; // rbx
  UINT32 v14; // r12d
  struct D2D_SIZE_U v15; // rbx
  struct D2D_SIZE_U v16; // rdi
  void (__fastcall ***v17)(_QWORD, _DWORD *); // rax
  int v18; // eax
  CCachedVisualImage::CCachedTarget *v19; // rbx
  int v20; // eax
  unsigned int v21; // ecx
  struct IRenderTargetBitmap *v22; // r8
  __int64 v23; // rcx
  CCachedVisualImage::CCachedTarget *v25; // r13
  int (__fastcall ***v26)(_QWORD); // rcx
  void (__fastcall ***v27)(_QWORD, CCachedVisualImage::CCachedTarget **); // rcx
  struct CCachedVisualImage::CCachedTarget *ExistingCachedTarget; // rax
  int v29; // eax
  unsigned int v30; // ecx
  CCachedVisualImage::CCachedTarget *v31; // rbx
  int v32; // eax
  unsigned int v33; // ecx
  CCachedVisualImage::CCachedTarget *v34; // rbx
  unsigned int v35; // [rsp+20h] [rbp-59h]
  CCachedVisualImage::CCachedTarget *v36; // [rsp+30h] [rbp-49h] BYREF
  struct IRenderTargetBitmap **v37; // [rsp+38h] [rbp-41h]
  struct IRenderTargetBitmap *v38; // [rsp+40h] [rbp-39h] BYREF
  struct D2D_SIZE_U v39; // [rsp+48h] [rbp-31h] BYREF
  _DWORD v40[2]; // [rsp+50h] [rbp-29h] BYREF
  int v41; // [rsp+58h] [rbp-21h]
  float v42; // [rsp+60h] [rbp-19h]
  char v43; // [rsp+64h] [rbp-15h]
  CCachedVisualImage::CCachedTarget **v44; // [rsp+68h] [rbp-11h] BYREF
  __int128 v45; // [rsp+70h] [rbp-9h]

  v37 = a3;
  *a3 = 0LL;
  v3 = a3;
  v5 = this;
  v6 = 0;
  v38 = 0LL;
  if ( this[19].width )
  {
    v6 = -2147467263;
    v35 = 913;
LABEL_55:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v6, v35, 0LL);
    return v6;
  }
  ++CCachedVisualImage::s_CVIEnsureBitmapCount;
  if ( BYTE1(this[222].width) )
  {
    CCachedVisualImage::RemoveInvalidTargets((CCachedVisualImage *)this, this[221]);
    ExistingCachedTarget = CCachedVisualImage::FindExistingCachedTarget((CCachedVisualImage *)v5, a2);
    if ( ExistingCachedTarget
      || (this = (struct D2D_SIZE_U *)v5[24], (__int64)(*(_QWORD *)&v5[25] - (_QWORD)this) >> 3)
      && (ExistingCachedTarget = (struct CCachedVisualImage::CCachedTarget *)*this) != 0LL )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(
        &v38,
        *((_QWORD *)ExistingCachedTarget + 1));
      goto LABEL_24;
    }
    v35 = 937;
    goto LABEL_54;
  }
  (**(void (__fastcall ***)(char *, struct D2D_SIZE_U *))&this[9])((char *)&this[9], &v39);
  v7 = 0.0;
  v45 = 0LL;
  if ( !*(_QWORD *)&v5[18] || (width = v39.width) == 0 || (LODWORD(this) = v39.height) == 0 )
  {
    std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear(&v5[24]);
    v35 = 950;
    goto LABEL_54;
  }
  if ( BYTE2(v5[222].width) )
  {
    v10 = 0.0;
    height = (float)(int)v39.height;
    v11 = (float)(int)v39.width;
  }
  else
  {
    v9 = (float *)v5[14];
    if ( v9 )
    {
      v7 = v9[17];
      v11 = v9[18];
      height = v9[19];
      v10 = v9[16];
    }
    else
    {
      v10 = *(float *)&v5[12].width;
      v7 = *(float *)&v5[12].height;
      v11 = *(float *)&v5[13].width;
      height = *(float *)&v5[13].height;
    }
  }
  *(_QWORD *)&v45 = __PAIR64__(LODWORD(v7), LODWORD(v10));
  *((_QWORD *)&v45 + 1) = __PAIR64__(LODWORD(height), LODWORD(v11));
  if ( v11 <= v10 || height <= v7 )
  {
    v35 = 974;
LABEL_54:
    v6 = -2003304309;
    goto LABEL_55;
  }
  v13 = (CCachedVisualImage::CCachedTarget **)v5[24];
  v36 = (CCachedVisualImage::CCachedTarget *)v39;
  v14 = v39.height;
  while ( v13 != (CCachedVisualImage::CCachedTarget **)v5[25] )
  {
    v25 = *v13;
    v26 = (int (__fastcall ***)(_QWORD))(*((_QWORD *)*v13 + 1)
                                       + 8LL
                                       + *(int *)(*(_QWORD *)(*((_QWORD *)*v13 + 1) + 8LL) + 8LL));
    if ( (**v26)(v26) >= 0
      && (v27 = (void (__fastcall ***)(_QWORD, CCachedVisualImage::CCachedTarget **))(*((_QWORD *)v25 + 1)
                                                                                    + 8LL
                                                                                    + *(int *)(*(_QWORD *)(*((_QWORD *)v25 + 1) + 8LL)
                                                                                             + 16LL)),
          (**v27)(v27, &v36),
          v36 == (CCachedVisualImage::CCachedTarget *)__PAIR64__(v14, width)) )
    {
      ++v13;
    }
    else
    {
      v13 = *std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase((__int64)&v5[24], &v44, v13);
    }
  }
  v15 = v5[24];
  v16 = v5[25];
  if ( v15 == v16 )
  {
LABEL_32:
    v36 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v17 = (void (__fastcall ***)(_QWORD, _DWORD *))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(**(_QWORD **)&v15 + 8LL)
                                                                                       + 64LL))(*(_QWORD *)(**(_QWORD **)&v15 + 8LL));
      (**v17)(v17, v40);
      if ( v40[0] == *(_DWORD *)a2 && v40[1] == *((_DWORD *)a2 + 1) )
      {
        v18 = *((_DWORD *)a2 + 2);
        if ( (v41 == DisplayId::None || v41 == v18 || v18 == DisplayId::All)
          && (v42 != 0.0) == (*((float *)a2 + 4) != 0.0)
          && v43 == *((_BYTE *)a2 + 20) )
        {
          break;
        }
      }
      *(_QWORD *)&v15 += 8LL;
      if ( v15 == v16 )
        goto LABEL_32;
    }
    v19 = **(CCachedVisualImage::CCachedTarget ***)&v15;
    v36 = v19;
    if ( v19 )
    {
      v20 = CCachedVisualImage::CCachedTarget::Update(v19);
      v6 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x3D8u, 0LL);
        return v6;
      }
      v22 = (struct IRenderTargetBitmap *)*((_QWORD *)v19 + 1);
      v38 = v22;
      if ( v22 )
      {
        v23 = (__int64)v22 + *(int *)(*((_QWORD *)v22 + 1) + 4LL) + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
      }
      goto LABEL_23;
    }
  }
  v29 = CCachedVisualImage::CreateCachedTarget((CCachedVisualImage *)v5, v39, a2, &v36);
  v6 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x3E2u, 0LL);
    return v6;
  }
  v31 = v36;
  v32 = CCachedVisualImage::CCachedTarget::Update(v36);
  v6 = v32;
  if ( v32 >= 0 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::operator=(&v38, *((_QWORD *)v31 + 1));
    std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::emplace_back<std::unique_ptr<CCachedVisualImage::CCachedTarget>>(
      &v5[24],
      &v36);
    v34 = v36;
    if ( v36 )
    {
      CCachedVisualImage::CCachedTarget::~CCachedTarget(v36);
      operator delete(v34, 0x40uLL);
    }
LABEL_23:
    v3 = v37;
LABEL_24:
    *v3 = v38;
    return v6;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x3E8u, 0LL);
  if ( v31 )
  {
    CCachedVisualImage::CCachedTarget::~CCachedTarget(v31);
    operator delete(v31, 0x40uLL);
  }
  return v6;
}
