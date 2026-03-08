/*
 * XREFs of ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z @ 0x1800B6A80
 * Callers:
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B669C (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV-$TMilR.c)
 *     ?GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x1800B6860 (-GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@.c)
 *     ?GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGradientBrush@@@Z @ 0x180249F54 (-GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGr.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800F064C (-clear_region@-$vector_facade@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V-$buff.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CGradientSource::FindExistingGradient(
        CGradientSource *this,
        struct CD3DDevice *a2,
        char a3,
        const struct CGradientSource::RetrievalParams *a4)
{
  char v7; // bp
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v13; // rdx
  char *v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rcx

  v7 = 1;
  if ( a3 )
  {
    v14 = (char *)this + 16;
    if ( *(_QWORD *)v14 )
    {
      *(_QWORD *)(*(_QWORD *)v14 + 48LL) = 0LL;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v14);
    }
    v15 = *((_QWORD *)this + 3);
    v16 = *((_QWORD *)this + 4);
    while ( v15 != v16 )
    {
      v18 = *(_QWORD *)v15 + 16LL + *(int *)(*(_QWORD *)(*(_QWORD *)v15 + 16LL) + 8LL);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 48LL))(
        v18,
        ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
      v15 += 8LL;
    }
    if ( (__int64)(*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) >> 3 )
      detail::vector_facade<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
        (char *)this + 24,
        0LL);
  }
  if ( *(_QWORD *)a4 )
  {
    v13 = *((_QWORD *)this + 2);
    if ( v13 )
    {
      v17 = v13 + 8 + *(int *)(*(_QWORD *)(v13 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      **(_QWORD **)a4 = *((_QWORD *)this + 2);
    }
    else
    {
      v7 = 0;
    }
  }
  if ( *((_QWORD *)a4 + 1) )
  {
    v8 = *((_QWORD *)this + 3);
    v9 = *((_QWORD *)this + 4);
    while ( v8 != v9 )
    {
      v10 = *(_QWORD *)v8 + 16LL + *(int *)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 8LL);
      if ( (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10) == a2 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)v8 + 80LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        **((_QWORD **)a4 + 1) = v11;
        return v7;
      }
      v8 += 8LL;
    }
    return 0;
  }
  return v7;
}
