/*
 * XREFs of ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x1800B7008
 * Callers:
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x1800B6EBC (-Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180034214 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1800B72EC (-Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z.c)
 *     ??4?$com_ptr_t@VCAtlasBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCAtlasBitmapResource@@@Z @ 0x1800B7394 (--4-$com_ptr_t@VCAtlasBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCAtlasBit.c)
 *     ?Update@CAtlasBitmapResource@@QEAAJV?$span@$$CBE$0?0@gsl@@_N@Z @ 0x1800B74A4 (-Update@CAtlasBitmapResource@@QEAAJV-$span@$$CBE$0-0@gsl@@_N@Z.c)
 *     ?GenerateGradientPixels@CD2DFactory@@QEAAJPEBUD2D1_GRADIENT_STOP@@IW4D2D1_GRADIENT_PIXEL_USAGE@@W4D2D1_COLOR_SPACE@@22W4D2D1_EXTEND_MODE@@W4D2D1_COLOR_INTERPOLATION_MODE@@W4DXGI_FORMAT@@PEAXI@Z @ 0x1800B74F8 (-GenerateGradientPixels@CD2DFactory@@QEAAJPEBUD2D1_GRADIENT_STOP@@IW4D2D1_GRADIENT_PIXEL_USAGE@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1800F06B8 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V-$bu.c)
 *     ?Create@CD2DBrush@@SAJPEAVCD2DResourceManager@@PEAUID2D1Brush@@PEAPEAV1@@Z @ 0x1800F0790 (-Create@CD2DBrush@@SAJPEAVCD2DResourceManager@@PEAUID2D1Brush@@PEAPEAV1@@Z.c)
 *     ?CreateGradientStopCollection@CD2DContext@@QEAAJV?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@W4D2D1_GAMMA@@W4D2D1_EXTEND_MODE@@PEAPEAUID2D1GradientStopCollection@@@Z @ 0x1800F9C50 (-CreateGradientStopCollection@CD2DContext@@QEAAJV-$span@$$CBUD2D1_GRADIENT_STOP@@$0-0@gsl@@W4D2D.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CGradientSource::Generate(
        struct IAtlasEntryOwner *a1,
        struct CD2DResourceManager **a2,
        __int64 a3,
        unsigned int *a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int8 a7,
        unsigned int a8)
{
  struct CD2DBrush **v8; // rax
  unsigned int v13; // edi
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  struct ID2D1Brush *v17; // rbx
  int GradientPixels; // eax
  unsigned int v19; // ecx
  gsl::details *v20; // rcx
  __int64 v21; // r8
  struct CD2DBrush *v22; // r14
  int v23; // eax
  unsigned int v24; // ecx
  struct CD2DBrush **v25; // rax
  _QWORD *v26; // rax
  int GradientStopCollection; // eax
  unsigned int v29; // ecx
  struct CD2DResourceManager *v30; // rcx
  int v31; // eax
  unsigned int v32; // ecx
  struct ID2D1Brush *v33; // rbx
  struct ID2D1Brush *v34; // r14
  struct ID2D1Brush *v35; // r15
  int v36; // eax
  unsigned int v37; // ecx
  struct CD2DBrush *v38; // rbx
  __int64 v39; // rsi
  char *v40; // rcx
  __int64 v41; // rdx
  int v42; // eax
  unsigned int v43; // ecx
  struct CD2DBrush *v44[2]; // [rsp+60h] [rbp-59h] BYREF
  struct ID2D1Brush *v45[2]; // [rsp+70h] [rbp-49h] BYREF
  struct ID2D1Brush *v46; // [rsp+80h] [rbp-39h] BYREF
  __int64 v47; // [rsp+88h] [rbp-31h] BYREF
  struct IAtlasEntryOwner *v48; // [rsp+90h] [rbp-29h] BYREF
  __int128 v49; // [rsp+98h] [rbp-21h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-11h]

  v8 = *(struct CD2DBrush ***)a3;
  v48 = a1;
  v13 = 0;
  if ( v8 && !*v8 )
  {
    v44[0] = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v44);
    v14 = CAtlasBitmapResource::Create(a1, (struct CD3DDevice *)a2, v44);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x92u, 0LL);
    }
    else
    {
      v17 = (struct ID2D1Brush *)DefaultHeap::Alloc(0x2000uLL);
      if ( v17 )
      {
        GradientPixels = CD2DFactory::GenerateGradientPixels(a8, *((_QWORD *)a4 + 1), *a4, a7 ^ 1u);
        v13 = GradientPixels;
        if ( GradientPixels < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, GradientPixels, 0xA4u, 0LL);
        }
        else
        {
          gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v45, 0x2000LL);
          if ( v45[0] == (struct ID2D1Brush *)-1LL )
          {
            gsl::details::terminate(v20);
            JUMPOUT(0x1800B72E2LL);
          }
          v22 = v44[0];
          LOBYTE(v21) = a6;
          v45[1] = v17;
          v23 = CAtlasBitmapResource::Update(v44[0], v45, v21);
          v13 = v23;
          if ( v23 >= 0 )
          {
            wil::com_ptr_t<CAtlasBitmapResource,wil::err_returncode_policy>::operator=((char *)v48 + 16, v22);
            v25 = *(struct CD2DBrush ***)a3;
            v44[0] = 0LL;
            *v25 = v22;
            operator delete(v17);
            wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v44);
            goto LABEL_9;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xA7u, 0LL);
        }
        operator delete(v17);
      }
      else
      {
        v13 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x98u, 0LL);
      }
    }
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v44);
    return v13;
  }
LABEL_9:
  v26 = *(_QWORD **)(a3 + 8);
  if ( v26 && !*v26 )
  {
    *(_OWORD *)v45 = *(_OWORD *)a4;
    v46 = 0LL;
    v44[0] = 0LL;
    v47 = 0LL;
    GradientStopCollection = CD2DContext::CreateGradientStopCollection(
                               (int)a2 + 16,
                               (unsigned int)v45,
                               a5,
                               a8,
                               (__int64)&v47);
    v13 = GradientStopCollection;
    if ( GradientStopCollection < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, GradientStopCollection, 0xBEu, 0LL);
    }
    else
    {
      v30 = a2[27];
      v49 = 0LL;
      v45[0] = 0LL;
      if ( a7 )
      {
        v31 = (*(__int64 (__fastcall **)(struct CD2DResourceManager *, __int128 *, _QWORD, __int64, struct ID2D1Brush **))(*(_QWORD *)v30 + 80LL))(
                v30,
                &v49,
                0LL,
                v47,
                v45);
        v13 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0xCAu, 0LL);
          if ( v45[0] )
            (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v45[0] + 16LL))(v45[0]);
          goto LABEL_20;
        }
        v33 = v45[0];
        v46 = v45[0];
        v34 = v45[0];
        goto LABEL_16;
      }
      v50 = 0LL;
      v42 = (*(__int64 (__fastcall **)(struct CD2DResourceManager *, __int128 *, _QWORD, __int64, struct ID2D1Brush **))(*(_QWORD *)v30 + 88LL))(
              v30,
              &v49,
              0LL,
              v47,
              v45);
      v13 = v42;
      if ( v42 >= 0 )
      {
        v33 = v45[0];
        v45[0] = 0LL;
        v34 = v33;
        v46 = v33;
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v45);
LABEL_16:
        v35 = v33;
        v36 = CD2DBrush::Create(a2[23], v33, v44);
        v13 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0xDCu, 0LL);
        }
        else
        {
          v38 = v44[0];
          v39 = (__int64)v48;
          v40 = (char *)v44[0] + *(int *)(*((_QWORD *)v44[0] + 2) + 8LL) + 16;
          (*(void (__fastcall **)(char *, unsigned __int64))(*(_QWORD *)v40 + 40LL))(
            v40,
            ((unsigned __int64)v48 + 8) & -(__int64)(v48 != 0LL));
          v44[0] = 0LL;
          v41 = *(_QWORD *)(v39 + 32) - *(_QWORD *)(v39 + 24);
          v45[0] = 0LL;
          v48 = 0LL;
          *(_QWORD *)detail::vector_facade<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
                       v39 + 24,
                       v41 >> 3) = v38;
          wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v48);
          wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)v45);
          v46 = 0LL;
          if ( !v39 )
            v34 = v35;
          **(_QWORD **)(a3 + 8) = v34;
        }
        goto LABEL_20;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0xD7u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v45);
    }
LABEL_20:
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)v44);
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v46);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v47);
  }
  return v13;
}
