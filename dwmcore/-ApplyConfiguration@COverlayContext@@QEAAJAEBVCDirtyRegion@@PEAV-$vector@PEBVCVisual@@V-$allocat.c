/*
 * XREFs of ?ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N2@Z @ 0x18008BD94
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18008B8BC (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E5694 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180041810 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x18008B894 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800C9844 (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800CA25C (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x18012A09C (McTemplateU0xq_EventWriteTransfer.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x18012D42C (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?reset@?$shared_ptr@VCRegion@@@std@@QEAAXXZ @ 0x18012D48A (-reset@-$shared_ptr@VCRegion@@@std@@QEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBQEBVCVisual@@@?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@QEAAPEAPEBVCVisual@@QEAPEBV2@AEBQEBV2@@Z @ 0x1801D7A7C (--$_Emplace_reallocate@AEBQEBVCVisual@@@-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@std@@@s.c)
 *     ??$_Emplace_reallocate@PEBVCVisual@@@?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@QEAAPEAPEBVCVisual@@QEAPEBV2@$$QEAPEBV2@@Z @ 0x1801D7B78 (--$_Emplace_reallocate@PEBVCVisual@@@-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@std@@@std@.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x1801D9EF8 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
 *     ?UseSyncIntervalAndAllowTearing@CDirectFlipInfo@@QEBA_NPEAVIOverlaySwapChain@@@Z @ 0x1801DB810 (-UseSyncIntervalAndAllowTearing@CDirectFlipInfo@@QEBA_NPEAVIOverlaySwapChain@@@Z.c)
 *     ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x1801F3640 (--0CDirectFlipInfo@@QEAA@AEBV0@@Z.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801F36EC (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1801F373C (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 */

__int64 __fastcall COverlayContext::ApplyConfiguration(
        COverlayContext *this,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        _BYTE *a5)
{
  __int64 v6; // rcx
  char v9; // r15
  float *v10; // rcx
  unsigned int v11; // r8d
  int v12; // r8d
  unsigned int v13; // r9d
  char v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // rbx
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // r12
  CDirectFlipInfo **v24; // rbx
  CDirectFlipInfo *v25; // rcx
  __int64 v26; // r14
  int v27; // ebx
  __int64 v29; // rbp
  __int64 v30; // rcx
  _QWORD *v31; // rdx
  CDirectFlipInfo *v32; // rdx
  char v33; // bp
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rcx
  __int64 v38; // r9
  int v39; // eax
  CDirectFlipInfo *v40; // rax
  unsigned int v41; // ecx
  CDirectFlipInfo *v42; // rax
  __int64 v43; // r8
  __int64 (__fastcall ***v44)(_QWORD, _BYTE *); // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // ecx
  int v48; // ebx
  __int64 v49; // rax
  bool v50; // r15
  char v51; // r13
  __int64 v52; // rbx
  __int64 i; // rax
  _BYTE *v54; // rax
  int v55; // eax
  char *v56; // rcx
  CDirectFlipInfo *v57; // rcx
  struct IOverlaySwapChain *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v61[88]; // [rsp+40h] [rbp-58h] BYREF
  char v62; // [rsp+A0h] [rbp+8h]
  unsigned int v63; // [rsp+A0h] [rbp+8h]
  __int64 v64; // [rsp+A8h] [rbp+10h]

  v6 = *(_QWORD *)this;
  v62 = 0;
  *a5 = 0;
  v9 = 0;
  *a4 = 0;
  v10 = (float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 160LL))(v6) + 4);
  if ( !*(_BYTE *)(a2 + 4420) )
  {
    v11 = 0;
    if ( !*(_DWORD *)(a2 + 2820) )
    {
LABEL_22:
      v14 = 0;
      goto LABEL_5;
    }
    while ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
               v10,
               (float *)(16LL * v11 + a2 + 2660)) )
    {
      v11 = v12 + 1;
      if ( v11 >= v13 )
        goto LABEL_22;
    }
  }
  v14 = 1;
LABEL_5:
  v15 = *(_QWORD *)this + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)this + 8LL) + 12LL);
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v19 = *((_QWORD *)this + 913);
  v20 = v16;
  v21 = *((_QWORD *)this + 914);
  while ( v19 != v21 )
  {
    LOBYTE(v17) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD *, __int64, __int64))(**(_QWORD **)(v19 + 16) + 216LL))(
      *(_QWORD *)(v19 + 16),
      v17,
      1LL,
      v20);
    if ( !*(_BYTE *)(v19 + 181)
      && (!(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v19 + 16) + 320LL))(*(_QWORD *)(v19 + 16))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v19 + 16) + 328LL))(*(_QWORD *)(v19 + 16))) )
    {
      v17 = *(_QWORD **)(a3 + 8);
      v18 = (_QWORD *)(v19 + 8);
      if ( v17 == *(_QWORD **)(a3 + 16) )
      {
        std::vector<CVisual const *>::_Emplace_reallocate<CVisual const * const &>(a3, v17, v18);
      }
      else
      {
        *v17 = *v18;
        *(_QWORD *)(a3 + 8) += 8LL;
      }
    }
    v19 += 224LL;
  }
  v22 = *((_QWORD *)this + 1379);
  v23 = 0LL;
  if ( v22 )
  {
    v30 = *(_QWORD *)(v22 + 720);
    if ( !*(_QWORD *)(v30 + 256) && !*(_BYTE *)(v30 + 107) )
    {
      v31 = *(_QWORD **)(a3 + 8);
      v60 = *((_QWORD *)this + 1379);
      if ( v31 == *(_QWORD **)(a3 + 16) )
      {
        std::vector<CVisual const *>::_Emplace_reallocate<CVisual const *>(a3, v31, &v60);
      }
      else
      {
        *v31 = v22;
        *(_QWORD *)(a3 + 8) += 8LL;
      }
    }
  }
  v24 = (CDirectFlipInfo **)((char *)this + 11168);
  if ( *((int *)this + 2772) > 0 )
  {
    v32 = *v24;
    v9 = 1;
    if ( *v24
      && *((_QWORD *)v32 + 1) == *((_QWORD *)this + 1381)
      && *((_QWORD *)v32 + 2) == *((_QWORD *)this + 1382)
      && *((_QWORD *)v32 + 3) == *((_QWORD *)this + 1383)
      && (*((_DWORD *)v32 + 13) == 1) == (*((_DWORD *)this + 2773) == 1) )
    {
      v33 = 1;
      v62 = 1;
    }
    else
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1382) + 128LL))(*((_QWORD *)this + 1382)) )
        goto LABEL_71;
      v33 = 0;
    }
    if ( *((_QWORD *)this + 914) == *((_QWORD *)this + 913)
      && !*((_DWORD *)this + 2820)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1382) + 152LL))(*((_QWORD *)this + 1382)) )
    {
      v34 = *((_QWORD *)this + 1382);
      v60 = 0LL;
      v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 48LL))(v34);
      if ( v35 )
      {
        v36 = v35 + *(int *)(*(_QWORD *)(v35 + 8) + 4LL);
        if ( v60 )
        {
          v37 = v60 + 8 + *(int *)(*(_QWORD *)(v60 + 8) + 4LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
        }
        (**(void (__fastcall ***)(__int64, GUID *, __int64 *))(v36 + 8))(
          v36 + 8,
          &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
          &v60);
      }
      if ( v60 && (**(unsigned __int8 (__fastcall ***)(__int64))v60)(v60) )
      {
        v9 = 0;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
        {
          v38 = 0LL;
LABEL_69:
          McTemplateU0xq_EventWriteTransfer(
            *(unsigned int *)(*((_QWORD *)this + 1382) + 40LL),
            &EVTDESC_ADVANCED_DIRECTFLIP_CANCEL,
            *(unsigned int *)(*((_QWORD *)this + 1382) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*((_QWORD *)this + 1382) + 40LL)) << 32),
            v38);
          goto LABEL_70;
        }
        goto LABEL_70;
      }
      if ( *((int *)this + 2773) >= 3 )
      {
        if ( v33
          && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)*v24 + 2) + 320LL))(*((_QWORD *)*v24 + 2)) )
        {
          goto LABEL_64;
        }
        if ( *((_BYTE *)this + 11304) )
        {
          v9 = 0;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
          {
            v38 = 2LL;
            goto LABEL_69;
          }
LABEL_70:
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v60);
          goto LABEL_9;
        }
      }
      if ( !v33 )
        goto LABEL_70;
LABEL_64:
      if ( CDirectFlipInfo::RenderingRealizationChanged(*v24) )
        goto LABEL_70;
      v39 = *((_DWORD *)this + 2773);
      if ( v39 < 3 )
        goto LABEL_70;
      if ( v39 == 4 )
        goto LABEL_70;
      v9 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0 )
        goto LABEL_70;
      v38 = 1LL;
      goto LABEL_69;
    }
LABEL_71:
    v9 = 0;
  }
LABEL_9:
  if ( *v24 && (*((_DWORD *)*v24 + 12) != 3 || v14 && (!v9 || !v62)) )
  {
    COverlayContext::ClearDirectFlip(this);
    *((_BYTE *)this + 11310) = 1;
  }
  if ( !*v24 && v9 )
  {
    *v24 = 0LL;
    v40 = (CDirectFlipInfo *)DefaultHeap::Alloc(0x80uLL);
    if ( !v40 || (v42 = CDirectFlipInfo::CDirectFlipInfo(v40, (COverlayContext *)((char *)this + 11040))) == 0LL )
    {
      v27 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, -2147024882, 0x16u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, -2147024882, 0x2B3u, 0LL);
      goto LABEL_16;
    }
    *((_DWORD *)v42 + 12) = 2;
    *v24 = v42;
    if ( *((int *)v42 + 13) >= 3 )
      *((_BYTE *)this + 11310) = 1;
    LOBYTE(v43) = 1;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)v42 + 2) + 408LL))(*((_QWORD *)v42 + 2), 1LL, v43);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      v44 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(_QWORD *)this
                                                      + 8LL
                                                      + *(int *)(*(_QWORD *)(*(_QWORD *)this + 8LL) + 12LL));
      v45 = (**v44)(v44, v61);
      McTemplateU0xq_EventWriteTransfer(
        v46,
        &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT,
        *(unsigned int *)(v45 + 8),
        1LL);
    }
  }
  v25 = *v24;
  if ( !*v24 )
  {
    v26 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)this + 914) - *((_QWORD *)this + 913)) >> 5);
    v63 = 0;
    if ( !(_DWORD)v26 )
    {
LABEL_14:
      if ( *a5 && *((_BYTE *)this + 11024) )
      {
        for ( i = *((_QWORD *)this + 913); i != *((_QWORD *)this + 914); i += 224LL )
        {
          if ( *(_BYTE *)(i + 181) )
          {
            v54 = a4;
            goto LABEL_113;
          }
        }
      }
      goto LABEL_15;
    }
    v29 = 0LL;
    while ( 1 )
    {
      v64 = *((_QWORD *)this + 913);
      v48 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v64 + v29 + 16) + 336LL))(*(_QWORD *)(v64 + v29 + 16));
      v49 = *((_QWORD *)this + 913);
      v50 = 1;
      v51 = 0;
      if ( *(_DWORD *)(v49 + v29 + 208) == ++v63
        && (!*(_BYTE *)(v49 + v29 + 181) || v48 >= 3 && *(_BYTE *)(v49 + v29 + 182)) )
      {
        if ( v48 != -1 && !CCommonRegistryData::m_fDisableIndependentFlip )
          goto LABEL_94;
      }
      else
      {
        v51 = 1;
      }
      v50 = 0;
LABEL_94:
      COverlayContext::EnsureIndependentFlipState(this, (struct COverlayContext::OverlayPlaneInfo *)(v49 + v23), v50);
      if ( v50
        && v48 == 2
        && (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v64 + v29 + 16) + 344LL))(*(_QWORD *)(v64 + v29 + 16)) == *((_QWORD *)g_pComposition + 62) )
      {
        *a5 = 1;
      }
      if ( v51
        || (!v50 || v48 < 3)
        && (v52 = *((_QWORD *)this + 913),
            *(_DWORD *)(v52 + v29 + 216) != (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v52 + v29 + 16)
                                                                                   + 288LL))(*(_QWORD *)(v52 + v29 + 16))) )
      {
        *(_BYTE *)(*((_QWORD *)this + 913) + v29 + 184) = 1;
      }
      v23 += 224LL;
      v29 += 224LL;
      if ( v63 >= (unsigned int)v26 )
        goto LABEL_14;
    }
  }
  if ( v9 )
  {
    v55 = *((_DWORD *)this + 2773);
    *((_DWORD *)v25 + 13) = v55;
    v56 = (char *)v25 + 32;
    if ( v55 < 3 )
      std::shared_ptr<CRegion>::reset(v56);
    else
      std::shared_ptr<CCursorState::ShapeData>::operator=(v56, (char *)this + 11072);
  }
  v57 = *v24;
  if ( *((int *)*v24 + 13) >= 3 && v14 )
    *((_BYTE *)this + 11310) = 1;
  if ( (int)CDirectFlipInfo::Activate(v57) < 0 )
  {
    COverlayContext::ClearDirectFlip(this);
    *((_BYTE *)this + 11310) = 1;
    goto LABEL_15;
  }
  if ( !CDirectFlipInfo::RenderingRealizationChanged(*v24) )
  {
LABEL_15:
    v27 = 0;
    goto LABEL_16;
  }
  v58 = (struct IOverlaySwapChain *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 176LL))(*(_QWORD *)this);
  if ( CDirectFlipInfo::UseSyncIntervalAndAllowTearing(*v24, v58) )
  {
    *a4 = 1;
    goto LABEL_112;
  }
  if ( *((_BYTE *)*v24 + 122)
    && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)*v24 + 2) + 336LL))(*((_QWORD *)*v24 + 2)) == 2 )
  {
LABEL_112:
    v54 = a5;
LABEL_113:
    *v54 = 1;
    goto LABEL_15;
  }
  v27 = 0;
  if ( (unsigned int)COverlayContext::GetEffectiveDirectFlipMode((__int64)this) == 1 )
    *((_BYTE *)this + 11310) = 1;
LABEL_16:
  if ( *((_DWORD *)this + 2772) != 1 && *((_DWORD *)this + 2772) != 2 )
  {
    if ( *((_DWORD *)this + 2772) != 3 )
      goto LABEL_19;
    LOBYTE(v18) = *((_BYTE *)this + 11165);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**((_QWORD **)this + 1382) + 248LL))(
      *((_QWORD *)this + 1382),
      *((_QWORD *)this + 1383),
      v18);
    *((_DWORD *)this + 2772) = 2;
    *((_BYTE *)this + 11164) = 0;
  }
  *((_QWORD *)this + 1380) = 0LL;
  *((_QWORD *)this + 1381) = 0LL;
  v59 = *((_QWORD *)this + 1382);
  *((_QWORD *)this + 1382) = 0LL;
  if ( v59 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
  std::shared_ptr<CRegion>::reset((char *)this + 11072);
  *(_QWORD *)((char *)this + 11108) = 0LL;
  *((_QWORD *)this + 1383) = 0LL;
  *((_DWORD *)this + 2774) = 0;
  *((_DWORD *)this + 2786) = 0;
  *((_QWORD *)this + 1394) = 0LL;
  *((_BYTE *)this + 11160) = 0;
  *((_WORD *)this + 5581) = 256;
  *((_BYTE *)this + 11164) = 0;
LABEL_19:
  *((_DWORD *)this + 2772) = 0;
  if ( v27 < 0 )
    COverlayContext::Reset(this);
  return (unsigned int)v27;
}
